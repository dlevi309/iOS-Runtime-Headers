/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphNode;

@interface PGPotentialPetMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _petAssets;
	PGGraphNode* _owner;
	long long _year;

}

@property (retain) NSArray * petAssets;                //@synthesize petAssets=_petAssets - In the implementation block
@property (readonly) PGGraphNode * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) long long year;                   //@synthesize year=_year - In the implementation block
-(long long)year;
-(PGGraphNode *)owner;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithOwner:(id)arg1 year:(long long)arg2 ;
-(NSArray *)petAssets;
-(void)setPetAssets:(NSArray *)arg1 ;
@end

