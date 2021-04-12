/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGSpriteMetadataStore;

@interface PXGEffect : NSObject {

	PXGSpriteMetadataStore* _metadataStore;
	unsigned short _effectId;

}

@property (assign,nonatomic) unsigned long long numberOfSiblingSprites; 
@property (assign,nonatomic) float value1; 
@property (assign,nonatomic) float value2; 
@property (assign,nonatomic) float value3; 
@property (assign,nonatomic) float value4; 
@property (assign,nonatomic) float value5; 
@property (assign,nonatomic) float value6; 
@property (assign,nonatomic) float value7; 
@property (assign,nonatomic) float value8; 
@property (nonatomic,readonly) unsigned short effectId;                              //@synthesize effectId=_effectId - In the implementation block
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) int shaderFlags; 
+(id)createSiblingsTextureForMainSpriteTexture:(id)arg1 ;
+(unsigned short)type;
+(Class)effectClassForType:(unsigned short)arg1 ;
+(id)createEffectForLayout:(id)arg1 ;
+(void)configureSiblingSprites:(SCD_Struct_PX84*)arg1 siblingsSpriteIndexRange:(PXGSpriteIndexRange)arg2 siblingsTexture:(id)arg3 forMainRenderSpriteRef:(SCD_Struct_PX85*)arg4 mainPresentationSpriteRef:(SCD_Struct_PX85*)arg5 mainSpriteIndex:(unsigned)arg6 mainSpriteTexture:(id)arg7 effectData:(const SCD_Struct_PX54*)arg8 screenScale:(double)arg9 ;
-(float)value6;
-(float)value3;
-(id)init;
-(float)value1;
-(float)value2;
-(float)value5;
-(float)value4;
-(float)value7;
-(float)value8;
-(unsigned short)effectId;
-(id)description;
-(void)setValue2:(float)arg1 ;
-(unsigned short)type;
-(void)setValue7:(float)arg1 ;
-(void)setValue6:(float)arg1 ;
-(void)setValue5:(float)arg1 ;
-(void)setValue4:(float)arg1 ;
-(void)setValue1:(float)arg1 ;
-(unsigned long long)numberOfSiblingSprites;
-(void)setNumberOfSiblingSprites:(unsigned long long)arg1 ;
-(void)setValue8:(float)arg1 ;
-(int)shaderFlags;
-(id)initWithMetadataStore:(id)arg1 ;
-(void)setValue3:(float)arg1 ;
-(void)dealloc;
@end

