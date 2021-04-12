/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class SCNNode, NSString, NSArray, NSDictionary;

@interface AVTComponentInstance : NSObject {

	SCNNode* _assetNode;
	NSString* _assetImage;
	NSArray* _assets;
	NSDictionary* _layers;

}

@property (readonly) SCNNode * assetNode;                         //@synthesize assetNode=_assetNode - In the implementation block
@property (readonly) NSString * assetImage;                       //@synthesize assetImage=_assetImage - In the implementation block
@property (readonly) SCD_Struct_AV8 uvRemappingInfo; 
@property (readonly) double imageScale; 
@property (readonly) CGSize imageOffset; 
@property (readonly) BOOL imageMirror; 
-(void)dealloc;
-(double)imageScale;
-(id)initWithComponent:(id)arg1 ;
-(NSString *)assetImage;
-(CGSize)imageOffset;
-(SCD_Struct_AV8)uvRemappingInfo;
-(id)assetImageWithLayerNamed:(id)arg1 ;
-(BOOL)imageMirror;
-(void)_commonInitForCaching:(BOOL)arg1 component:(id)arg2 ;
-(SCNNode *)assetNode;
-(id)initWithComponent:(id)arg1 forCaching:(BOOL)arg2 ;
-(void)updateMaterialsWithComponent:(id)arg1 ;
-(BOOL)has2DAsset;
-(BOOL)has3DAsset;
-(id)assetImageForAsset:(id)arg1 ;
@end

