/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, NSMutableArray, NSMutableDictionary;

@interface FCCKPrivateBatchedSaveRecordsOperation : FCOperation {

	BOOL _skipPreflight;
	BOOL _handleIdentityLoss;
	FCCKPrivateDatabase* _database;
	NSArray* _recordsToSave;
	long long _savePolicy;
	/*^block*/id _saveRecordsCompletionBlock;
	NSMutableArray* _remainingBatchesOfRecordsToSave;
	NSMutableArray* _resultSavedRecords;
	NSMutableDictionary* _resultErrorsByRecordID;

}

@property (nonatomic,retain) NSMutableArray * remainingBatchesOfRecordsToSave;              //@synthesize remainingBatchesOfRecordsToSave=_remainingBatchesOfRecordsToSave - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultSavedRecords;                           //@synthesize resultSavedRecords=_resultSavedRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultErrorsByRecordID;                  //@synthesize resultErrorsByRecordID=_resultErrorsByRecordID - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                                //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordsToSave;                                         //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                          //@synthesize savePolicy=_savePolicy - In the implementation block
@property (assign,nonatomic) BOOL skipPreflight;                                            //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (assign,nonatomic) BOOL handleIdentityLoss;                                       //@synthesize handleIdentityLoss=_handleIdentityLoss - In the implementation block
@property (nonatomic,copy) id saveRecordsCompletionBlock;                                   //@synthesize saveRecordsCompletionBlock=_saveRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)setSavePolicy:(long long)arg1 ;
-(NSArray *)recordsToSave;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(long long)savePolicy;
-(void)performOperation;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(BOOL)skipPreflight;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(BOOL)handleIdentityLoss;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
-(void)setSaveRecordsCompletionBlock:(id)arg1 ;
-(NSMutableArray *)remainingBatchesOfRecordsToSave;
-(void)_subdivideRemainingBatches;
-(void)_continueModifying;
-(NSMutableDictionary *)resultErrorsByRecordID;
-(id)saveRecordsCompletionBlock;
-(NSMutableArray *)resultSavedRecords;
-(void)setRemainingBatchesOfRecordsToSave:(NSMutableArray *)arg1 ;
-(void)setResultSavedRecords:(NSMutableArray *)arg1 ;
-(void)setResultErrorsByRecordID:(NSMutableDictionary *)arg1 ;
@end

