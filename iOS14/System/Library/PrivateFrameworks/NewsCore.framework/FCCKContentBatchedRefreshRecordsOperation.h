/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(NSError *)operationError;
-(NSMutableSet *)deletedRecordIDs;
-(void)_continueRefreshing;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setOperationError:(NSError *)arg1 ;
-(void)prepareOperation;
-(void)setCanaryRecordID:(CKRecordID *)arg1 ;
-(void)setRefreshedRecordIDs:(NSMutableSet *)arg1 ;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(id)init;
-(NSMutableArray *)remainingRecordIDBatches;
-(NSDictionary *)changeTagsByRecordID;
-(id)refreshRecordsCompletionBlock;
-(void)setDeletedRecordIDs:(NSMutableSet *)arg1 ;
-(BOOL)checkForDeletions;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setCheckForDeletions:(BOOL)arg1 ;
-(void)setUpdatedRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordIDs;
-(NSMutableDictionary *)updatedRecordsByRecordID;
-(NSArray *)desiredKeys;
-(NSMutableSet *)refreshedRecordIDs;
-(FCCKContentDatabase *)database;
-(CKRecordID *)canaryRecordID;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setRefreshRecordsCompletionBlock:(id)arg1 ;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(void)setChangeTagsByRecordID:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)errorsByRecordID;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
@end

