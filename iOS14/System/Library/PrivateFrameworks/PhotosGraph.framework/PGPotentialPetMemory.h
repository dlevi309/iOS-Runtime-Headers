/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphPersonNode;

@interface PGPotentialPetMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _petAssetLocalIdentifiers;
	PGGraphPersonNode* _ownerPersonNode;
	long long _year;

}

@property (retain) NSArray * petAssetLocalIdentifiers;                 //@synthesize petAssetLocalIdentifiers=_petAssetLocalIdentifiers - In the implementation block
@property (readonly) PGGraphPersonNode * ownerPersonNode;              //@synthesize ownerPersonNode=_ownerPersonNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithOwner:(id)arg1 year:(long long)arg2 ;
-(NSArray *)petAssetLocalIdentifiers;
-(void)setPetAssetLocalIdentifiers:(NSArray *)arg1 ;
-(PGGraphPersonNode *)ownerPersonNode;
@end

