/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXCapturePreviewFrameStats, PVTaskToken;

@interface JFXMattingPerfState : NSObject {

	JFXCapturePreviewFrameStats* _captureFrameStats;
	PVTaskToken* _signpostToken;

}

@property (nonatomic,readonly) JFXCapturePreviewFrameStats * captureFrameStats;              //@synthesize captureFrameStats=_captureFrameStats - In the implementation block
@property (nonatomic,readonly) PVTaskToken * signpostToken;                                  //@synthesize signpostToken=_signpostToken - In the implementation block
+(CGSize)mattingDepthInputSize;
-(PVTaskToken *)signpostToken;
-(JFXCapturePreviewFrameStats *)captureFrameStats;
-(id)initWithStats:(id)arg1 signpostToken:(id)arg2 ;
@end

