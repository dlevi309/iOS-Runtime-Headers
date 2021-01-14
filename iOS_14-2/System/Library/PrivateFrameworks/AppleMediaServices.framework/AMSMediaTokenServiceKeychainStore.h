/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;

}

@property (nonatomic,readonly) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;              //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(CFDictionaryRef)_copyKeychainQuery;
-(void)_removeTokenFromKeychain;
-(BOOL)storeToken:(id)arg1 ;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(id)retrieveToken;
-(NSString *)keychainAccessGroup;
-(NSString *)clientIdentifier;
@end

