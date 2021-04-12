/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphSocialGroupNode, NSArray, NSSet;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphSocialGroupNode* _socialGroupNode;
	long long _year;
	NSArray* _facedAssetLocalIdentifiers;
	NSSet* _peopleUUIDs;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) long long year;                                        //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;                    //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                     //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
-(long long)year;
-(NSSet *)peopleUUIDs;
-(void)addMomentNode:(id)arg1 ;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
@end

