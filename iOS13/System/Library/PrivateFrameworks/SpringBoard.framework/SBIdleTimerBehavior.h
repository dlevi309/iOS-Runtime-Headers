/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration;                     //@synthesize idleTimerDuration=_idleTimerDuration - In the implementation block
@property (nonatomic,readonly) long long idleTimerMode;                         //@synthesize idleTimerMode=_idleTimerMode - In the implementation block
@property (nonatomic,readonly) long long idleWarnMode;                          //@synthesize idleWarnMode=_idleWarnMode - In the implementation block
@property (nonatomic,readonly) double customIdleExpirationTimeout;              //@synthesize customIdleExpirationTimeout=_customIdleExpirationTimeout - In the implementation block
@property (nonatomic,readonly) double customIdleWarningTimeout;                 //@synthesize customIdleWarningTimeout=_customIdleWarningTimeout - In the implementation block
+(id)defaultBehavior;
+(id)autoLockBehavior;
+(id)disabledBehavior;
+(id)behaviorForBehaviorProvider:(id)arg1 ;
+(id)lockScreenBehavior;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)idleTimerMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(double)customIdleExpirationTimeout;
-(double)customIdleWarningTimeout;
-(id)_initWithDuration:(long long)arg1 mode:(long long)arg2 warnMode:(long long)arg3 ;
-(id)_initWithBehaviorProvider:(id)arg1 ;
@end

