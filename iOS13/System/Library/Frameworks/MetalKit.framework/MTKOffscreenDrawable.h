/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/MTLDrawable.h>

@protocol MTLTexture, MTLDevice;
@class CAMetalLayer, NSString;

@interface MTKOffscreenDrawable : NSObject <MTLDrawable> {

	id<MTLTexture> _texture;
	unsigned long long _pixelFormat;
	CGSize _size;
	BOOL _textureDirty;
	CAMetalLayer* _layer;
	double _presentedTime;
	unsigned long long _drawableID;
	id<MTLDevice> _device;

}

@property (readonly) CAMetalLayer * layer;                                 //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) double presentedTime;                       //@synthesize presentedTime=_presentedTime - In the implementation block
@property (nonatomic,readonly) unsigned long long drawableID;              //@synthesize drawableID=_drawableID - In the implementation block
@property (nonatomic,retain) id<MTLDevice> device;                         //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(id<MTLDevice>)device;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(id)texture;
-(CAMetalLayer *)layer;
-(void)present;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)presentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(double)presentedTime;
-(unsigned long long)drawableID;
-(id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(CGSize)arg3 drawableID:(unsigned long long)arg4 ;
@end

