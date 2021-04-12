/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextDragSupporting <UITextDraggable>
@optional
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
-(id)_customDraggableObjectsForRange:(id)arg1;
-(id)_textGeometry;
-(NSRange*)_visibleRangeWithLayout:(BOOL)arg1;
-(id)willGenerateCancelPreview;
-(void)didGenerateCancelPreview:(id)arg1;
-(void)performCancelAnimations;
-(BOOL)_shouldObscureInput;

@required
-(BOOL)allowsDraggingAttachments;
-(void)draggingStarted;
-(void)draggingFinished:(id)arg1;
-(BOOL)allowsEditingTextAttributes;

@end

