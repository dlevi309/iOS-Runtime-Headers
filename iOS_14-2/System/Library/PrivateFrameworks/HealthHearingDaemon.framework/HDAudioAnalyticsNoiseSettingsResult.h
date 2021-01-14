/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@interface HDAudioAnalyticsNoiseSettingsResult : NSObject {

	BOOL _hasEligibleWatchPaired;
	BOOL _hasNoiseEnabled;
	BOOL _hasNoiseNotificationsEnabled;

}

@property (assign,nonatomic) BOOL hasEligibleWatchPaired;                    //@synthesize hasEligibleWatchPaired=_hasEligibleWatchPaired - In the implementation block
@property (assign,nonatomic) BOOL hasNoiseEnabled;                           //@synthesize hasNoiseEnabled=_hasNoiseEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNoiseNotificationsEnabled;              //@synthesize hasNoiseNotificationsEnabled=_hasNoiseNotificationsEnabled - In the implementation block
-(void)setHasEligibleWatchPaired:(BOOL)arg1 ;
-(void)setHasNoiseEnabled:(BOOL)arg1 ;
-(void)setHasNoiseNotificationsEnabled:(BOOL)arg1 ;
-(id)initWithEligibleWatchPaired:(BOOL)arg1 hasNoiseEnabled:(BOOL)arg2 hasNoiseNotificationsEnabled:(BOOL)arg3 ;
-(BOOL)hasEligibleWatchPaired;
-(BOOL)hasNoiseEnabled;
-(BOOL)hasNoiseNotificationsEnabled;
@end

