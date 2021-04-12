/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class NSArray, SCNNode, NSString, NSDictionary;

@interface AVTComponentInstance : NSObject {

	NSArray* _assets;
	SCNNode* _assetNode;
	NSString* _materialVariant;
	NSString* _assetImage;
	NSString* _assetImageVariant;
	NSDictionary* _layers;

}

@property (readonly) SCNNode * assetNode;                         //@synthesize assetNode=_assetNode - In the implementation block
@property (readonly) NSString * assetImage;                       //@synthesize assetImage=_assetImage - In the implementation block
@property (readonly) SCD_Struct_AV8 uvRemappingInfo; 
-(NSString *)assetImage;
-(SCD_Struct_AV8)uvRemappingInfo;
-(id)assetImageWithLayerNamed:(id)arg1 ;
-(id)assetImageForAsset:(id)arg1 ;
-(SCNNode *)assetNode;
-(id)initWithComponent:(id)arg1 assetResourceCache:(id)arg2 ;
-(void)updateMaterialsWithComponent:(id)arg1 ;
-(BOOL)has2DAsset;
-(void)setImageVariant:(id)arg1 ;
-(void)setMaterialVariant:(id)arg1 ;
-(BOOL)has3DAsset;
@end

