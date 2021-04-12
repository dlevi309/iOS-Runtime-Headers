/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(id)_desiredKeys;
-(NSArray *)networkEvents;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(id)queryCompletionHandler;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(void)setRecordSpecs:(NSArray *)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(void)setKnownRecordIDsToEtags:(NSDictionary *)arg1 ;
-(NSArray *)recordSpecs;
-(void)setRecordSpecsByType:(NSDictionary *)arg1 ;
-(void)setResultFetchedRecords:(NSMutableArray *)arg1 ;
-(void)setResultMissingRecordIDs:(NSMutableSet *)arg1 ;
-(id)_constructQuery;
-(NSMutableSet *)resultMissingRecordIDs;
-(NSMutableArray *)resultFetchedRecords;
-(NSDictionary *)knownRecordIDsToEtags;
-(NSDictionary *)recordSpecsByType;
@end

