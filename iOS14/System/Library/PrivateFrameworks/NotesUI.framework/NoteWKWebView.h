/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView {

	NoteHTMLEditorView* _noteHTMLEditorView;

}

@property (assign,nonatomic,__weak) NoteHTMLEditorView * noteHTMLEditorView;              //@synthesize noteHTMLEditorView=_noteHTMLEditorView - In the implementation block
-(void)toggleUnderline:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)toggleBoldface:(id)arg1 ;
-(void)select:(id)arg1 ;
-(NoteHTMLEditorView *)noteHTMLEditorView;
-(void)setNoteHTMLEditorView:(NoteHTMLEditorView *)arg1 ;
-(void)strikethrough:(id)arg1 ;
-(void)calloutOptionInvoked:(long long)arg1 sender:(id)arg2 ;
-(void)ic_evaluateJavaScript:(id)arg1 ;
@end

