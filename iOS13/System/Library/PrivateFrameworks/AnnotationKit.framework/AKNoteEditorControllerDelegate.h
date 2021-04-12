/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@protocol AKNoteEditorControllerDelegate <NSObject>
@required
-(CGRect*)stickyViewFrameForNoteEditor:(id)arg1;
-(id)stickyContainerForNoteEditor:(id)arg1;
-(unsigned long long)edgeForNoteEditor:(id)arg1;
-(id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
-(void)noteEditorWillDismissFromFullScreen:(id)arg1;
-(void)noteEditorDidBeginEditing:(id)arg1;
-(void)noteEditorDidFinishEditing:(id)arg1;
-(void)noteEditorWillPresentFullScreen:(id)arg1;
-(BOOL)handleEditAnnotation:(id)arg1;

@end

