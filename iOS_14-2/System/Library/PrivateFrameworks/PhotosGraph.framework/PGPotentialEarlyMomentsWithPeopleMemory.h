/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory {

	NSSet* _personNodes;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * personNodes;                             //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
-(NSSet *)personNodes;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 ;
@end

