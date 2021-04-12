/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

