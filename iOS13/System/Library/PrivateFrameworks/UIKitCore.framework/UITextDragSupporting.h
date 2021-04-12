/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextDragSupporting <UITextDraggable>
@optional
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
-(id)_customDraggableObjectsForRange:(id)arg1;
-(NSRange*)_visibleRangeWithLayout:(BOOL)arg1;
-(id)_textGeometry;
-(id)willGenerateCancelPreview;
-(void)didGenerateCancelPreview:(id)arg1;
-(void)performCancelAnimations;
-(BOOL)_shouldObscureInput;

@required
-(BOOL)allowsDraggingAttachments;
-(BOOL)allowsEditingTextAttributes;
-(void)draggingStarted;
-(void)draggingFinished:(id)arg1;

@end

