/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSDictionary, FCEdgeCacheHint, FCHeldRecords, NSMutableSet, NSMutableArray;

@interface FCRecordChainFetchOperation : FCOperation {

	BOOL _shouldReturnErrorWhenSomeRecordsMissing;
	BOOL _shouldBypassRecordSourcePersistence;
	id<FCContentContext> _context;
	NSArray* _topLevelRecordIDs;
	NSDictionary* _linkKeysByRecordType;
	NSDictionary* _cachePoliciesByRecordType;
	/*^block*/id _dynamicCachePolicyBlock;
	FCEdgeCacheHint* _edgeCacheHint;
	NSArray* _additionalRecordSources;
	/*^block*/id _cachedRecordsLookupBlock;
	/*^block*/id _recordChainCompletionHandler;
	NSArray* _recordSources;
	NSDictionary* _recordSourcesByRecordType;
	NSDictionary* _pbRecordTypesByRecordType;
	FCHeldRecords* _cachedRecords;
	NSMutableSet* _actualTopLevelRecordIDs;
	NSMutableSet* _skippedTopLevelRecordIDs;
	NSMutableSet* _missingCachedOnlyTopLevelRecordIDs;
	NSDictionary* _resultHeldRecordsByType;
	NSMutableArray* _mutableNetworkEvents;

}

@property (nonatomic,retain) NSArray * recordSources;                                        //@synthesize recordSources=_recordSources - In the implementation block
@property (nonatomic,retain) NSDictionary * recordSourcesByRecordType;                       //@synthesize recordSourcesByRecordType=_recordSourcesByRecordType - In the implementation block
@property (nonatomic,retain) NSDictionary * pbRecordTypesByRecordType;                       //@synthesize pbRecordTypesByRecordType=_pbRecordTypesByRecordType - In the implementation block
@property (nonatomic,retain) FCHeldRecords * cachedRecords;                                  //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSMutableSet * actualTopLevelRecordIDs;                         //@synthesize actualTopLevelRecordIDs=_actualTopLevelRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * skippedTopLevelRecordIDs;                        //@synthesize skippedTopLevelRecordIDs=_skippedTopLevelRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * missingCachedOnlyTopLevelRecordIDs;              //@synthesize missingCachedOnlyTopLevelRecordIDs=_missingCachedOnlyTopLevelRecordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;                         //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableNetworkEvents;                          //@synthesize mutableNetworkEvents=_mutableNetworkEvents - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * topLevelRecordIDs;                                      //@synthesize topLevelRecordIDs=_topLevelRecordIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * linkKeysByRecordType;                              //@synthesize linkKeysByRecordType=_linkKeysByRecordType - In the implementation block
@property (nonatomic,copy) NSDictionary * cachePoliciesByRecordType;                         //@synthesize cachePoliciesByRecordType=_cachePoliciesByRecordType - In the implementation block
@property (nonatomic,copy) id dynamicCachePolicyBlock;                                       //@synthesize dynamicCachePolicyBlock=_dynamicCachePolicyBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing;                   //@synthesize shouldReturnErrorWhenSomeRecordsMissing=_shouldReturnErrorWhenSomeRecordsMissing - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                                  //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,retain) NSArray * additionalRecordSources;                              //@synthesize additionalRecordSources=_additionalRecordSources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * networkEvents; 
@property (assign,nonatomic) BOOL shouldBypassRecordSourcePersistence;                       //@synthesize shouldBypassRecordSourcePersistence=_shouldBypassRecordSourcePersistence - In the implementation block
@property (nonatomic,copy) id cachedRecordsLookupBlock;                                      //@synthesize cachedRecordsLookupBlock=_cachedRecordsLookupBlock - In the implementation block
@property (nonatomic,copy) id recordChainCompletionHandler;                                  //@synthesize recordChainCompletionHandler=_recordChainCompletionHandler - In the implementation block
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(BOOL)validateOperation;
-(id)cachedRecordsLookupBlock;
-(NSDictionary *)cachePoliciesByRecordType;
-(void)setLinkKeysByRecordType:(NSDictionary *)arg1 ;
-(NSDictionary *)resultHeldRecordsByType;
-(void)setAdditionalRecordSources:(NSArray *)arg1 ;
-(void)setRecordChainCompletionHandler:(id)arg1 ;
-(void)setCachedRecordsLookupBlock:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setTopLevelRecordIDs:(NSArray *)arg1 ;
-(void)setCachePoliciesByRecordType:(NSDictionary *)arg1 ;
-(NSArray *)topLevelRecordIDs;
-(NSArray *)additionalRecordSources;
-(void)performOperation;
-(void)prepareOperation;
-(void)setSkippedTopLevelRecordIDs:(NSMutableSet *)arg1 ;
-(void)_walkRecordChainStartingWithRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2 recordsLookupBlock:(/*^block*/id)arg3 visitorBlock:(/*^block*/id)arg4 ;
-(BOOL)shouldBypassRecordSourcePersistence;
-(void)setRecordSources:(NSArray *)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(void)setCachedRecords:(FCHeldRecords *)arg1 ;
-(id)init;
-(void)_filterOrphansFromCachedRecords;
-(void)_finalizeResultFromCachedRecords;
-(void)_issueCloudRequestIfNeeded;
-(void)setRecordSourcesByRecordType:(NSDictionary *)arg1 ;
-(NSArray *)recordSources;
-(id)recordChainCompletionHandler;
-(int)_pbRecordTypeForRecordType:(id)arg1 ;
-(void)setMutableNetworkEvents:(NSMutableArray *)arg1 ;
-(void)_collectCachedRecordsFromRecordIDs:(id)arg1 ;
-(void)setPbRecordTypesByRecordType:(NSDictionary *)arg1 ;
-(id<FCContentContext>)context;
-(void)_collectActualTopLevelRecordIDsFromRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2 ;
-(FCHeldRecords *)cachedRecords;
-(NSDictionary *)pbRecordTypesByRecordType;
-(NSDictionary *)recordSourcesByRecordType;
-(void)setShouldBypassRecordSourcePersistence:(BOOL)arg1 ;
-(id)_partialUncachedErrorForMissingRecordName:(id)arg1 ;
-(id)_recordIDsMissingFromCachedRecords;
-(id)_recordSourceForRecordType:(id)arg1 ;
-(NSMutableArray *)mutableNetworkEvents;
-(id)_recordTypeForRecordID:(id)arg1 ;
-(NSMutableSet *)actualTopLevelRecordIDs;
-(void)setShouldReturnErrorWhenSomeRecordsMissing:(BOOL)arg1 ;
-(NSMutableSet *)skippedTopLevelRecordIDs;
-(void)setMissingCachedOnlyTopLevelRecordIDs:(NSMutableSet *)arg1 ;
-(id)_errorForMissingRecordNames:(id)arg1 ;
-(int)_pbRecordTypeForRecordID:(id)arg1 ;
-(id)_partialFetchErrorForMissingRecordName:(id)arg1 ;
-(NSArray *)networkEvents;
-(NSDictionary *)linkKeysByRecordType;
-(id)dynamicCachePolicyBlock;
-(NSMutableSet *)missingCachedOnlyTopLevelRecordIDs;
-(void)setDynamicCachePolicyBlock:(id)arg1 ;
-(BOOL)shouldReturnErrorWhenSomeRecordsMissing;
-(void)setActualTopLevelRecordIDs:(NSMutableSet *)arg1 ;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

