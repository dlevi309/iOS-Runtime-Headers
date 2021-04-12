/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@interface PGTripHighlightTitleGenerator : PGTitleGenerator {

	id<PGEventEnrichment> _collection;

}

@property (nonatomic,readonly) id<PGEventEnrichment> collection;              //@synthesize collection=_collection - In the implementation block
-(id<PGEventEnrichment>)collection;
-(id)initWithCollection:(id)arg1 ;
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(BOOL)_useSplitTimeTitlesIfNeeded;
@end

