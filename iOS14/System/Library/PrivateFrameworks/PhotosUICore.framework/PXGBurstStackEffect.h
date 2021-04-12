/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGEffect.h>

@interface PXGBurstStackEffect : PXGEffect

@property (assign,nonatomic) long long numberOfItemsStackedBehind; 
+(id)createSiblingsTextureForMainSpriteTexture:(id)arg1 ;
+(void)configureSiblingSprites:(SCD_Struct_PX84*)arg1 siblingsSpriteIndexRange:(PXGSpriteIndexRange)arg2 siblingsTexture:(id)arg3 forMainRenderSpriteRef:(SCD_Struct_PX85*)arg4 mainPresentationSpriteRef:(SCD_Struct_PX85*)arg5 mainSpriteIndex:(unsigned)arg6 mainSpriteTexture:(id)arg7 effectData:(const SCD_Struct_PX54*)arg8 screenScale:(double)arg9 ;
-(unsigned short)type;
-(void)setNumberOfItemsStackedBehind:(long long)arg1 ;
-(long long)numberOfItemsStackedBehind;
-(id)initWithMetadataStore:(id)arg1 ;
@end

