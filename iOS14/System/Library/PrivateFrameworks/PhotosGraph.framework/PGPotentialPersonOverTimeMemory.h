/*
* Generated on Thursday, January 14, 2021 at 2:25:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _bestAssetLocalIdentifiers;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (readonly) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSArray * bestAssetLocalIdentifiers;               //@synthesize bestAssetLocalIdentifiers=_bestAssetLocalIdentifiers - In the implementation block
-(id)uuid;
-(PGGraphPersonNode *)personNode;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(NSArray *)bestAssetLocalIdentifiers;
-(void)setBestAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

