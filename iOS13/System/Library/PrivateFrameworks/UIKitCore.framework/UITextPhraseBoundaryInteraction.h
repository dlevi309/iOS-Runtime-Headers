/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning;

@interface UITextPhraseBoundaryInteraction : UITextInteraction {

	UITextGestureTuning* _gestureTuning;

}
-(void)didMoveToView:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(id)_phraseBoundaryGestureRecognizer;
-(void)_phraseBoundaryGesture:(id)arg1 ;
@end

