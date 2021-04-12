/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBIdleTimerBehavior : NSObject <SBFIdleTimerBehaviorProviding, BSDescriptionProviding> {

	long long _idleWarnMode;
	long long _idleTimerMode;
	long long _idleTimerDuration;
	double _customIdleWarningTimeout;
	double _customIdleExpirationTimeout;

}

@property (nonatomic,readonly) long long idleTimerDuration;                     //@synthesize idleTimerDuration=_idleTimerDuration - In the implementation block
@property (nonatomic,readonly) long long idleTimerMode;                         //@synthesize idleTimerMode=_idleTimerMode - In the implementation block
@property (nonatomic,readonly) long long idleWarnMode;                          //@synthesize idleWarnMode=_idleWarnMode - In the implementation block
@property (nonatomic,readonly) double customIdleExpirationTimeout;              //@synthesize customIdleExpirationTimeout=_customIdleExpirationTimeout - In the implementation block
@property (nonatomic,readonly) double customIdleWarningTimeout;                 //@synthesize customIdleWarningTimeout=_customIdleWarningTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoLockBehavior;
+(id)behaviorWithDuration:(long long)arg1 mode:(long long)arg2 warnMode:(long long)arg3 ;
+(id)lockScreenBehavior;
+(id)defaultBehavior;
+(id)behaviorForBehaviorProvider:(id)arg1 ;
+(id)disabledBehavior;
-(id)succinctDescription;
-(id)_initWithBehaviorProvider:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)customIdleExpirationTimeout;
-(NSString *)description;
-(double)customIdleWarningTimeout;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)idleWarnMode;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_initWithDuration:(long long)arg1 mode:(long long)arg2 warnMode:(long long)arg3 ;
-(id)succinctDescriptionBuilder;
@end

