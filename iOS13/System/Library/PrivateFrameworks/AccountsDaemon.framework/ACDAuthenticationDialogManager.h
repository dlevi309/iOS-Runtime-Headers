/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <libobjc.A.dylib/ACDAuthenticationDialogManagerProtocol.h>

@class NSXPCListener, ACDQueueDictionary, NSString;

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {

	NSXPCListener* _authenticationDialogListener;
	ACDQueueDictionary* _dialogRequestQueues;
	NSString* _activeAccountID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)contextForAuthenticationDialog:(/*^block*/id)arg1 ;
-(void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 response:(id)arg2 ;
-(void)authenticationDialogCrashed;
-(void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1 ;
@end

