/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory {

	NSSet* _personNodes;
	NSArray* _facedAssets;

}

@property (nonatomic,readonly) NSSet * personNodes;              //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSArray * facedAssets;              //@synthesize facedAssets=_facedAssets - In the implementation block
-(NSSet *)personNodes;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 ;
@end

