/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

