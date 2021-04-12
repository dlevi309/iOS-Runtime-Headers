/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@protocol AKHighlightColorEditorControllerDelegate <AKAnnotationEditorDelegate>
@optional
-(BOOL)editorController:(id)arg1 isRightArrowEnabledForAnnotation:(id)arg2;
-(void)editorController:(id)arg1 shareAnnotation:(id)arg2;
-(BOOL)editorController:(id)arg1 isSharingEnabledForAnnotation:(id)arg2;

@required
-(void)editorController:(id)arg1 setTheme:(id)arg2 forAnnotation:(id)arg3;
-(void)editorController:(id)arg1 deleteAnnotation:(id)arg2;
-(void)editorController:(id)arg1 editNote:(id)arg2;
-(void)editorController:(id)arg1 showEditMenuForAnnotation:(id)arg2;

@end

