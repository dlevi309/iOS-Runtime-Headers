/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBIdleTimerTimeoutRange, SBIdleTimerConfigurationDisablesTimerSetting, SBIdleTimerTimeoutPrecedenceSettings, NSString;

@interface SBIdleTimerAggregateClientConfiguration : NSObject <BSDescriptionProviding> {

	SBIdleTimerTimeoutRange* _resolvedExpirationTimeoutRange;
	SBIdleTimerConfigurationDisablesTimerSetting* _disableTimerSetting;
	SBIdleTimerTimeoutPrecedenceSettings* _minExpirationTimeoutSettings;
	SBIdleTimerTimeoutPrecedenceSettings* _maxExpirationTimeoutSettings;

}

@property (nonatomic,readonly) SBIdleTimerConfigurationDisablesTimerSetting * disableTimerSetting;               //@synthesize disableTimerSetting=_disableTimerSetting - In the implementation block
@property (nonatomic,readonly) SBIdleTimerTimeoutPrecedenceSettings * minExpirationTimeoutSettings;              //@synthesize minExpirationTimeoutSettings=_minExpirationTimeoutSettings - In the implementation block
@property (nonatomic,readonly) SBIdleTimerTimeoutPrecedenceSettings * maxExpirationTimeoutSettings;              //@synthesize maxExpirationTimeoutSettings=_maxExpirationTimeoutSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIdleTimerTimeoutPrecedenceSettings *)maxExpirationTimeoutSettings;
-(id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)arg1 ;
-(void)setMinExpirationTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2 ;
-(NSString *)description;
-(SBIdleTimerConfigurationDisablesTimerSetting *)disableTimerSetting;
-(id)resolvedExpirationTimeoutRange;
-(void)setMaxExpirationTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2 ;
-(void)setMinExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(void)setDisablesTimerWithPrecedence:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setMaxExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(SBIdleTimerTimeoutPrecedenceSettings *)minExpirationTimeoutSettings;
@end

