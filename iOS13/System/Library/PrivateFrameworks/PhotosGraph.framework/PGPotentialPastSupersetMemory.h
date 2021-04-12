/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphLocationNode, NSDateInterval, NSSet, NSArray;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory {

	PGGraphLocationNode* _supersetLocationNode;
	NSDateInterval* _supersetDateInterval;
	NSSet* _interestingMomentNodes;
	NSArray* _interestingAssetsInSuperset;
	NSArray* _assetsInSuperset;
	NSSet* _supersetLocationNodes;

}

@property (readonly) PGGraphLocationNode * supersetLocationNode;              //@synthesize supersetLocationNode=_supersetLocationNode - In the implementation block
@property (readonly) NSDateInterval * supersetDateInterval;                   //@synthesize supersetDateInterval=_supersetDateInterval - In the implementation block
@property (readonly) NSSet * interestingMomentNodes;                          //@synthesize interestingMomentNodes=_interestingMomentNodes - In the implementation block
@property (retain) NSArray * interestingAssetsInSuperset;                     //@synthesize interestingAssetsInSuperset=_interestingAssetsInSuperset - In the implementation block
@property (retain) NSArray * assetsInSuperset;                                //@synthesize assetsInSuperset=_assetsInSuperset - In the implementation block
@property (retain) NSSet * supersetLocationNodes;                             //@synthesize supersetLocationNodes=_supersetLocationNodes - In the implementation block
-(PGGraphLocationNode *)supersetLocationNode;
-(NSDateInterval *)supersetDateInterval;
-(id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4 ;
-(NSSet *)interestingMomentNodes;
-(NSArray *)interestingAssetsInSuperset;
-(void)setInterestingAssetsInSuperset:(NSArray *)arg1 ;
-(NSArray *)assetsInSuperset;
-(void)setAssetsInSuperset:(NSArray *)arg1 ;
-(NSSet *)supersetLocationNodes;
-(void)setSupersetLocationNodes:(NSSet *)arg1 ;
@end

