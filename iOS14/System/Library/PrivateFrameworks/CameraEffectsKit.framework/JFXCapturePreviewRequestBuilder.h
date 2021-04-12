/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSObject, JFXCapturePreviewProperties;

@interface JFXCapturePreviewRequestBuilder : NSObject {

	NSObject*<OS_dispatch_queue> _selfieBGLoadQ;
	BOOL _logged_render_request_failure_animoji;
	BOOL _logged_render_request_failure_facetracking;
	JFXCapturePreviewProperties* _previewProperties;
	PVTransformAnimationInfo _requestTransformAnimation;

}

@property (nonatomic,readonly) JFXCapturePreviewProperties * previewProperties;               //@synthesize previewProperties=_previewProperties - In the implementation block
@property (assign,nonatomic) PVTransformAnimationInfo requestTransformAnimation;              //@synthesize requestTransformAnimation=_requestTransformAnimation - In the implementation block
-(JFXCapturePreviewProperties *)previewProperties;
-(id)JFX_getEffectsOfType:(id)arg1 ofType:(int)arg2 ;
-(id)JFX_visibleEffects:(id)arg1 ;
-(PVTransformAnimationInfo)requestTransformAnimation;
-(id)initWithPreviewProperties:(id)arg1 ;
-(id)createPVRenderRequestUsingAnimojiRenderer:(id)arg1 metadataValidator:(id)arg2 additionalTransform:(CGAffineTransform)arg3 effectStack:(id)arg4 animojiTapPoint:(BOOL)arg5 requestHandler:(id*)arg6 ;
-(void)setRequestTransformAnimation:(PVTransformAnimationInfo)arg1 ;
@end

