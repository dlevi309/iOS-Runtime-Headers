/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxTexture : FxImage <NSCopying> {

	FxTexturePriv* _texturePriv;

}
-(void)disable;
-(void)enable;
-(void)setTarget:(unsigned)arg1 ;
-(id)init;
-(void)bind;
-(void)setData:(void*)arg1 ;
-(void)draw;
-(unsigned)target;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)_verifyImage;
-(unsigned)textureId;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 textureId:(unsigned)arg2 andTarget:(unsigned)arg3 ;
-(BOOL)isInputImage;
-(void)setTextureId:(unsigned)arg1 ;
-(void)setIsInputImage:(BOOL)arg1 ;
-(void*)createData:(unsigned)arg1 withType:(unsigned)arg2 ;
-(void)setAsActiveTexture;
-(void)getTextureCoords:(double*)arg1 right:(double*)arg2 bottom:(double*)arg3 top:(double*)arg4 ;
@end

