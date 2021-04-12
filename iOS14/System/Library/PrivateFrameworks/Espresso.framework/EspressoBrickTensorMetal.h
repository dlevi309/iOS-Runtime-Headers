/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/EspressoBrickTensor.h>

@protocol MTLTexture;
@interface EspressoBrickTensorMetal : EspressoBrickTensor {

	id<MTLTexture> _texture;

}

@property (retain) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(id<MTLTexture>)texture;
-(void)setTexture:(id<MTLTexture>)arg1 ;
@end

