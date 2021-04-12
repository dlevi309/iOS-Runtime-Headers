/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)applicationServer:(id)arg1 client:(id)arg2 setDynamicApplicationShortcutItems:(id)arg3 forBundleIdentifier:(id)arg4 ;
-(void)_checkEntitlementsForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_authenticateClient:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_sanitizeApplicationShortcutItems:(id)arg1 withEntitlements:(unsigned long long)arg2 ;
@end

