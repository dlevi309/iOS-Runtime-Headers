/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXFaceTrackedEffectTransform, JFXARMetadata;

@interface JFXFaceTrackingPlaybackProperties : NSObject {

	BOOL _canTrackFace;
	JFXFaceTrackedEffectTransform* _faceTrackingTransform;
	JFXARMetadata* _arMetadata;
	long long _mediaInterfaceOrientationForDisplay;
	SCD_Struct_JF4 _mediaTimeRange;

}

@property (nonatomic,readonly) BOOL canTrackFace;                                                  //@synthesize canTrackFace=_canTrackFace - In the implementation block
@property (nonatomic,readonly) JFXFaceTrackedEffectTransform * faceTrackingTransform;              //@synthesize faceTrackingTransform=_faceTrackingTransform - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 mediaTimeRange;                                      //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
@property (nonatomic,readonly) JFXARMetadata * arMetadata;                                         //@synthesize arMetadata=_arMetadata - In the implementation block
@property (nonatomic,readonly) long long mediaInterfaceOrientationForDisplay;                      //@synthesize mediaInterfaceOrientationForDisplay=_mediaInterfaceOrientationForDisplay - In the implementation block
-(SCD_Struct_JF4)mediaTimeRange;
-(BOOL)canTrackFace;
-(long long)mediaInterfaceOrientationForDisplay;
-(id)initWithNonFaceTrackableMediaTimeRange:(SCD_Struct_JF4)arg1 ;
-(id)initWithFaceTrackableMediaTimeRange:(SCD_Struct_JF4)arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 faceTrackingTransform:(id)arg3 arMetadata:(id)arg4 ;
-(BOOL)containsMediaTime:(SCD_Struct_JF3)arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 ;
-(JFXFaceTrackedEffectTransform *)faceTrackingTransform;
-(JFXARMetadata *)arMetadata;
@end

