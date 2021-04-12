/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, CKQuery, CKQueryCursor, NSArray, NSDictionary, FCEdgeCacheHint;

@interface FCCKContentQueryOperation : FCNetworkOperation {

	FCCKContentDatabase* _database;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	NSArray* _requestUUIDs;
	long long _networkEventType;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	NSArray* _networkEvents;
	CKQueryCursor* _resultCursor;

}

@property (nonatomic,copy) NSArray * requestUUIDs;                                   //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                                  //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultCursor;                           //@synthesize resultCursor=_resultCursor - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKQuery * query;                                        //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                                 //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                    //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCompletionBlock;                                  //@synthesize queryCompletionBlock=_queryCompletionBlock - In the implementation block
@property (assign,nonatomic) long long networkEventType;                             //@synthesize networkEventType=_networkEventType - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;              //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                          //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
-(id)init;
-(CKQuery *)query;
-(CKQueryCursor *)cursor;
-(void)setQuery:(CKQuery *)arg1 ;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(unsigned long long)resultsLimit;
-(id)recordFetchedBlock;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSArray *)requestUUIDs;
-(id)queryCompletionBlock;
-(NSArray *)desiredKeys;
-(NSArray *)networkEvents;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(void)setResultCursor:(CKQueryCursor *)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(void)setNetworkEventType:(long long)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(long long)networkEventType;
-(CKQueryCursor *)resultCursor;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(id)_requestOperations;
-(id)_ckRecordsFromQueryResponse:(id)arg1 ;
-(id)_ckCursorFromQueryResponse:(id)arg1 ;
@end

