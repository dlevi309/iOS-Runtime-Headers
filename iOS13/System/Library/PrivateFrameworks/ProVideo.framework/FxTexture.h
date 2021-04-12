/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxTexture : FxImage <NSCopying> {

	FxTexturePriv* _texturePriv;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(void)setData:(void*)arg1 ;
-(void)disable;
-(void)enable;
-(void)draw;
-(void)bind;
-(BOOL)_verifyImage;
-(unsigned)textureId;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 textureId:(unsigned)arg2 andTarget:(unsigned)arg3 ;
-(BOOL)isInputImage;
-(void)setTextureId:(unsigned)arg1 ;
-(void)setIsInputImage:(BOOL)arg1 ;
-(void*)createData:(unsigned)arg1 withType:(unsigned)arg2 ;
-(void)setAsActiveTexture;
-(void)getTextureCoords:(double*)arg1 right:(double*)arg2 bottom:(double*)arg3 top:(double*)arg4 ;
@end

