/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@protocol MTLTexture;
@class AVPlayer, AVPlayerItemVideoOutput;

@interface SCNAVPlayerSource : SCNTextureSource {

	AVPlayer* _player;
	AVPlayerItemVideoOutput* _videoOutput;
	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	unsigned long long _texturePixelFormat;
	unsigned char _videoSourceFormat;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,retain) AVPlayer * player; 
-(id)init;
-(void)dealloc;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)registerPlayer:(id)arg1 ;
-(void)unregisterPlayer:(id)arg1 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(void)setVideoSourceFormat:(unsigned char)arg1 ;
-(void)discardVideoData;
@end

