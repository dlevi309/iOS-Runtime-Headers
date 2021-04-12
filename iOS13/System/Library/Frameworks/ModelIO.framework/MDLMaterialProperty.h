/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MDLTextureSampler, MDLMaterialPropertyNode;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying> {

	NSString* _string;
	NSString* _name;
	NSURL* _url;
	MDLTextureSampler* _textureSampler;
	 _float;
	SCD_Struct_MD1 _matrix;
	CGColorRef _color;
	unsigned long long _semantic;
	MDLMaterialPropertyNode* _node;
	MDLMaterialProperty* _overrider;
	MDLMaterialProperty* _overridee;
	BOOL _isDefaultValue;
	unsigned long long _type;
	SCD_Struct_MD1 _matrix4x4;

}

@property (assign,nonatomic) BOOL isDefaultValue;                                  //@synthesize isDefaultValue=_isDefaultValue - In the implementation block
@property (assign,nonatomic) unsigned long long semantic; 
@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * URLValue; 
@property (nonatomic,retain) MDLTextureSampler * textureSamplerValue; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  float2Value; 
@property (assign,nonatomic)  float3Value; 
@property (assign,nonatomic)  float4Value; 
@property (assign,nonatomic) SCD_Struct_MD1 matrix4x4;                             //@synthesize matrix4x4=_matrix4x4 - In the implementation block
@property (assign,nonatomic) float luminance; 
-(float)floatValue;
-(void)dealloc;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)stringValue;
-(void)setName:(NSString *)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setProperties:(id)arg1 ;
-(unsigned long long)semantic;
-(void)setSemantic:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(SCD_Struct_MD1)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(CGColorRef)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-()float2Value;
-()float3Value;
-()float4Value;
-(SCD_Struct_MD1)matrix4x4;
-(float)luminance;
-(void)setFloatValue:(float)arg1 ;
-(NSURL *)URLValue;
-(MDLTextureSampler *)textureSamplerValue;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(void)setURLValue:(NSURL *)arg1 ;
-(void)setTextureSamplerValue:(MDLTextureSampler *)arg1 ;
-(void)setLuminance:(float)arg1 ;
-(void)setFloat2Value:;
-(void)setFloat3Value:;
-(void)setFloat4Value:;
-(void)setMatrix4x4Value:(SCD_Struct_MD1)arg1 ;
-(void)setMatrix4x4:(SCD_Struct_MD1)arg1 ;
-(BOOL)isDefaultValue;
-(void)setIsDefaultValue:(BOOL)arg1 ;
@end

