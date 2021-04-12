/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableDictionary* _recordsByRecordID;
	NSMutableDictionary* _errorsByRecordID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;              //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByRecordID;                //@synthesize recordsByRecordID=_recordsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                 //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                               //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                      //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                           //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(NSError *)operationError;
-(void)_continueRefreshing;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setOperationError:(NSError *)arg1 ;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(id)init;
-(NSMutableArray *)remainingRecordIDBatches;
-(NSMutableDictionary *)recordsByRecordID;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(FCCKContentDatabase *)database;
-(id)fetchRecordsCompletionBlock;
-(void)setRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)errorsByRecordID;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
@end

