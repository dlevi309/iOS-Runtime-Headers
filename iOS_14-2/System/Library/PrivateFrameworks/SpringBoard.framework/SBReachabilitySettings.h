/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBReachabilitySettings : PTSettings {

	BOOL _allowOnAllDevices;
	double _reachabilityDefaultKeepAlive;
	double _reachabilityInteractiveKeepAlive;
	double _yOffsetFactor;
	double _homeGestureSwipeDownHysteresis;
	double _homeGestureSwipeDownHeight;
	double _systemWideSwipeDownHeight;
	SBFFluidBehaviorSettings* _animationSettings;

}

@property (assign,nonatomic) BOOL allowOnAllDevices;                                    //@synthesize allowOnAllDevices=_allowOnAllDevices - In the implementation block
@property (assign,nonatomic) double reachabilityDefaultKeepAlive;                       //@synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive - In the implementation block
@property (assign,nonatomic) double reachabilityInteractiveKeepAlive;                   //@synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive - In the implementation block
@property (assign,nonatomic) double yOffsetFactor;                                      //@synthesize yOffsetFactor=_yOffsetFactor - In the implementation block
@property (assign,nonatomic) double homeGestureSwipeDownHysteresis;                     //@synthesize homeGestureSwipeDownHysteresis=_homeGestureSwipeDownHysteresis - In the implementation block
@property (assign,nonatomic) double homeGestureSwipeDownHeight;                         //@synthesize homeGestureSwipeDownHeight=_homeGestureSwipeDownHeight - In the implementation block
@property (assign,nonatomic) double systemWideSwipeDownHeight;                          //@synthesize systemWideSwipeDownHeight=_systemWideSwipeDownHeight - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFFluidBehaviorSettings *)animationSettings;
-(double)yOffset;
-(void)setAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(BOOL)allowOnAllDevices;
-(double)reachabilityInteractiveKeepAlive;
-(double)reachabilityDefaultKeepAlive;
-(void)setAllowOnAllDevices:(BOOL)arg1 ;
-(void)setReachabilityDefaultKeepAlive:(double)arg1 ;
-(void)setReachabilityInteractiveKeepAlive:(double)arg1 ;
-(void)setYOffsetFactor:(double)arg1 ;
-(void)setHomeGestureSwipeDownHysteresis:(double)arg1 ;
-(void)setHomeGestureSwipeDownHeight:(double)arg1 ;
-(void)setSystemWideSwipeDownHeight:(double)arg1 ;
-(double)yOffsetFactor;
-(double)homeGestureSwipeDownHysteresis;
-(double)homeGestureSwipeDownHeight;
-(double)systemWideSwipeDownHeight;
@end

