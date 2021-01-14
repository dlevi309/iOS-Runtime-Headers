/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

