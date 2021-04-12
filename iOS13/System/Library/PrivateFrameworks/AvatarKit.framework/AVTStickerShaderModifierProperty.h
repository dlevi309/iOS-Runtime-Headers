/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, SCNMaterialProperty;

@interface AVTStickerShaderModifierProperty : NSObject {

	NSString* _name;
	NSString* _type;
	id _value;
	SCNMaterialProperty* _materialProperty;

}

@property (nonatomic,readonly) SCNMaterialProperty * materialProperty;              //@synthesize materialProperty=_materialProperty - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                                            //@synthesize value=_value - In the implementation block
+(id)shaderModifierPropertyCache;
+(id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
-(NSString *)name;
-(NSString *)type;
-(id)value;
-(id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(SCNMaterialProperty *)materialProperty;
@end

