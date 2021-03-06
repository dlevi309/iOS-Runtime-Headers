/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MCAccountUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _signInQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> signInQueue;              //@synthesize signInQueue=_signInQueue - In the implementation block
+(id)accountDataclassesForBundleID:(id)arg1 ;
+(id)appStoreAccountIdentifierForPersona:(id)arg1 ;
+(BOOL)hasManagedAccountOfDataclasses:(id)arg1 ;
-(id)init;
-(BOOL)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4 ;
-(BOOL)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4 ;
-(void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 baseViewController:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)signInQueue;
-(void)setSignInQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

