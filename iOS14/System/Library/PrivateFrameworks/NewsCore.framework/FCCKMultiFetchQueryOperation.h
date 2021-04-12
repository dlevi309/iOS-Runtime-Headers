/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, FCEdgeCacheHint, NSMutableArray, NSMutableSet;

@interface FCCKMultiFetchQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSArray* _recordSpecs;
	NSDictionary* _knownRecordIDsToEtags;
	FCEdgeCacheHint* _edgeCacheHint;
	NSArray* _networkEvents;
	/*^block*/id _queryCompletionHandler;
	NSDictionary* _recordSpecsByType;
	NSMutableArray* _resultFetchedRecords;
	NSMutableSet* _resultMissingRecordIDs;

}

@property (nonatomic,retain) NSDictionary * recordSpecsByType;                   //@synthesize recordSpecsByType=_recordSpecsByType - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultFetchedRecords;              //@synthesize resultFetchedRecords=_resultFetchedRecords - In the implementation block
@property (nonatomic,retain) NSMutableSet * resultMissingRecordIDs;              //@synthesize resultMissingRecordIDs=_resultMissingRecordIDs - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                              //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * recordSpecs;                              //@synthesize recordSpecs=_recordSpecs - In the implementation block
@property (nonatomic,retain) NSDictionary * knownRecordIDsToEtags;               //@synthesize knownRecordIDsToEtags=_knownRecordIDsToEtags - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                      //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                            //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(id)_desiredKeys;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(NSDictionary *)knownRecordIDsToEtags;
-(void)setResultMissingRecordIDs:(NSMutableSet *)arg1 ;
-(id)_constructQuery;
-(void)setRecordSpecs:(NSArray *)arg1 ;
-(NSDictionary *)recordSpecsByType;
-(unsigned long long)_queryPriority;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(void)setResultFetchedRecords:(NSMutableArray *)arg1 ;
-(void)setKnownRecordIDsToEtags:(NSDictionary *)arg1 ;
-(FCCKContentDatabase *)database;
-(NSArray *)networkEvents;
-(id)queryCompletionHandler;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSMutableArray *)resultFetchedRecords;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(NSMutableSet *)resultMissingRecordIDs;
-(NSArray *)recordSpecs;
-(void)setRecordSpecsByType:(NSDictionary *)arg1 ;
@end

