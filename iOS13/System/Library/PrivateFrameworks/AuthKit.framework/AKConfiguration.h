/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedConfiguration;
-(id)init;
-(void)dealloc;
-(long long)shouldAllowTestApplication;
-(id)configurationValueForKey:(id)arg1 ;
-(void)setConfigurationValue:(id)arg1 forKey:(id)arg2 ;
-(long long)shouldDisablePETs;
-(void)setShouldDisablePETs:(long long)arg1 ;
-(long long)shouldFakeAuthSuccess;
-(void)setShouldFakeAuthSuccess:(long long)arg1 ;
-(long long)shouldDisablePiggybacking;
-(void)setShouldDisablePiggybacking:(long long)arg1 ;
-(long long)shouldSuppressHSA2Suggestions;
-(void)setShouldSuppressHSA2Suggestions:(long long)arg1 ;
-(long long)shouldAddHSA2CreateHeader;
-(void)setShouldAddHSA2CreateHeader:(long long)arg1 ;
-(long long)shouldAllowPhoneNumberAccounts;
-(void)setShouldAllowPhoneNumberAccounts:(long long)arg1 ;
-(long long)shouldAllowExperimentalMode;
-(void)setShouldAllowExperimentalMode:(long long)arg1 ;
-(long long)shouldAllowDemoMode;
-(void)setShouldAllowDemoMode:(long long)arg1 ;
-(void)setShouldAllowTestApplication:(long long)arg1 ;
-(long long)shouldEnableTestAccountMode;
-(void)setShouldEnableTestAccountMode:(long long)arg1 ;
-(long long)shouldSuppressModalSheetsInMacBuddy;
-(void)setShouldSuppressModalSheetsInMacBuddy:(long long)arg1 ;
-(long long)shouldAutocycleAppsInTiburon;
-(void)setShouldAutocycleAppsInTiburon:(long long)arg1 ;
-(long long)shouldAlwaysShowWelcome;
-(void)setShouldAlwaysShowWelcome:(long long)arg1 ;
-(long long)shouldAutocycleAppsInWebTakeover;
-(void)setShouldAutocycleAppsInWebTakeover:(long long)arg1 ;
-(unsigned long long)lastKnownIDMSEnvironment;
-(void)setLastKnownIDMSEnvironment:(unsigned long long)arg1 ;
@end

