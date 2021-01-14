/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

