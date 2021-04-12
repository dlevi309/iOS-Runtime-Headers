/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, CKQuery, CKQueryCursor, NSArray, NSDictionary, FCEdgeCacheHint;

@interface FCCKContentQueryOperation : FCNetworkOperation {

	int _networkEventType;
	FCCKContentDatabase* _database;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	NSArray* _requestUUIDs;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	unsigned long long _queryPriority;
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
@property (assign,nonatomic) int networkEventType;                                   //@synthesize networkEventType=_networkEventType - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;              //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                          //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (assign,nonatomic) unsigned long long queryPriority;                       //@synthesize queryPriority=_queryPriority - In the implementation block
-(BOOL)validateOperation;
-(void)setNetworkEventType:(int)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(CKQuery *)query;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
-(void)performOperation;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(int)networkEventType;
-(id)_ckCursorFromQueryResponse:(id)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(id)init;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(NSArray *)requestUUIDs;
-(id)queryCompletionBlock;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(id)_ckRecordsFromQueryResponse:(id)arg1 ;
-(NSArray *)desiredKeys;
-(void)setQueryPriority:(unsigned long long)arg1 ;
-(CKQueryCursor *)resultCursor;
-(CKQueryCursor *)cursor;
-(void)setResultCursor:(CKQueryCursor *)arg1 ;
-(id)_requestOperations;
-(id)recordFetchedBlock;
-(void)setQuery:(CKQuery *)arg1 ;
-(FCCKContentDatabase *)database;
-(NSArray *)networkEvents;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(unsigned long long)resultsLimit;
-(unsigned long long)queryPriority;
-(void)setCursor:(CKQueryCursor *)arg1 ;
@end

