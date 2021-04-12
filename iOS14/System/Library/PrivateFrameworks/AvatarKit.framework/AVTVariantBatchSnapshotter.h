/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@protocol MTLCommandQueue;
@class AVTAvatar, AVTRenderer, MTLRenderPassDescriptor, NSString;

@interface AVTVariantBatchSnapshotter : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	AVTAvatar* _avatar;
	CGSize _size;
	double _scale;
	unsigned long long _antialiasingMode;
	AVTRenderer* _renderer;
	id<MTLCommandQueue> _commandQueue;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	CGContextRef _bitmapContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithAvatar:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 antialiasingMode:(unsigned long long)arg4 device:(id)arg5 ;
-(id)imageWithOptions:(id)arg1 modifications:(/*^block*/id)arg2 ;
@end

