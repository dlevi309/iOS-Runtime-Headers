/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

