/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol NoteHTMLEditorViewDelegate <NSObject>
@optional
-(BOOL)allowsAttachmentsInNoteHTMLEditorView:(id)arg1;
-(BOOL)noteHTMLEditorView:(id)arg1 canAddAttachmentItemProviders:(id)arg2;
-(void)noteHTMLEditorView:(id)arg1 addAttachmentItemProviders:(id)arg2;
-(id)noteHTMLEditorView:(id)arg1 createAttachmentPresentationWithFileWrapper:(id)arg2 mimeType:(id)arg3;
-(BOOL)noteHTMLEditorViewShouldBeginEditing:(id)arg1 isUserInitiated:(BOOL)arg2;
-(void)noteHTMLEditorViewDidBeginEditing:(id)arg1;
-(void)noteHTMLEditorViewDidEndEditing:(id)arg1;
-(void)noteHTMLEditorViewWillChange:(id)arg1;
-(void)noteHTMLEditorViewDidChange:(id)arg1;
-(void)noteHTMLEditorViewDidChangeSelection:(id)arg1;
-(void)noteHTMLEditorView:(id)arg1 openURL:(id)arg2;
-(id)noteHTMLEditorView:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
-(id)noteHTMLEditorView:(id)arg1 attachmentPresentationForContentID:(id)arg2;
-(BOOL)isNoteManagedForNoteHTMLEditorView:(id)arg1;
-(void)noteHTMLEditorViewNeedsContentReload:(id)arg1;
-(void)noteHTMLEditorView:(id)arg1 didInvokeFormattingCalloutOption:(long long)arg2;
-(void)noteHTMLEditorView:(id)arg1 didInvokeStyleFormattingOption:(long long)arg2;
-(id)noteHTMLEditorView:(id)arg1 updateAttachments:(id)arg2;
-(void)noteHTMLEditorView:(id)arg1 webScrollViewDidScroll:(id)arg2;

@end

