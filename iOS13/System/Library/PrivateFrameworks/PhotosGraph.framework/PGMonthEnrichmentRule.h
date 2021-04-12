/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGHighlightItemEnrichmentRule.h>

@protocol PGHighlightItemModelReader;
@class PGManager, NSString;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {

	PGManager* _manager;
	id<PGHighlightItemModelReader> _modelReader;

}

@property (nonatomic,readonly) id<PGHighlightItemModelReader> modelReader;              //@synthesize modelReader=_modelReader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PGManager * manager;                                     //@synthesize manager=_manager - In the implementation block
-(PGManager *)manager;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(/*^block*/id)arg2 maximumNumberOfVisibleItems:(unsigned long long)arg3 maximumNumberOfVisibleRegularItems:(unsigned long long)arg4 ;
-(double)promotionScoreForHighlightItemList:(id)arg1 ;
-(id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithManager:(id)arg1 modelReader:(id)arg2 ;
-(id)firstKeyAssetWithHighlightItemList:(id)arg1 ;
-(id)fallbackKeyAssetWithHighlightItemList:(id)arg1 ;
-(id)_sampleAssets:(id)arg1 withSize:(unsigned long long)arg2 ;
-(id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4 ;
-(id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2 ;
-(id<PGHighlightItemModelReader>)modelReader;
@end

