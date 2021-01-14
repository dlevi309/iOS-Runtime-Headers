/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@protocol HKSPUserDefaults;
@interface HKSPAnalyticsStore : NSObject {

	id<HKSPUserDefaults> _userDefaults;
	/*^block*/id _diagnosticsOptInStatusProvider;

}

@property (nonatomic,readonly) id<HKSPUserDefaults> userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) id diagnosticsOptInStatusProvider;                  //@synthesize diagnosticsOptInStatusProvider=_diagnosticsOptInStatusProvider - In the implementation block
-(id)initWithUserDefaults:(id)arg1 ;
-(id<HKSPUserDefaults>)userDefaults;
-(id)initWithUserDefaults:(id)arg1 diagnosticsOptInStatusProvider:(/*^block*/id)arg2 ;
-(id)diagnosticsOptInStatusProvider;
-(void)_setWindDownActions:(id)arg1 forMorningIndex:(long long)arg2 overwriteExisting:(BOOL)arg3 ;
-(id)readAllWindDownActions;
-(id)windDownActionsAfterMorningIndex:(long long)arg1 ;
-(void)writeWindDownActions:(id)arg1 ;
-(void)setBaselineForWindDownActions:(id)arg1 onMorningIndex:(long long)arg2 ;
-(void)updateWindDownActions:(id)arg1 onMorningIndex:(long long)arg2 ;
-(id)windDownActionsForMorningIndex:(long long)arg1 ;
-(id)uncollectedWindDownActions;
-(void)removeAllWindDownActionsBeforeMorningIndex:(long long)arg1 ;
-(void)markAllActionsAsCollected;
-(void)setDiagnosticsOptInStatusProvider:(id)arg1 ;
@end

