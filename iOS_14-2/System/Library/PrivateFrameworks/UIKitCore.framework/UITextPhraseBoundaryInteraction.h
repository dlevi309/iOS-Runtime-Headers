/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@protocol UITextCursorAssertion;
@class UITextGestureTuning;

@interface UITextPhraseBoundaryInteraction : UITextInteraction {

	UITextGestureTuning* _gestureTuning;
	id<UITextCursorAssertion> _blinkAssertion;

}
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(id)_phraseBoundaryGestureRecognizer;
@end

