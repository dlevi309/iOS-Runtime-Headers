/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerDelegate.h>

@protocol CFXRendererDelegate;
@class JTPixelRotationSession, PVLivePlayer, PVLivePlayerCameraSource, CFXAnimojiEffectRenderer, CFXFaceTrackingRenderer, JTFrameRateCalculator, NSString;

@interface CFXRenderer : NSObject <PVLivePlayerDelegate> {

	BOOL _logged_render_request_failure_animoji;
	BOOL _logged_render_request_failure_facetracking;
	long long _captureMode;
	long long _cameraMode;
	JTPixelRotationSession* _pixelRotationSession;
	id<CFXRendererDelegate> _delegate;
	PVLivePlayer* _livePlayer;
	PVLivePlayerCameraSource* _cameraSource;
	CFXAnimojiEffectRenderer* _animojiRenderer;
	CFXFaceTrackingRenderer* _faceTrackingRenderer;
	JTFrameRateCalculator* _fpsCalc;

}

@property (assign,nonatomic) long long captureMode;                                       //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,readonly) long long cameraMode;                                      //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,retain) JTPixelRotationSession * pixelRotationSession;               //@synthesize pixelRotationSession=_pixelRotationSession - In the implementation block
@property (assign,nonatomic,__weak) id<CFXRendererDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PVLivePlayer * livePlayer;                                   //@synthesize livePlayer=_livePlayer - In the implementation block
@property (nonatomic,readonly) BOOL livePlayerIsSaturated; 
@property (nonatomic,retain) PVLivePlayerCameraSource * cameraSource;                     //@synthesize cameraSource=_cameraSource - In the implementation block
@property (nonatomic,retain) CFXAnimojiEffectRenderer * animojiRenderer;                  //@synthesize animojiRenderer=_animojiRenderer - In the implementation block
@property (nonatomic,retain) CFXFaceTrackingRenderer * faceTrackingRenderer;              //@synthesize faceTrackingRenderer=_faceTrackingRenderer - In the implementation block
@property (nonatomic,readonly) JTFrameRateCalculator * fpsCalc;                           //@synthesize fpsCalc=_fpsCalc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id<CFXRendererDelegate>)delegate;
-(void)setDelegate:(id<CFXRendererDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(void)flush;
-(void)shutdown;
-(long long)cameraMode;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setCameraSource:(PVLivePlayerCameraSource *)arg1 ;
-(PVLivePlayerCameraSource *)cameraSource;
-(long long)captureMode;
-(id)initWithDelegate:(id)arg1 captureMode:(long long)arg2 ;
-(BOOL)livePlayerIsSaturated;
-(void)willDropCameraFrame;
-(void)renderFrame:(id)arg1 effectComposition:(id)arg2 ;
-(JTFrameRateCalculator *)fpsCalc;
-(CFXFaceTrackingRenderer *)faceTrackingRenderer;
-(CFXAnimojiEffectRenderer *)animojiRenderer;
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JT6)arg2 ;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3 ;
-(void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(SCD_Struct_JT6)arg3 ;
-(JTPixelRotationSession *)pixelRotationSession;
-(void)setPixelRotationSession:(JTPixelRotationSession *)arg1 ;
-(PVLivePlayer *)livePlayer;
-(id)CFX_PVFrameSetFromCFXFrame:(id)arg1 ;
-(id)CFX_JTEffectsFromCFXEffectComposition:(id)arg1 forRenderTime:(SCD_Struct_JT6)arg2 ;
-(void)setLivePlayer:(PVLivePlayer *)arg1 ;
-(void)setAnimojiRenderer:(CFXAnimojiEffectRenderer *)arg1 ;
-(void)setFaceTrackingRenderer:(CFXFaceTrackingRenderer *)arg1 ;
@end

