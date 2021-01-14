/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphSocialGroupNode, NSSet, NSArray, NSString;

@interface PGPotentialSocialGroupOverTimeMemory : PGPotentialMemory {

	PGGraphSocialGroupNode* _socialGroupNode;
	NSSet* _personNodes;
	NSArray* _curatedAssetLocalIdentifiers;
	NSArray* _facedAssetLocalIdentifiers;
	NSString* _uuid;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) NSSet * personNodes;                                   //@synthesize personNodes=_personNodes - In the implementation block
@property (retain) NSArray * curatedAssetLocalIdentifiers;                  //@synthesize curatedAssetLocalIdentifiers=_curatedAssetLocalIdentifiers - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;                    //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (readonly) NSString * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(NSString *)uuid;
-(NSSet *)personNodes;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithSocialGroupNode:(id)arg1 momentNodes:(id)arg2 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(NSArray *)curatedAssetLocalIdentifiers;
-(void)setCuratedAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

