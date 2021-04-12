/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMPersonaHelper : NSObject
+(void)dissociateBundleIdentifier:(id)arg1 fromPersonaWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)appStoreAccountIdentifierForPersonaWithIdentifier:(id)arg1 ;
+(void)associateBundleIdentifier:(id)arg1 withPersonaWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)createEnterprisePersonaWithPasscodeData:(id)arg1 error:(id*)arg2 ;
+(void)createEnterprisePersonaWithPasscodeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)removePersonaWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(void)removePersonaWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeEnterprisePersonaWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)performBlockUnderPersonaWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)currentPersonaIdentifier;
@end

