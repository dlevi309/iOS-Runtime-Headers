/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIdleTimerConfigurationDisablesTimerSetting *)disableTimerSetting;
-(SBIdleTimerTimeoutPrecedenceSettings *)maxExpirationTimeoutSettings;
-(SBIdleTimerTimeoutPrecedenceSettings *)minExpirationTimeoutSettings;
-(id)resolvedExpirationTimeoutRange;
-(void)setMinExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(void)setMaxExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)arg1 ;
-(void)setDisablesTimerWithPrecedence:(unsigned long long)arg1 ;
-(void)setMinExpirationTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2 ;
-(void)setMaxExpirationTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2 ;
@end

