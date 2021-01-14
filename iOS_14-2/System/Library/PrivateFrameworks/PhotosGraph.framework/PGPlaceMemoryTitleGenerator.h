/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator {

	PGGraphNode* _placeNode;

}

@property (nonatomic,retain) PGGraphNode * placeNode;              //@synthesize placeNode=_placeNode - In the implementation block
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2 ;
-(id)_placeTitle;
-(PGGraphNode *)placeNode;
-(void)setPlaceNode:(PGGraphNode *)arg1 ;
@end

