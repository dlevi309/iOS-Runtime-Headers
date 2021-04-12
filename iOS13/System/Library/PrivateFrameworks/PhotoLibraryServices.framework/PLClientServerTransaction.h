/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSSet, PLPhotoLibraryPathManager;

@interface PLClientServerTransaction : NSObject {

	NSString* _transactionToken;
	NSSet* _changeScopes;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,copy) NSString * transactionToken;                              //@synthesize transactionToken=_transactionToken - In the implementation block
@property (nonatomic,readonly) NSSet * changeScopes;                                 //@synthesize changeScopes=_changeScopes - In the implementation block
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
+(id)beginServerTransactionWithToken:(id)arg1 changeScopes:(id)arg2 pathManager:(id)arg3 ;
+(id)beginClientTransactionWithChangeScopes:(id)arg1 pathManager:(id)arg2 ;
+(id)transactionFromUserInfo:(id)arg1 ;
+(void)removeTransactionFromUserInfo:(id)arg1 ;
+(void)addTransaction:(id)arg1 toUserInfo:(id)arg2 ;
+(void)addTransaction:(id)arg1 toXPCDictionary:(id)arg2 ;
+(id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)arg1 pathManager:(id)arg2 ;
+(unsigned long long)scopeValuesFromScopes:(id)arg1 ;
+(id)serverTransactionQueue;
+(id)_serverTransactionForPathManager:(id)arg1 isNew:(BOOL*)arg2 ;
+(id)_filePathForTransactionWithToken:(id)arg1 pathManager:(id)arg2 ;
+(id)_scopeValuesByScope;
+(id)scopesFromScopeValues:(unsigned long long)arg1 ;
+(id)_recoveryHistoryFilePathForPathManager:(id)arg1 ;
+(void)_recordRecoveryAttemptForPathManager:(id)arg1 ;
+(BOOL)_hasExcessiveRecoveryAttemptsForPathManager:(id)arg1 ;
+(BOOL)_archiveRecoveryHistoryForPathManager:(id)arg1 error:(id*)arg2 ;
+(void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)arg1 sqliteErrorHandler:(/*^block*/id)arg2 ;
+(id)_allTransactionPathsForPathManager:(id)arg1 ;
+(unsigned long long)_readScopeValuesFromFileDescriptor:(int)arg1 ;
+(BOOL)_isOutstandingTransactionAtPath:(id)arg1 getScopeValues:(unsigned long long*)arg2 ;
+(id)_outstandingTransactionScopesByPathForPathManager:(id)arg1 ;
+(void)handleOutstandingTransactionsForPathManager:(id)arg1 sqliteErrorHandler:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 ;
+(void)_cleanupAllTransactionsScopesByPath:(id)arg1 ;
+(id)_transactionTokenFromXPCDictionary:(id)arg1 ;
+(id)_changeScopesFromXPCDictionary:(id)arg1 ;
+(id)_libraryURLFromXPCDictionary:(id)arg1 ;
+(id)descriptionOfAllTransactionFilesForPathManager:(id)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)initWithPathManager:(id)arg1 ;
-(void)stillAlive;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(NSString *)transactionToken;
-(void)popChangeScopesBatch;
-(void)pushChangeScopesBatch;
-(void)abortTransaction;
-(NSSet *)changeScopes;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(void)setTransactionToken:(NSString *)arg1 ;
@end

