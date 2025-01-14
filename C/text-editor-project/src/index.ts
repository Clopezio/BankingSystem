// This file is the entry point of the application. It initializes the text editor and sets up the main application logic.

import { Editor } from './components/editor';

const editor = new Editor();

// Example usage
editor.openFile('example.txt');
editor.editContent('New content for the file.');
editor.saveFile('example.txt');