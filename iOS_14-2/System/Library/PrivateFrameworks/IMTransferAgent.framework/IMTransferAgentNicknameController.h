/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
*/


@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject {

	CKContainer* _nickNameContainer;

}

@property (nonatomic,readonly) CKContainer * nickNameContainer;              //@synthesize nickNameContainer=_nickNameContainer - In the implementation block
+(id)sharedInstance;
+(id)ckQueue;
-(BOOL)_serverSaysToUseOldContainer;
-(void)fetchCurrentUserForNicknameContainer:(/*^block*/id)arg1 ;
-(id)_nickNameContainerIdentifier;
-(void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_nickNameContainer;
-(BOOL)shouldUseDevNickNameContainer;
-(id)nickNamePublicDatabase;
-(CKContainer *)nickNameContainer;
-(id)lockdownManager;
-(void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteAllPersonalNicknamesWithCompletion:(/*^block*/id)arg1 ;
-(id)_nickNameFetchConfiguration;
-(id)_nickNamePublicDB;
-(void)performCloudKitOperation:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordID:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)fetchAllNicknamesForCurrentUser:(/*^block*/id)arg1 ;
-(id)_nickNameSaveConfiguration;
-(void)_handleSaveNicknameError:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cloudKitOperationWithRetryCount:(unsigned long long)arg1 withError:(id)arg2 operation:(/*^block*/id)arg3 ;
-(double)_retryIntervalForRetryCount:(unsigned long long)arg1 ;
@end

