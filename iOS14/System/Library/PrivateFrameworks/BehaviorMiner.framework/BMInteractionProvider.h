/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class _CDInteractionStore, BMMiningTaskConfig;

@interface BMInteractionProvider : NSObject {

	_CDInteractionStore* _interactionStore;
	id _contextKitClient;
	BMMiningTaskConfig* _bmMiningTaskConfig;

}

@property (nonatomic,retain) id contextKitClient;                                   //@synthesize contextKitClient=_contextKitClient - In the implementation block
@property (retain) BMMiningTaskConfig * bmMiningTaskConfig;                         //@synthesize bmMiningTaskConfig=_bmMiningTaskConfig - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
-(_CDInteractionStore *)interactionStore;
-(id)init;
-(id)initWithInteractionStore:(id)arg1 ;
-(BMMiningTaskConfig *)bmMiningTaskConfig;
-(id)initWithBMMiningTaskConfig:(id)arg1 ;
-(void)setBmMiningTaskConfig:(BMMiningTaskConfig *)arg1 ;
-(id)interactionEventsForTypes:(id)arg1 error:(id*)arg2 ;
-(id)initWithInteractionStore:(id)arg1 bmMiningTaskConfig:(id)arg2 ;
-(id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1 ;
-(id)contextKitClient;
-(id)getResultsForRequest:(id)arg1 ;
-(void)setContextKitClient:(id)arg1 ;
@end

