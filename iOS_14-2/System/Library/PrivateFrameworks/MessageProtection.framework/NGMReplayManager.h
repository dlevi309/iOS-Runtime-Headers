/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class NSPersistentContainer;

@interface NGMReplayManager : NSObject {

	NSPersistentContainer* _persistentContainer;

}
+(id)sharedManager;
-(BOOL)isRunningTests;
-(BOOL)isBATS;
-(id)persistentStoreDescription;
-(BOOL)deleteReceivingCountersForKey:(id)arg1 ;
-(unsigned)counterForDestinationWithIdentityKey:(id)arg1 sendingIdentity:(id)arg2 error:(id*)arg3 success:(BOOL*)arg4 ;
-(/*^block*/id)validateIncomingCounter:(unsigned)arg1 prekey:(id)arg2 publicIdentity:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteExpiredSendingDestinations;
-(BOOL)isXCTest;
-(id)dbNameFromProcess;
-(id)persistentContainerWithError:(id*)arg1 ;
-(void)logDatabaseCreationDate:(id)arg1 ;
-(id)objectContextWithError:(id*)arg1 ;
-(id)computeDestinationHashForOutgoingMessageTo:(id)arg1 withLocalKey:(id)arg2 ;
-(id)computeDestinationHashForIncomingMessageFrom:(id)arg1 toLocalKey:(id)arg2 ;
-(BOOL)processFetchRequestAndValidate:(id)arg1 counter:(unsigned)arg2 commit:(BOOL)arg3 theirIdentity:(id)arg4 prekey:(id)arg5 error:(id*)arg6 ;
-(id)registeredPrekeyForNGMPrekey:(id)arg1 objectContext:(id)arg2 ;
@end

