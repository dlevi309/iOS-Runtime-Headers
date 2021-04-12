/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSError;

@interface FCBatchedRecordChainFetchOperation : FCOperation {

	unsigned long long _maxBatchSize;
	id<FCContentContext> _context;
	NSArray* _topLevelRecordIDs;
	NSDictionary* _linkKeysByRecordType;
	NSDictionary* _cachePoliciesByRecordType;
	/*^block*/id _dynamicCachePolicyBlock;
	NSArray* _additionalRecordSources;
	/*^block*/id _cachedRecordsLookupBlock;
	/*^block*/id _recordChainCompletionHandler;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableDictionary* _resultHeldRecordsByType;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;                  //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultHeldRecordsByType;              //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (nonatomic,retain) NSError * operationError;                                   //@synthesize operationError=_operationError - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchSize;                            //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * topLevelRecordIDs;                                  //@synthesize topLevelRecordIDs=_topLevelRecordIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * linkKeysByRecordType;                          //@synthesize linkKeysByRecordType=_linkKeysByRecordType - In the implementation block
@property (nonatomic,copy) NSDictionary * cachePoliciesByRecordType;                     //@synthesize cachePoliciesByRecordType=_cachePoliciesByRecordType - In the implementation block
@property (nonatomic,copy) id dynamicCachePolicyBlock;                                   //@synthesize dynamicCachePolicyBlock=_dynamicCachePolicyBlock - In the implementation block
@property (nonatomic,retain) NSArray * additionalRecordSources;                          //@synthesize additionalRecordSources=_additionalRecordSources - In the implementation block
@property (nonatomic,copy) id cachedRecordsLookupBlock;                                  //@synthesize cachedRecordsLookupBlock=_cachedRecordsLookupBlock - In the implementation block
@property (nonatomic,copy) id recordChainCompletionHandler;                              //@synthesize recordChainCompletionHandler=_recordChainCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(unsigned long long)maxBatchSize;
-(void)setMaxBatchSize:(unsigned long long)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(void)setAdditionalRecordSources:(NSArray *)arg1 ;
-(void)setTopLevelRecordIDs:(NSArray *)arg1 ;
-(void)setLinkKeysByRecordType:(NSDictionary *)arg1 ;
-(void)setDynamicCachePolicyBlock:(id)arg1 ;
-(void)setRecordChainCompletionHandler:(id)arg1 ;
-(NSDictionary *)linkKeysByRecordType;
-(NSArray *)additionalRecordSources;
-(NSArray *)topLevelRecordIDs;
-(id)recordChainCompletionHandler;
-(NSMutableDictionary *)resultHeldRecordsByType;
-(id)cachedRecordsLookupBlock;
-(id)dynamicCachePolicyBlock;
-(NSDictionary *)cachePoliciesByRecordType;
-(void)setResultHeldRecordsByType:(NSMutableDictionary *)arg1 ;
-(void)setCachePoliciesByRecordType:(NSDictionary *)arg1 ;
-(void)setCachedRecordsLookupBlock:(id)arg1 ;
-(NSMutableArray *)remainingRecordIDBatches;
-(void)_continueRefreshing;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
@end

