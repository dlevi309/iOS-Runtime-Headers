/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, CKRecordID, NSMutableArray, NSMutableSet, NSMutableDictionary, NSError;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {

	BOOL _checkForDeletions;
	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSDictionary* _changeTagsByRecordID;
	NSArray* _desiredKeys;
	CKRecordID* _canaryRecordID;
	/*^block*/id _refreshRecordsCompletionBlock;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableSet* _refreshedRecordIDs;
	NSMutableDictionary* _updatedRecordsByRecordID;
	NSMutableSet* _deletedRecordIDs;
	NSMutableDictionary* _errorsByRecordID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;                   //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableSet * refreshedRecordIDs;                           //@synthesize refreshedRecordIDs=_refreshedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedRecordsByRecordID;              //@synthesize updatedRecordsByRecordID=_updatedRecordsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedRecordIDs;                             //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                      //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                                    //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                           //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * changeTagsByRecordID;                           //@synthesize changeTagsByRecordID=_changeTagsByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                         //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL checkForDeletions;                                      //@synthesize checkForDeletions=_checkForDeletions - In the implementation block
@property (nonatomic,copy) CKRecordID * canaryRecordID;                                   //@synthesize canaryRecordID=_canaryRecordID - In the implementation block
@property (nonatomic,copy) id refreshRecordsCompletionBlock;                              //@synthesize refreshRecordsCompletionBlock=_refreshRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(NSMutableSet *)deletedRecordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setDeletedRecordIDs:(NSMutableSet *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(void)resetForRetry;
-(void)setChangeTagsByRecordID:(NSDictionary *)arg1 ;
-(void)setCheckForDeletions:(BOOL)arg1 ;
-(void)setCanaryRecordID:(CKRecordID *)arg1 ;
-(void)setRefreshRecordsCompletionBlock:(id)arg1 ;
-(NSMutableArray *)remainingRecordIDBatches;
-(void)_continueRefreshing;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(id)refreshRecordsCompletionBlock;
-(NSMutableSet *)refreshedRecordIDs;
-(NSMutableDictionary *)updatedRecordsByRecordID;
-(CKRecordID *)canaryRecordID;
-(NSDictionary *)changeTagsByRecordID;
-(BOOL)checkForDeletions;
-(NSMutableDictionary *)errorsByRecordID;
-(void)setRefreshedRecordIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
@end

