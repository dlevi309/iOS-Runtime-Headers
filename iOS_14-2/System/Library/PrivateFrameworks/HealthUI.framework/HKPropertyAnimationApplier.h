/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {

	NSMutableDictionary* _animations;
	CADisplayLink* _displayLink;

}
-(id)init;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_startDisplayLinkIfNecessary;
-(void)_stopDisplayLinkIfNecessary;
-(void)_applyAnimations;
-(void)_cleanupCompletedAnimations;
-(void)applyAnimation:(id)arg1 ;
-(void)cancelAnimationsForProperty:(id)arg1 ;
@end

