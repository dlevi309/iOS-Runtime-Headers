/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate>)delegate;
-(void)stop;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startWithOptions:(id)arg1 ;
-(FigCameraViewfinderSession *)delegateActiveViewfinderSession;
-(void)setDelegateActiveViewfinderSession:(FigCameraViewfinderSession *)arg1 ;
@end

