/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGHighlightItemEnrichmentRule.h>

@class PGManager, NSString;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {

	PGManager* _manager;

}

@property (nonatomic,readonly) PGManager * manager;                 //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(double)promotionScoreForHighlightItemList:(id)arg1 ;
-(id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

