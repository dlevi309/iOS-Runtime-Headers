/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class AVTAssetInfo, NSString, NSArray, NSDictionary;

@interface AVTAsset : NSObject {

	long long _componentType;
	AVTAssetInfo* _assetInfo;
	NSString* _uid;
	NSString* _bundlePath;
	NSArray* _morphVariants;
	NSString* _ao;
	NSDictionary* _highlights;
	unsigned long long _refCount;
	unsigned char _resourceType;
	id _cachedResource;
	BOOL _forceHighTessellation;
	NSDictionary* _specializationSettings;
	NSDictionary* _layers;
	NSDictionary* _perAssetMain;
	SCD_Struct_AV6 _uvRemappingInfo;
	double _imageScale;
	CGSize _imageOffset;
	BOOL _imageMirror;

}

@property (readonly) long long componentType;                            //@synthesize componentType=_componentType - In the implementation block
@property (readonly) NSString * uid;                                     //@synthesize uid=_uid - In the implementation block
@property (readonly) NSString * ao;                                      //@synthesize ao=_ao - In the implementation block
@property (readonly) NSArray * morphVariants;                            //@synthesize morphVariants=_morphVariants - In the implementation block
@property (readonly) NSDictionary * specializationSettings;              //@synthesize specializationSettings=_specializationSettings - In the implementation block
@property (readonly) NSDictionary * layers;                              //@synthesize layers=_layers - In the implementation block
@property (readonly) BOOL is2DAsset; 
@property (readonly) BOOL is3DAsset; 
@property (readonly) SCD_Struct_AV8 uvRemappingInfo;                     //@synthesize uvRemappingInfo=_uvRemappingInfo - In the implementation block
@property (readonly) double imageScale;                                  //@synthesize imageScale=_imageScale - In the implementation block
@property (readonly) CGSize imageOffset;                                 //@synthesize imageOffset=_imageOffset - In the implementation block
@property (readonly) BOOL imageMirror;                                   //@synthesize imageMirror=_imageMirror - In the implementation block
-(id)description;
-(NSString *)uid;
-(NSDictionary *)layers;
-(double)imageScale;
-(long long)componentType;
-(id)assetInfo;
-(CGSize)imageOffset;
-(SCD_Struct_AV8)uvRemappingInfo;
-(void)freeCache;
-(id)instantiateResource;
-(id)cachedResource;
-(id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3 ;
-(void)incrUseCount;
-(void)decrUseCount;
-(id)perAssetMain;
-(BOOL)is2DAsset;
-(BOOL)is3DAsset;
-(id)resourceForCaching:(BOOL)arg1 ;
-(NSArray *)morphVariants;
-(NSDictionary *)specializationSettings;
-(BOOL)imageMirror;
-(NSString *)ao;
@end

