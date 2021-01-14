/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class NSString, NSDictionary;

@interface AVTAsset : NSObject {

	NSString* _uid;
	NSString* _resourcePath;
	long long _componentType;
	unsigned char _resourceType;
	NSDictionary* _morphVariantDependencies;
	NSDictionary* _imageVariantDependencies;
	NSDictionary* _materialVariantDependencies;
	NSString* _ambientOcclusion;
	NSDictionary* _highlights;
	unsigned long long _refCount;
	id _cachedResource;
	BOOL _forceHighTessellation;
	NSDictionary* _specializationSettings;
	NSDictionary* _layers;
	NSDictionary* _perAssetMain;
	SCD_Struct_AV7 _uvRemappingInfo;

}

@property (readonly) long long componentType;                            //@synthesize componentType=_componentType - In the implementation block
@property (readonly) NSString * uid;                                     //@synthesize uid=_uid - In the implementation block
@property (readonly) NSString * ambientOcclusion;                        //@synthesize ambientOcclusion=_ambientOcclusion - In the implementation block
@property (readonly) NSDictionary * specializationSettings;              //@synthesize specializationSettings=_specializationSettings - In the implementation block
@property (readonly) NSDictionary * layers;                              //@synthesize layers=_layers - In the implementation block
@property (readonly) BOOL is2DAsset; 
@property (readonly) BOOL is3DAsset; 
@property (readonly) SCD_Struct_AV8 uvRemappingInfo;                     //@synthesize uvRemappingInfo=_uvRemappingInfo - In the implementation block
-(NSString *)uid;
-(NSDictionary *)layers;
-(id)description;
-(long long)componentType;
-(NSString *)ambientOcclusion;
-(BOOL)is3DAsset;
-(void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(SCD_Struct_AV8)uvRemappingInfo;
-(void)freeCache;
-(id)instantiateResource;
-(id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3 ;
-(void)incrUseCount;
-(void)decrUseCount;
-(BOOL)is2DAsset;
-(id)resourceByCachingIfNeeded:(BOOL)arg1 ;
-(id)assetImageForAsset:(id)arg1 ;
-(NSDictionary *)specializationSettings;
@end

