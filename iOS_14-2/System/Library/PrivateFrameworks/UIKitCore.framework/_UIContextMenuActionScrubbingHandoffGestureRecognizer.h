/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIContextMenuActionScrubbingHandoffGestureRecognizer : UIGestureRecognizer {

	CGPoint _initialLocation;
	double _hysteresis;

}

@property (assign,nonatomic) double hysteresis;              //@synthesize hysteresis=_hysteresis - In the implementation block
+(BOOL)_supportsTouchContinuation;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(double)hysteresis;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHysteresis:(double)arg1 ;
-(void)_beginGestureIfPossible;
-(BOOL)_gestureIsStillValid;
-(BOOL)_satisfiedHysteresis;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

