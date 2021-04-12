/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView {

	NoteHTMLEditorView* _noteHTMLEditorView;

}

@property (assign,nonatomic,__weak) NoteHTMLEditorView * noteHTMLEditorView;              //@synthesize noteHTMLEditorView=_noteHTMLEditorView - In the implementation block
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)paste:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(NoteHTMLEditorView *)noteHTMLEditorView;
-(void)setNoteHTMLEditorView:(NoteHTMLEditorView *)arg1 ;
-(void)strikethrough:(id)arg1 ;
-(void)calloutOptionInvoked:(long long)arg1 sender:(id)arg2 ;
-(void)ic_evaluateJavaScript:(id)arg1 ;
-(id)ic_evaluateJavaScriptAndWait:(id)arg1 error:(id*)arg2 ;
@end

