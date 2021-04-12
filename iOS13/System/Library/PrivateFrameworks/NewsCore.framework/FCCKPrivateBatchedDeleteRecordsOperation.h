/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, NSMutableArray, NSMutableDictionary;

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation {

	BOOL _skipPreflight;
	BOOL _handleIdentityLoss;
	FCCKPrivateDatabase* _database;
	NSArray* _recordIDsToDelete;
	/*^block*/id _deleteRecordsCompletionBlock;
	NSMutableArray* _remainingBatchesOfRecordIDsToDelete;
	NSMutableArray* _resultDeletedRecordIDs;
	NSMutableDictionary* _resultErrorsByRecordID;

}

@property (nonatomic,retain) NSMutableArray * remainingBatchesOfRecordIDsToDelete;              //@synthesize remainingBatchesOfRecordIDsToDelete=_remainingBatchesOfRecordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultDeletedRecordIDs;                           //@synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultErrorsByRecordID;                      //@synthesize resultErrorsByRecordID=_resultErrorsByRecordID - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                                    //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDsToDelete;                                         //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL skipPreflight;                                                //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (assign,nonatomic) BOOL handleIdentityLoss;                                           //@synthesize handleIdentityLoss=_handleIdentityLoss - In the implementation block
@property (nonatomic,copy) id deleteRecordsCompletionBlock;                                     //@synthesize deleteRecordsCompletionBlock=_deleteRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(NSArray *)recordIDsToDelete;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)performOperation;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(BOOL)skipPreflight;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(BOOL)handleIdentityLoss;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
-(void)setResultDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultDeletedRecordIDs;
-(void)_continueModifying;
-(NSMutableDictionary *)resultErrorsByRecordID;
-(void)setResultErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setDeleteRecordsCompletionBlock:(id)arg1 ;
-(NSMutableArray *)remainingBatchesOfRecordIDsToDelete;
-(id)deleteRecordsCompletionBlock;
-(void)setRemainingBatchesOfRecordIDsToDelete:(NSMutableArray *)arg1 ;
@end

