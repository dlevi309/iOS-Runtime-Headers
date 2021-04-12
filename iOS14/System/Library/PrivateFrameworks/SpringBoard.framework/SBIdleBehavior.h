/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>

@class NSString;

@interface SBIdleBehavior : NSObject <SBFIdleTimerBehaviorProviding> {

	long long _duration;
	long long _warnMode;

}

@property (nonatomic,readonly) long long duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long warnMode;                              //@synthesize warnMode=_warnMode - In the implementation block
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)idleWarnMode;
-(long long)duration;
-(long long)warnMode;
-(id)initWithDuration:(long long)arg1 warnMode:(long long)arg2 ;
@end

