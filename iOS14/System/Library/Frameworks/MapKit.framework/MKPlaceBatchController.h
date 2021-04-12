/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKPlaceBatchDisplayCoordinator.h>

@protocol OS_dispatch_queue, MKPlaceBatchGuideFetcher, MKPlaceBatchGuideConsumer;
@class NSArray, NSObject, NSString;

@interface MKPlaceBatchController : NSObject <MKPlaceBatchDisplayCoordinator> {

	long long _lastDisplayedIndex;
	unsigned long long _numberOfBatches;
	long long _lastFetchedBatch;
	long long _state;
	NSArray* _batches;
	unsigned long long _totalIdentifiers;
	NSObject*<OS_dispatch_queue> _batchControllerQueue;
	unsigned long long _batchSize;
	long long _batchType;
	unsigned long long _minNumberOfItems;
	id<MKPlaceBatchGuideFetcher> _guideFetcher;
	id<MKPlaceBatchGuideConsumer> _guideConsumer;

}

@property (assign,nonatomic) unsigned long long batchSize;                                    //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) long long batchType;                                             //@synthesize batchType=_batchType - In the implementation block
@property (assign,nonatomic) unsigned long long minNumberOfItems;                             //@synthesize minNumberOfItems=_minNumberOfItems - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceBatchGuideFetcher> guideFetcher;                //@synthesize guideFetcher=_guideFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceBatchGuideConsumer> guideConsumer;              //@synthesize guideConsumer=_guideConsumer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(id<MKPlaceBatchGuideConsumer>)guideConsumer;
-(void)buildBatchesFromIdentifiers:(id)arg1 ;
-(void)didDisplayItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)minNumberOfItems;
-(void)fetchGuidesWithIdentifiers:(id)arg1 ;
-(id<MKPlaceBatchGuideFetcher>)guideFetcher;
-(void)handleFetchGuidesCompleted:(BOOL)arg1 error:(id)arg2 usingGuides:(id)arg3 ;
-(id)batchesForTesting;
-(long long)lastDisplayedIndexForTesting;
-(id)initWithGuideIdentifiers:(id)arg1 withBatchSize:(unsigned long long)arg2 minimumNumberOfItemBeforeFetching:(unsigned long long)arg3 shouldLoadFirstBatchImmediately:(BOOL)arg4 usingGuideBatchFetcher:(id)arg5 usingGuideBatchConsumer:(id)arg6 ;
-(void)setBatchType:(long long)arg1 ;
-(long long)lastFetchedBatchForTesting;
-(long long)stateForTesting;
-(void)setMinNumberOfItems:(unsigned long long)arg1 ;
-(void)setGuideFetcher:(id<MKPlaceBatchGuideFetcher>)arg1 ;
-(void)setGuideConsumer:(id<MKPlaceBatchGuideConsumer>)arg1 ;
-(long long)batchType;
@end

