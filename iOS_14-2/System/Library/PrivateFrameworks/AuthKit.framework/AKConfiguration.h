/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AKConfiguration : NSObject {

	NSMutableDictionary* _cachedSettings;
	int _notificationToken;
	NSObject*<OS_dispatch_queue> _settingsQueue;

}

@property (assign,nonatomic) long long shouldDisablePETs; 
@property (assign,nonatomic) long long shouldFakeAuthSuccess; 
@property (assign,nonatomic) long long shouldDisablePiggybacking; 
@property (assign,nonatomic) long long shouldSuppressHSA2Suggestions; 
@property (assign,nonatomic) long long shouldAddHSA2CreateHeader; 
@property (assign,nonatomic) long long shouldAllowPhoneNumberAccounts; 
@property (assign,nonatomic) long long shouldAllowExperimentalMode; 
@property (assign,nonatomic) long long shouldAllowDemoMode; 
@property (assign,nonatomic) long long shouldAllowTestApplication; 
@property (assign,nonatomic) long long shouldEnableTestAccountMode; 
@property (assign,nonatomic) long long shouldSuppressModalSheetsInMacBuddy; 
@property (assign,nonatomic) long long shouldAlwaysShowWelcome; 
@property (assign,nonatomic) long long shouldAutocycleAppsInTiburon; 
@property (assign,nonatomic) long long shouldAutocycleAppsInWebTakeover; 
@property (assign,nonatomic) unsigned long long lastKnownIDMSEnvironment; 
@property (assign,nonatomic) long long requestedCloudPartition; 
+(id)sharedConfiguration;
-(long long)shouldAlwaysShowWelcome;
-(void)setRequestedCloudPartition:(long long)arg1 ;
-(void)setShouldEnableTestAccountMode:(long long)arg1 ;
-(id)init;
-(long long)shouldSuppressHSA2Suggestions;
-(long long)shouldAllowDemoMode;
-(long long)shouldAutocycleAppsInTiburon;
-(void)setShouldAutocycleAppsInTiburon:(long long)arg1 ;
-(void)setShouldDisablePiggybacking:(long long)arg1 ;
-(void)setShouldDisablePETs:(long long)arg1 ;
-(void)setConfigurationValue:(id)arg1 forKey:(id)arg2 ;
-(void)setShouldAllowExperimentalMode:(long long)arg1 ;
-(void)setLastKnownIDMSEnvironment:(unsigned long long)arg1 ;
-(void)setShouldSuppressHSA2Suggestions:(long long)arg1 ;
-(void)setShouldAutocycleAppsInWebTakeover:(long long)arg1 ;
-(long long)shouldAllowTestApplication;
-(void)setShouldAlwaysShowWelcome:(long long)arg1 ;
-(long long)shouldAllowExperimentalMode;
-(long long)shouldEnableTestAccountMode;
-(id)configurationValueForKey:(id)arg1 ;
-(BOOL)_validCloudPartition:(long long)arg1 ;
-(unsigned long long)lastKnownIDMSEnvironment;
-(long long)requestedCloudPartition;
-(long long)shouldAllowPhoneNumberAccounts;
-(long long)shouldSuppressModalSheetsInMacBuddy;
-(void)setShouldSuppressModalSheetsInMacBuddy:(long long)arg1 ;
-(long long)shouldAutocycleAppsInWebTakeover;
-(long long)shouldAddHSA2CreateHeader;
-(void)setShouldAllowTestApplication:(long long)arg1 ;
-(long long)shouldFakeAuthSuccess;
-(void)setShouldAllowDemoMode:(long long)arg1 ;
-(void)setShouldFakeAuthSuccess:(long long)arg1 ;
-(long long)shouldDisablePiggybacking;
-(long long)shouldDisablePETs;
-(void)setShouldAddHSA2CreateHeader:(long long)arg1 ;
-(void)setShouldAllowPhoneNumberAccounts:(long long)arg1 ;
-(void)dealloc;
@end

