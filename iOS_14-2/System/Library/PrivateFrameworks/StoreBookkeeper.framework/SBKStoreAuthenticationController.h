/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject {

	BOOL _shouldAuthenticate;
	SSAccount* _storeAccount;

}

@property (readonly) SSAccount * storeAccount;              //@synthesize storeAccount=_storeAccount - In the implementation block
@property (assign) BOOL shouldAuthenticate;                 //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
+(id)lastSyncedAccountIdentifier;
+(id)lastSyncedAccountName;
+(void)clearLastSyncnedAccount;
+(id)lastFailedSyncAccountIdentifier;
+(id)lastFailedSyncAccountName;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(BOOL)shouldAuthenticate;
-(id)initWithStoreAccount:(id)arg1 ;
-(BOOL)isAuthenticationValidForTransaction:(id)arg1 error:(id*)arg2 ;
-(void)saveAccountToLastSyncedDefaults;
-(void)saveAccountToLastFailedSyncDefaults;
-(SSAccount *)storeAccount;
-(BOOL)shouldForceAuthenticationForTransaction:(id)arg1 ;
-(id)authenticationErrorsForTransaction:(id)arg1 ;
@end

