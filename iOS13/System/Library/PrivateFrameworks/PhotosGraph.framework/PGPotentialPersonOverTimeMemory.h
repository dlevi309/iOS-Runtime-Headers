/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _curatedAssets;
	NSArray* _facedAssets;

}

@property (readonly) PGGraphPersonNode * personNode;              //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssets;                         //@synthesize facedAssets=_facedAssets - In the implementation block
@property (retain) NSArray * curatedAssets;                       //@synthesize curatedAssets=_curatedAssets - In the implementation block
-(id)uuid;
-(NSArray *)curatedAssets;
-(void)setCuratedAssets:(NSArray *)arg1 ;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(PGGraphPersonNode *)personNode;
@end

