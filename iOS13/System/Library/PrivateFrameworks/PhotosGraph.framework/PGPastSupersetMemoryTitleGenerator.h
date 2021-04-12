/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphLocationNode, NSDateInterval;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator {

	PGGraphLocationNode* _supersetLocationNode;
	NSDateInterval* _supersetDateInterval;

}

@property (readonly) PGGraphLocationNode * supersetLocationNode;              //@synthesize supersetLocationNode=_supersetLocationNode - In the implementation block
@property (readonly) NSDateInterval * supersetDateInterval;                   //@synthesize supersetDateInterval=_supersetDateInterval - In the implementation block
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3 ;
-(id)_timeTitle;
-(PGGraphLocationNode *)supersetLocationNode;
-(NSDateInterval *)supersetDateInterval;
@end

