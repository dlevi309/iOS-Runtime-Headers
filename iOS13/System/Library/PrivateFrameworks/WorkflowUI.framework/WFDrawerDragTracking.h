/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDrawerDragTracking <NSObject>
@property (readonly) double minTranslationY; 
@property (readonly) double maxTranslationY; 
@required
-(void)beginDragging;
-(void)endDraggingWithAnimation:(id)arg1;
-(void)endDragging;
-(void)updateDragForVerticalTranslation:(double)arg1;
-(double)minTranslationY;
-(double)maxTranslationY;

@end

