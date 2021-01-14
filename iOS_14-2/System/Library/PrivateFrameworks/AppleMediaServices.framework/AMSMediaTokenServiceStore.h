/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, AMSMediaToken, AMSMediaTokenServiceKeychainStore, AMSMediaTokenServiceUserDefaultsStore;

@interface AMSMediaTokenServiceStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;
	AMSMediaToken* _memoryMediaToken;
	AMSMediaTokenServiceKeychainStore* _keychainStore;
	AMSMediaTokenServiceUserDefaultsStore* _userDefaultsStore;

}

@property (nonatomic,retain) AMSMediaToken * memoryMediaToken;                                       //@synthesize memoryMediaToken=_memoryMediaToken - In the implementation block
@property (nonatomic,retain) AMSMediaTokenServiceKeychainStore * keychainStore;                      //@synthesize keychainStore=_keychainStore - In the implementation block
@property (nonatomic,retain) AMSMediaTokenServiceUserDefaultsStore * userDefaultsStore;              //@synthesize userDefaultsStore=_userDefaultsStore - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;                                         //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(void)_setupKeychainNotifications;
-(void)_postMediaTokenChangedNotification;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(AMSMediaTokenServiceUserDefaultsStore *)userDefaultsStore;
-(BOOL)_hasAppleGroupEnabled;
-(void)storeToken:(id)arg1 ;
-(void)setUserDefaultsStore:(AMSMediaTokenServiceUserDefaultsStore *)arg1 ;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(AMSMediaTokenServiceKeychainStore *)keychainStore;
-(id)retrieveToken;
-(id)_mediaTokenChangedNotificationName;
-(NSString *)keychainAccessGroup;
-(NSString *)clientIdentifier;
-(void)setKeychainStore:(AMSMediaTokenServiceKeychainStore *)arg1 ;
-(void)_mediaTokenChanged;
-(void)_teardownKeychainNotifications;
-(id)_keychainAccessGroup;
-(AMSMediaToken *)memoryMediaToken;
-(void)setMemoryMediaToken:(AMSMediaToken *)arg1 ;
-(void)dealloc;
@end

