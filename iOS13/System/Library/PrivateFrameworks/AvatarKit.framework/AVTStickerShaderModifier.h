/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, NSArray;

@interface AVTStickerShaderModifier : NSObject {

	BOOL _forceDoubleSided;
	NSString* _entryPoint;
	NSString* _geometryName;
	NSString* _data;
	NSArray* _properties;

}

@property (nonatomic,readonly) NSString * entryPoint;                //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) NSString * geometryName;              //@synthesize geometryName=_geometryName - In the implementation block
@property (nonatomic,readonly) NSString * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) BOOL forceDoubleSided;                //@synthesize forceDoubleSided=_forceDoubleSided - In the implementation block
+(id)shaderModifierCache;
+(id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
+(id)entryPointForModifierName:(id)arg1 ;
+(id)encapsulateShaderData:(id)arg1 ;
-(id)description;
-(NSString *)data;
-(NSArray *)properties;
-(NSString *)entryPoint;
-(BOOL)applyToAvatar:(id)arg1 ;
-(void)removeFromAvatar:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToNode:(id)arg1 ;
-(BOOL)applyToNodeHierarchy:(id)arg1 ;
-(id)initWithEntryPoint:(id)arg1 geometryName:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(BOOL)arg5 ;
-(id)cloneWithProperties:(id)arg1 ;
-(NSString *)geometryName;
-(BOOL)forceDoubleSided;
-(id)findMaterialsForGeometryName:(id)arg1 inAvatar:(id)arg2 ;
-(BOOL)removeFromMaterial:(id)arg1 ;
-(BOOL)applyToMaterial:(id)arg1 ;
@end

