/*
* Generated on Thursday, January 14, 2021 at 2:25:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphPersonNode, NSArray;

@interface PGPotentialPeopleMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphPersonNode* _personNode;
	long long _year;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (retain) PGGraphPersonNode * personNode;                    //@synthesize personNode=_personNode - In the implementation block
@property (readonly) long long year;                                  //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithSubcategory:(unsigned long long)arg1 peopleNode:(id)arg2 year:(long long)arg3 ;
-(PGGraphPersonNode *)personNode;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

