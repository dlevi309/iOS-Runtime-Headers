/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(id)init;
-(NSArray *)recordIDsToDelete;
-(void)setResultDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultDeletedRecordIDs;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)_continueModifying;
-(NSMutableDictionary *)resultErrorsByRecordID;
-(void)setResultErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(BOOL)skipPreflight;
-(BOOL)handleIdentityLoss;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
-(NSMutableArray *)remainingBatchesOfRecordIDsToDelete;
-(id)deleteRecordsCompletionBlock;
-(void)setRemainingBatchesOfRecordIDsToDelete:(NSMutableArray *)arg1 ;
-(void)setDeleteRecordsCompletionBlock:(id)arg1 ;
@end

