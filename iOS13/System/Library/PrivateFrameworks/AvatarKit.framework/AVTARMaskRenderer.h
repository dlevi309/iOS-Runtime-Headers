/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol MTLLibrary, MTLDevice, MTLTexture, MTLRenderPipelineState;
#import <AvatarKit/AvatarKit-Structs.h>
@class MTLRenderPassDescriptor, SCNNode;

@interface AVTARMaskRenderer : NSObject {

	id<MTLLibrary> _library;
	id<MTLDevice> _device;
	id<MTLTexture> _capturedDepth;
	id<MTLTexture> _lastRawDepthTexture;
	BOOL _writeID;
	id<MTLTexture> _rawMaskTexture[2];
	id<MTLTexture> _tmpMaskBlurTexture;
	id<MTLRenderPipelineState> _dbgCamDepthPipeline;
	id<MTLRenderPipelineState> _maskPipeline;
	id<MTLRenderPipelineState> _blurMaskPipeline[2];
	MTLRenderPassDescriptor* _renderPassDescriptor;
	CGSize _renderSize;
	BOOL _debugMode;
	BOOL _flipDepth;
	float _headZ;
	float _smoothDepth;
	long long _orientation;
	SCNNode* _pointOfView;

}

@property (nonatomic,retain) SCNNode * pointOfView;              //@synthesize pointOfView=_pointOfView - In the implementation block
@property (assign,nonatomic) float headZ;                        //@synthesize headZ=_headZ - In the implementation block
@property (assign,nonatomic) BOOL flipDepth;                     //@synthesize flipDepth=_flipDepth - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float smoothDepth;                  //@synthesize smoothDepth=_smoothDepth - In the implementation block
@property (retain) id<MTLTexture> capturedDepth;                 //@synthesize capturedDepth=_capturedDepth - In the implementation block
+(id)renderer;
-(id)init;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)render:(id)arg1 ;
-(SCNNode *)pointOfView;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(void)reloadDepthShaders;
-(void)setup:(CGSize)arg1 context:(id)arg2 colorPixelFormat:(unsigned long long)arg3 ;
-(void)setFlipDepth:(BOOL)arg1 ;
-(id<MTLTexture>)capturedDepth;
-(void)setCapturedDepth:(id<MTLTexture>)arg1 ;
-(float)headZ;
-(void)setHeadZ:(float)arg1 ;
-(float)smoothDepth;
-(void)setSmoothDepth:(float)arg1 ;
-(BOOL)flipDepth;
@end

