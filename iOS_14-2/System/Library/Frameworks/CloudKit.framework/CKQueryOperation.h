/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKQueryOperationCallbacks.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary, CKQueryOperationInfo;

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks> {

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

@property (nonatomic,readonly) id<CKQueryOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKQueryOperationInfo * operationInfo; 
@property (nonatomic,copy) CKQueryCursor * resultsCursor;                                               //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                              //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL fetchAllResults;                                                      //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,copy) NSDictionary * assetTransferOptionsByKey;                                    //@synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey - In the implementation block
@property (nonatomic,copy) id queryCursorFetchedBlock;                                                  //@synthesize queryCursorFetchedBlock=_queryCursorFetchedBlock - In the implementation block
@property (nonatomic,copy) CKQuery * query;                                                             //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) CKQueryCursor * cursor;                                                      //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                                     //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                           //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                       //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                       //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCompletionBlock;                                                     //@synthesize queryCompletionBlock=_queryCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(CKQuery *)query;
-(CKRecordZoneID *)zoneID;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(CKQueryCursor *)resultsCursor;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(id)queryCursorFetchedBlock;
-(void)setQueryCursorFetchedBlock:(id)arg1 ;
-(NSDictionary *)assetTransferOptionsByKey;
-(void)setAssetTransferOptionsByKey:(NSDictionary *)arg1 ;
-(BOOL)fetchAllResults;
-(void)setFetchAllResults:(BOOL)arg1 ;
-(void)handleOperationDidCompleteWithCursor:(id)arg1 metrics:(id)arg2 error:(id)arg3 ;
-(void)handleQueryDidFetchRecord:(id)arg1 ;
-(id)initWithCursor:(id)arg1 ;
-(void)handleQueryDidFetchCursor:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(id)queryCompletionBlock;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(CKQueryCursor *)cursor;
-(id)initWithQuery:(id)arg1 ;
-(id)recordFetchedBlock;
-(void)setQuery:(CKQuery *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

