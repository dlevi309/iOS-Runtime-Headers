/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigCameraViewfinderSession, FigDelegateStorage;

@interface FigCameraViewfinder : NSObject {

	FigCameraViewfinderSession* _delegateActiveViewfinderSession;
	FigDelegateStorage* _delegateStorage;

}

@property (nonatomic,retain) FigCameraViewfinderSession * delegateActiveViewfinderSession;                      //@synthesize delegateActiveViewfinderSession=_delegateActiveViewfinderSession - In the implementation block
@property (readonly) id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
+(id)cameraViewfinder;
-(id)init;
-(id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startWithOptions:(id)arg1 ;
-(FigCameraViewfinderSession *)delegateActiveViewfinderSession;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegateActiveViewfinderSession:(FigCameraViewfinderSession *)arg1 ;
-(void)dealloc;
@end

