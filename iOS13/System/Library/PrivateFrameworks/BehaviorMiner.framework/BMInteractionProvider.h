/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class _CDInteractionStore;

@interface BMInteractionProvider : NSObject {

	_CDInteractionStore* _interactionStore;

}

@property (nonatomic,readonly) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id)initWithInteractionStore:(id)arg1 ;
-(id)interactionEventsForTypes:(id)arg1 error:(id*)arg2 ;
-(id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1 ;
@end

