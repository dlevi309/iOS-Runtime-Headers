/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphSocialGroupNode, NSSet, NSArray, NSString;

@interface PGPotentialSocialGroupOverTimeMemory : PGPotentialMemory {

	PGGraphSocialGroupNode* _socialGroupNode;
	NSSet* _personNodes;
	NSArray* _curatedAssets;
	NSArray* _facedAssets;
	NSString* _uuid;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) NSSet * personNodes;                                   //@synthesize personNodes=_personNodes - In the implementation block
@property (retain) NSArray * curatedAssets;                                 //@synthesize curatedAssets=_curatedAssets - In the implementation block
@property (retain) NSArray * facedAssets;                                   //@synthesize facedAssets=_facedAssets - In the implementation block
@property (readonly) NSString * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(NSString *)uuid;
-(NSArray *)curatedAssets;
-(void)setCuratedAssets:(NSArray *)arg1 ;
-(NSSet *)personNodes;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(id)initWithSocialGroupNode:(id)arg1 momentNodes:(id)arg2 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
@end

