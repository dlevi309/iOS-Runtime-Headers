/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSDictionary;

@interface STConversationContext : NSObject {

	BOOL _allowedByScreenTime;
	BOOL _applicationCurrentlyLimited;
	BOOL _shouldBeAllowedByScreenTimeWhenLimited;
	BOOL _shouldBeAllowedDuringGeneralScreenTime;
	BOOL _emergencyModeEnabled;
	NSDictionary* _allowedByContactsHandle;
	NSDictionary* _contactsByHandle;
	unsigned long long _currentApplicationState;

}

@property (assign) BOOL allowedByScreenTime;                                 //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (copy) NSDictionary * allowedByContactsHandle;                     //@synthesize allowedByContactsHandle=_allowedByContactsHandle - In the implementation block
@property (assign) BOOL applicationCurrentlyLimited;                         //@synthesize applicationCurrentlyLimited=_applicationCurrentlyLimited - In the implementation block
@property (assign) BOOL shouldBeAllowedByScreenTimeWhenLimited;              //@synthesize shouldBeAllowedByScreenTimeWhenLimited=_shouldBeAllowedByScreenTimeWhenLimited - In the implementation block
@property (assign) BOOL shouldBeAllowedDuringGeneralScreenTime;              //@synthesize shouldBeAllowedDuringGeneralScreenTime=_shouldBeAllowedDuringGeneralScreenTime - In the implementation block
@property (copy) NSDictionary * contactsByHandle;                            //@synthesize contactsByHandle=_contactsByHandle - In the implementation block
@property (assign) unsigned long long currentApplicationState;               //@synthesize currentApplicationState=_currentApplicationState - In the implementation block
@property (assign) BOOL emergencyModeEnabled;                                //@synthesize emergencyModeEnabled=_emergencyModeEnabled - In the implementation block
-(id)init;
-(BOOL)allowedByScreenTime;
-(BOOL)applicationCurrentlyLimited;
-(NSDictionary *)allowedByContactsHandle;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(BOOL)shouldBeAllowedByScreenTimeWhenLimited;
-(BOOL)shouldBeAllowedDuringGeneralScreenTime;
-(void)setShouldBeAllowedDuringGeneralScreenTime:(BOOL)arg1 ;
-(void)setShouldBeAllowedByScreenTimeWhenLimited:(BOOL)arg1 ;
-(unsigned long long)currentApplicationState;
-(void)setCurrentApplicationState:(unsigned long long)arg1 ;
-(BOOL)emergencyModeEnabled;
-(void)setEmergencyModeEnabled:(BOOL)arg1 ;
-(void)setApplicationCurrentlyLimited:(BOOL)arg1 ;
-(void)updateShouldBeAllowedDuringGeneralScreenTime:(BOOL)arg1 shouldBeAllowedByScreenTimeWhenLimited:(BOOL)arg2 currentApplicationState:(unsigned long long)arg3 emergencyModeEnabled:(BOOL)arg4 ;
-(void)updateForThirdPartyApplicationState:(long long)arg1 ;
-(void)setAllowedByContactsHandle:(NSDictionary *)arg1 ;
-(NSDictionary *)contactsByHandle;
-(void)setContactsByHandle:(NSDictionary *)arg1 ;
@end

