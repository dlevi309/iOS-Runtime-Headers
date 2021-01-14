/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4 ;
-(id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(BOOL)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(id)init;
-(id)_initWithCFURLCredentialStorage:(CFURLCredentialStorageRef)arg1 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(NSDictionary *)allCredentials;
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(void)set_useSystemKeychain:(BOOL)arg1 ;
-(BOOL)_useSystemKeychain;
-(CFURLCredentialStorageRef)_CFURLCredentialStorage;
-(void)dealloc;
@end

