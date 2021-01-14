/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_semaphore;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVFrameSet, PVTaskToken, JFXCapturePreviewFrameStats, JFXPerfTimer, NSDictionary, NSObject;

@interface JFXCapturePreviewProperties : NSObject {

	PVFrameSet* _cameraFrameSet;
	double _displayTimestamp;
	PVTaskToken* _signPostToken;
	JFXCapturePreviewFrameStats* _frameStats;
	JFXPerfTimer* _startFrameTimer;
	NSDictionary* _selfieBGBuffers;
	NSObject*<OS_dispatch_semaphore> _selfieBGBufferLoadSem;
	CGSize _renderOutputSize;
	CGSize _frameSize;
	SCD_Struct_JF3 _renderTime;

}

@property (nonatomic,readonly) PVFrameSet * cameraFrameSet;                                       //@synthesize cameraFrameSet=_cameraFrameSet - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 renderTime;                                         //@synthesize renderTime=_renderTime - In the implementation block
@property (nonatomic,readonly) CGSize renderOutputSize;                                           //@synthesize renderOutputSize=_renderOutputSize - In the implementation block
@property (nonatomic,readonly) CGSize frameSize;                                                  //@synthesize frameSize=_frameSize - In the implementation block
@property (nonatomic,readonly) double displayTimestamp;                                           //@synthesize displayTimestamp=_displayTimestamp - In the implementation block
@property (nonatomic,readonly) PVTaskToken * signPostToken;                                       //@synthesize signPostToken=_signPostToken - In the implementation block
@property (nonatomic,readonly) JFXCapturePreviewFrameStats * frameStats;                          //@synthesize frameStats=_frameStats - In the implementation block
@property (nonatomic,readonly) JFXPerfTimer * startFrameTimer;                                    //@synthesize startFrameTimer=_startFrameTimer - In the implementation block
@property (nonatomic,retain) NSDictionary * selfieBGBuffers;                                      //@synthesize selfieBGBuffers=_selfieBGBuffers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> selfieBGBufferLoadSem;              //@synthesize selfieBGBufferLoadSem=_selfieBGBufferLoadSem - In the implementation block
-(SCD_Struct_JF3)renderTime;
-(CGSize)frameSize;
-(id)initWithCameraFrameSet:(id)arg1 renderTime:(SCD_Struct_JF3)arg2 renderOutputSize:(CGSize)arg3 frameSize:(CGSize)arg4 signPostToken:(id)arg5 displayTimestamp:(double)arg6 frameStats:(id)arg7 startFrameTimer:(id)arg8 ;
-(id)initWithCameraFrameSet:(id)arg1 renderTime:(SCD_Struct_JF3)arg2 renderOutputSize:(CGSize)arg3 frameSize:(CGSize)arg4 ;
-(PVFrameSet *)cameraFrameSet;
-(CGSize)renderOutputSize;
-(double)displayTimestamp;
-(PVTaskToken *)signPostToken;
-(JFXCapturePreviewFrameStats *)frameStats;
-(JFXPerfTimer *)startFrameTimer;
-(NSDictionary *)selfieBGBuffers;
-(void)setSelfieBGBuffers:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)selfieBGBufferLoadSem;
-(void)setSelfieBGBufferLoadSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end
