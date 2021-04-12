/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSString, AMSMediaToken;

@interface AMSMediaTokenServiceStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;
	AMSMediaToken* _memoryMediaToken;

}

@property (nonatomic,retain) AMSMediaToken * memoryMediaToken;              //@synthesize memoryMediaToken=_memoryMediaToken - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;                //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(void)dealloc;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(id)retrieveToken;
-(NSString *)keychainAccessGroup;
-(void)storeToken:(id)arg1 ;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(void)_setupKeychainNotifications;
-(void)_teardownKeychainNotifications;
-(void)setMemoryMediaToken:(AMSMediaToken *)arg1 ;
-(AMSMediaToken *)memoryMediaToken;
-(id)_retrieveTokenFromKeychain;
-(void)_storeTokenInKeychain:(id)arg1 ;
-(void)_postMediaTokenChangedNotification;
-(BOOL)_hasAppleGroupEnabled;
-(id)_keychainAccessGroup;
-(CFDictionaryRef)_keychainQuery;
-(void)_removeTokenFromKeychain;
-(id)_mediaTokenChangedNotificationName;
-(void)_mediaTokenChanged;
@end

