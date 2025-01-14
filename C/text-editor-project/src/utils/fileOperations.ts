export const readFile = async (filePath: string): Promise<string> => {
    const response = await fetch(filePath);
    if (!response.ok) {
        throw new Error('Failed to read file');
    }
    return await response.text();
};

export const writeFile = async (filePath: string, content: string): Promise<void> => {
    const response = await fetch(filePath, {
        method: 'PUT',
        headers: {
            'Content-Type': 'text/plain',
        },
        body: content,
    });
    if (!response.ok) {
        throw new Error('Failed to write file');
    }
};