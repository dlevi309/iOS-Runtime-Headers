/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator {

	NSSet* _locationNodes;

}

@property (nonatomic,retain) NSSet * locationNodes;              //@synthesize locationNodes=_locationNodes - In the implementation block
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(id)_timeTitle;
-(id)initWithLocationNodes:(id)arg1 ;
@end

