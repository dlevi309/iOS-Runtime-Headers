/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, SCNMaterialProperty;

@interface AVTStickerShaderModifierProperty : NSObject {

	NSString* _name;
	NSString* _type;
	id _value;
	id _originalValue;
	SCNMaterialProperty* _materialProperty;

}

@property (nonatomic,retain) id originalValue;                                      //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) SCNMaterialProperty * materialProperty;              //@synthesize materialProperty=_materialProperty - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                                            //@synthesize value=_value - In the implementation block
+(id)shaderModifierPropertyCache;
+(id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
-(id)originalValue;
-(void)setOriginalValue:(id)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(id)value;
-(id)dictionaryWithTargetPath:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3 originalValue:(id)arg4 ;
-(SCNMaterialProperty *)materialProperty;
@end

