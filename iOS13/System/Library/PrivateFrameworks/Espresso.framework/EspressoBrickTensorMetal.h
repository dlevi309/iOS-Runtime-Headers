/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/EspressoBrickTensor.h>

@protocol MTLTexture;
@interface EspressoBrickTensorMetal : EspressoBrickTensor {

	id<MTLTexture> _texture;

}

@property (retain) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)texture;
@end

