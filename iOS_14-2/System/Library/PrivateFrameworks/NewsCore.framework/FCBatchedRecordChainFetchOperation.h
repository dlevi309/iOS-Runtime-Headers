/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResultHeldRecordsByType:(NSMutableDictionary *)arg1 ;
-(BOOL)validateOperation;
-(id)cachedRecordsLookupBlock;
-(NSDictionary *)cachePoliciesByRecordType;
-(void)setLinkKeysByRecordType:(NSDictionary *)arg1 ;
-(void)setMaxBatchSize:(unsigned long long)arg1 ;
-(NSError *)operationError;
-(NSMutableDictionary *)resultHeldRecordsByType;
-(void)setAdditionalRecordSources:(NSArray *)arg1 ;
-(void)_continueRefreshing;
-(void)setRecordChainCompletionHandler:(id)arg1 ;
-(void)setCachedRecordsLookupBlock:(id)arg1 ;
-(void)resetForRetry;
-(unsigned long long)maxBatchSize;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setTopLevelRecordIDs:(NSArray *)arg1 ;
-(void)setCachePoliciesByRecordType:(NSDictionary *)arg1 ;
-(NSArray *)topLevelRecordIDs;
-(NSArray *)additionalRecordSources;
-(void)performOperation;
-(void)setOperationError:(NSError *)arg1 ;
-(id)init;
-(id)recordChainCompletionHandler;
-(NSMutableArray *)remainingRecordIDBatches;
-(id<FCContentContext>)context;
-(NSDictionary *)linkKeysByRecordType;
-(id)dynamicCachePolicyBlock;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(void)setDynamicCachePolicyBlock:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

