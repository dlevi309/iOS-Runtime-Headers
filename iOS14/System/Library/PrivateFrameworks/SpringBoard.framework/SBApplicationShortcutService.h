/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationServerShortcutDelegate.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationShortcutService : NSObject <SBApplicationServerShortcutDelegate> {

	FBServiceClientAuthenticator* _serviceClientFullAccessEntitlementAuthenticator;
	FBServiceClientAuthenticator* _serviceClientCustomImageEntitlementAuthenticator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_sanitizeApplicationShortcutItems:(id)arg1 withEntitlements:(unsigned long long)arg2 ;
-(id)init;
-(void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)applicationServer:(id)arg1 client:(id)arg2 setDynamicApplicationShortcutItems:(id)arg3 forBundleIdentifier:(id)arg4 ;
-(void)_authenticateClient:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_checkEntitlementsForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

