/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphSocialGroupNode, NSArray, NSSet;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphSocialGroupNode* _socialGroupNode;
	long long _year;
	NSArray* _facedAssets;
	NSSet* _peopleUUIDs;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) long long year;                                        //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssets;                                   //@synthesize facedAssets=_facedAssets - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                     //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
-(long long)year;
-(NSSet *)peopleUUIDs;
-(void)addMomentNode:(id)arg1 ;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
@end

