/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary;

@interface CKQueryOperation : CKDatabaseOperation {

	BOOL _shouldFetchAssetContent;
	BOOL _fetchAllResults;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	/*^block*/id _queryCursorFetchedBlock;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	CKRecordZoneID* _zoneID;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	CKQueryCursor* _resultsCursor;
	NSDictionary* _assetTransferOptionsByKey;

}

@property (nonatomic,retain) CKQueryCursor * resultsCursor;                         //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL fetchAllResults;                                  //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByKey;              //@synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey - In the implementation block
@property (nonatomic,copy) id queryCursorFetchedBlock;                              //@synthesize queryCursorFetchedBlock=_queryCursorFetchedBlock - In the implementation block
@property (nonatomic,copy) CKQuery * query;                                         //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) CKQueryCursor * cursor;                                  //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                 //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                       //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                   //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                   //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCompletionBlock;                                 //@synthesize queryCompletionBlock=_queryCompletionBlock - In the implementation block
-(id)init;
-(CKQuery *)query;
-(CKQueryCursor *)cursor;
-(void)setQuery:(CKQuery *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(id)initWithQuery:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)recordFetchedBlock;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(id)queryCursorFetchedBlock;
-(id)queryCompletionBlock;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(CKQueryCursor *)resultsCursor;
-(void)setQueryCursorFetchedBlock:(id)arg1 ;
-(NSArray *)desiredKeys;
-(NSDictionary *)assetTransferOptionsByKey;
-(void)setAssetTransferOptionsByKey:(NSDictionary *)arg1 ;
-(BOOL)fetchAllResults;
-(void)setFetchAllResults:(BOOL)arg1 ;
-(id)initWithCursor:(id)arg1 ;
@end

