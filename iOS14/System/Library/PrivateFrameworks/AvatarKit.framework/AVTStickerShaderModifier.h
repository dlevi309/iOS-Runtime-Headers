/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, NSArray, NSDictionary;

@interface AVTStickerShaderModifier : NSObject {

	BOOL _forceDoubleSided;
	NSString* _entryPoint;
	NSString* _geometryName;
	NSString* _data;
	NSArray* _properties;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * entryPoint;                //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) NSString * geometryName;              //@synthesize geometryName=_geometryName - In the implementation block
@property (nonatomic,readonly) NSString * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) BOOL forceDoubleSided;                //@synthesize forceDoubleSided=_forceDoubleSided - In the implementation block
+(id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
+(id)entryPointForModifierName:(id)arg1 ;
+(id)shaderModifierCache;
+(id)encapsulateShaderData:(id)arg1 ;
-(NSArray *)properties;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)entryPoint;
-(id)description;
-(NSDictionary *)dictionary;
-(NSString *)data;
-(void)applyToAvatar:(id)arg1 reversionContext:(id)arg2 ;
-(id)dictionaryWithTargetPath:(id)arg1 ;
-(void)applyToNode:(id)arg1 reversionContext:(id)arg2 ;
-(void)applyToNodeHierarchy:(id)arg1 reversionContext:(id)arg2 ;
-(id)initWithEntryPoint:(id)arg1 geometryName:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(BOOL)arg5 ;
-(id)cloneWithProperties:(id)arg1 ;
-(NSString *)geometryName;
-(BOOL)forceDoubleSided;
-(id)findMaterialsForGeometryName:(id)arg1 inAvatar:(id)arg2 ;
-(void)applyToMaterial:(id)arg1 reversionContext:(id)arg2 ;
@end

