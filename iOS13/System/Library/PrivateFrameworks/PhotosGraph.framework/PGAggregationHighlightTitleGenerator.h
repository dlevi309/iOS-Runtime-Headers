/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator {

	id<PGEventEnrichment> _collection;

}

@property (nonatomic,readonly) id<PGEventEnrichment> collection;              //@synthesize collection=_collection - In the implementation block
-(id<PGEventEnrichment>)collection;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(id)_locationTitleUsingKeyAssetAddressNode:(id)arg1 curationAddressNodes:(id)arg2 ;
@end

