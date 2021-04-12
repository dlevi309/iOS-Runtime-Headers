/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGHighlightItemEnrichmentRule.h>

@class PGManager, NSString;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {

	PGManager* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PGManager * manager;                 //@synthesize manager=_manager - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(double)promotionScoreForHighlightItemList:(id)arg1 ;
-(id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

