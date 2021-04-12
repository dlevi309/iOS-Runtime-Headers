/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFHomeKitDispatcher, HMHome;

@interface HFServiceMigrationController : NSObject {

	HFHomeKitDispatcher* _dispatcher;
	HMHome* _home;
	unsigned long long _timeoutOverride;

}

@property (nonatomic,retain) HFHomeKitDispatcher * dispatcher;                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) HMHome * home;                                   //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long timeoutOverride;              //@synthesize timeoutOverride=_timeoutOverride - In the implementation block
+(id)primaryServicesToMigrateForHome:(id)arg1 ;
+(id)accessoriesToMigrateFavoritesForHome:(id)arg1 ;
+(BOOL)homeNeedsMigration:(id)arg1 ;
+(BOOL)homeNeedsToDisplayMigrationOnboardingUI;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(HFHomeKitDispatcher *)dispatcher;
-(void)setDispatcher:(HFHomeKitDispatcher *)arg1 ;
-(void)setTimeoutOverride:(unsigned long long)arg1 ;
-(unsigned long long)timeoutOverride;
-(id)migrateServicesToAccessory;
@end

