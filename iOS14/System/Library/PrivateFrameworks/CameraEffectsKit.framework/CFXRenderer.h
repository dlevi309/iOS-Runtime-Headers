/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerDelegate.h>

@protocol CFXRendererDelegate;
@class JFXPixelRotationSession, JFXMetadataValidator, PVLivePlayer, PVLivePlayerCameraSource, JFXAnimojiEffectRenderer, JTFrameRateCalculator, NSString;

@interface CFXRenderer : NSObject <PVLivePlayerDelegate> {

	long long _captureMode;
	long long _cameraMode;
	JFXPixelRotationSession* _pixelRotationSession;
	JFXMetadataValidator* _metadataValidator;
	id<CFXRendererDelegate> _delegate;
	PVLivePlayer* _livePlayer;
	PVLivePlayerCameraSource* _cameraSource;
	JFXAnimojiEffectRenderer* _animojiRenderer;
	JTFrameRateCalculator* _fpsCalc;

}

@property (assign,nonatomic) long long captureMode;                                       //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,readonly) long long cameraMode;                                      //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,retain) JFXPixelRotationSession * pixelRotationSession;              //@synthesize pixelRotationSession=_pixelRotationSession - In the implementation block
@property (nonatomic,retain) JFXMetadataValidator * metadataValidator;                    //@synthesize metadataValidator=_metadataValidator - In the implementation block
@property (assign,nonatomic,__weak) id<CFXRendererDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PVLivePlayer * livePlayer;                                   //@synthesize livePlayer=_livePlayer - In the implementation block
@property (nonatomic,readonly) BOOL livePlayerIsSaturated; 
@property (nonatomic,retain) PVLivePlayerCameraSource * cameraSource;                     //@synthesize cameraSource=_cameraSource - In the implementation block
@property (nonatomic,retain) JFXAnimojiEffectRenderer * animojiRenderer;                  //@synthesize animojiRenderer=_animojiRenderer - In the implementation block
@property (nonatomic,readonly) JTFrameRateCalculator * fpsCalc;                           //@synthesize fpsCalc=_fpsCalc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)flush;
-(long long)captureMode;
-(void)shutdown;
-(id<CFXRendererDelegate>)delegate;
-(void)pause;
-(void)setDelegate:(id<CFXRendererDelegate>)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(JTFrameRateCalculator *)fpsCalc;
-(void)resume;
-(PVLivePlayerCameraSource *)cameraSource;
-(void)setCameraSource:(PVLivePlayerCameraSource *)arg1 ;
-(void)dealloc;
-(long long)cameraMode;
-(id)initWithDelegate:(id)arg1 captureMode:(long long)arg2 ;
-(JFXMetadataValidator *)metadataValidator;
-(BOOL)livePlayerIsSaturated;
-(void)willDropCameraFrame;
-(void)setMetadataValidator:(JFXMetadataValidator *)arg1 ;
-(void)renderFrame:(id)arg1 effectComposition:(id)arg2 ;
-(JFXAnimojiEffectRenderer *)animojiRenderer;
-(void)resetMetadataValidation;
-(void)setAnimojiRenderer:(JFXAnimojiEffectRenderer *)arg1 ;
-(id)CFX_getPreviewColorSpace;
-(PVLivePlayer *)livePlayer;
-(id)CFX_PVFrameSetFromCFXFrame:(id)arg1 ;
-(id)CFX_JTEffectsFromCFXEffectComposition:(id)arg1 forRenderTime:(SCD_Struct_JF3)arg2 ;
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JF3)arg2 ;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3 ;
-(void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(SCD_Struct_JF3)arg3 ;
-(JFXPixelRotationSession *)pixelRotationSession;
-(void)setPixelRotationSession:(JFXPixelRotationSession *)arg1 ;
-(void)setLivePlayer:(PVLivePlayer *)arg1 ;
@end

