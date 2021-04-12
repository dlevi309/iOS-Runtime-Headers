/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSDictionary, NSArray;

@interface STConversationContext : NSObject {

	BOOL _allowedByScreenTime;
	BOOL _applicationCurrentlyLimited;
	BOOL _shouldBeAllowedByScreenTimeWhenLimited;
	BOOL _shouldBeAllowedDuringGeneralScreenTime;
	BOOL _emergencyModeEnabled;
	NSDictionary* _allowedByContactsHandle;
	NSDictionary* _contactsByHandle;
	NSArray* _whitelistedHandles;
	unsigned long long _currentApplicationState;

}

@property (assign) BOOL allowedByScreenTime;                                 //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (copy) NSDictionary * allowedByContactsHandle;                     //@synthesize allowedByContactsHandle=_allowedByContactsHandle - In the implementation block
@property (assign) BOOL applicationCurrentlyLimited;                         //@synthesize applicationCurrentlyLimited=_applicationCurrentlyLimited - In the implementation block
@property (assign) BOOL shouldBeAllowedByScreenTimeWhenLimited;              //@synthesize shouldBeAllowedByScreenTimeWhenLimited=_shouldBeAllowedByScreenTimeWhenLimited - In the implementation block
@property (assign) BOOL shouldBeAllowedDuringGeneralScreenTime;              //@synthesize shouldBeAllowedDuringGeneralScreenTime=_shouldBeAllowedDuringGeneralScreenTime - In the implementation block
@property (copy) NSDictionary * contactsByHandle;                            //@synthesize contactsByHandle=_contactsByHandle - In the implementation block
@property (copy) NSArray * whitelistedHandles;                               //@synthesize whitelistedHandles=_whitelistedHandles - In the implementation block
@property (assign) unsigned long long currentApplicationState;               //@synthesize currentApplicationState=_currentApplicationState - In the implementation block
@property (assign) BOOL emergencyModeEnabled;                                //@synthesize emergencyModeEnabled=_emergencyModeEnabled - In the implementation block
-(id)init;
-(unsigned long long)currentApplicationState;
-(void)setEmergencyModeEnabled:(BOOL)arg1 ;
-(BOOL)allowedByScreenTime;
-(BOOL)shouldBeAllowedDuringGeneralScreenTime;
-(void)setApplicationCurrentlyLimited:(BOOL)arg1 ;
-(void)setShouldBeAllowedDuringGeneralScreenTime:(BOOL)arg1 ;
-(NSDictionary *)allowedByContactsHandle;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(void)setCurrentApplicationState:(unsigned long long)arg1 ;
-(void)setShouldBeAllowedByScreenTimeWhenLimited:(BOOL)arg1 ;
-(void)updateShouldBeAllowedDuringGeneralScreenTime:(BOOL)arg1 shouldBeAllowedByScreenTimeWhenLimited:(BOOL)arg2 currentApplicationState:(unsigned long long)arg3 emergencyModeEnabled:(BOOL)arg4 ;
-(BOOL)applicationCurrentlyLimited;
-(void)setContactsByHandle:(NSDictionary *)arg1 ;
-(void)setWhitelistedHandles:(NSArray *)arg1 ;
-(NSArray *)whitelistedHandles;
-(void)updateForThirdPartyApplicationState:(long long)arg1 ;
-(NSDictionary *)contactsByHandle;
-(BOOL)shouldBeAllowedByScreenTimeWhenLimited;
-(BOOL)emergencyModeEnabled;
-(void)setAllowedByContactsHandle:(NSDictionary *)arg1 ;
@end

