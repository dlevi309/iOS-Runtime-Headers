/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray;

@interface PGPotentialPeopleMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _peopleNode;
	long long _year;
	NSArray* _facedAssets;

}

@property (retain) PGGraphNode * peopleNode;              //@synthesize peopleNode=_peopleNode - In the implementation block
@property (readonly) long long year;                      //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssets;                 //@synthesize facedAssets=_facedAssets - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithSubcategory:(unsigned long long)arg1 peopleNode:(id)arg2 year:(long long)arg3 ;
-(PGGraphNode *)peopleNode;
-(void)setPeopleNode:(PGGraphNode *)arg1 ;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
@end

