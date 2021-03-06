/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGHighlightItemEnrichmentRule;
@class NSDictionary;

@interface PGHighlightItemEnrichment : NSObject {

	id<PGHighlightItemEnrichmentRule> _rule;
	NSDictionary* _contextualKeyAssetByHighlighItemUUID;

}

@property (nonatomic,readonly) id<PGHighlightItemEnrichmentRule> rule;                           //@synthesize rule=_rule - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextualKeyAssetByHighlighItemUUID;              //@synthesize contextualKeyAssetByHighlighItemUUID=_contextualKeyAssetByHighlighItemUUID - In the implementation block
-(id<PGHighlightItemEnrichmentRule>)rule;
-(id)initWithRule:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(void)enrichHighlightItemLists:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)contextualKeyAssetByHighlighItemUUID;
@end

