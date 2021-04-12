/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCredentialStorageInternal, NSDictionary;

@interface NSURLCredentialStorage : NSObject {

	NSURLCredentialStorageInternal* _internal;

}

@property (assign,nonatomic) BOOL _useSystemKeychain; 
@property (copy,readonly) NSDictionary * allCredentials; 
+(id)sharedCredentialStorage;
-(id)init;
-(void)dealloc;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)allCredentials;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(id)_initWithCFURLCredentialStorage:(CFURLCredentialStorageRef)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(CFURLCredentialStorageRef)_CFURLCredentialStorage;
-(BOOL)_useSystemKeychain;
-(void)set_useSystemKeychain:(BOOL)arg1 ;
-(id)__allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(BOOL)arg2 ;
-(id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(BOOL)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4 ;
@end

