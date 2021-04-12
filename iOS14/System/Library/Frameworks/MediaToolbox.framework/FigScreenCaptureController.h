/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol FigScreenCaptureFrameHandlerDelegate;
#import <MediaToolbox/MediaToolbox-Structs.h>
@interface FigScreenCaptureController : NSObject {

	id<FigScreenCaptureFrameHandlerDelegate> _delegateWeak;
	OpaqueFigVirtualDisplaySessionRef _session;
	OpaqueFigSimpleMutexRef _lock;
	CGSize _size;
	SCD_Struct_Fi11 _minIntervalBetweenFrames;

}

@property (assign,nonatomic) OpaqueFigVirtualDisplaySessionRef session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) OpaqueFigSimpleMutexRef lock;                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi11 minIntervalBetweenFrames;                              //@synthesize minIntervalBetweenFrames=_minIntervalBetweenFrames - In the implementation block
@property (assign,nonatomic,__weak) id<FigScreenCaptureFrameHandlerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
+(id)screenCaptureControllerWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi11)arg2 ;
-(id<FigScreenCaptureFrameHandlerDelegate>)delegate;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(OpaqueFigSimpleMutexRef)lock;
-(OpaqueFigVirtualDisplaySessionRef)session;
-(void)setDelegate:(id<FigScreenCaptureFrameHandlerDelegate>)arg1 ;
-(void)startCapture;
-(id)initWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi11)arg2 ;
-(void)didReceiveSampleBuffer:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 destRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(SCD_Struct_Fi11)minIntervalBetweenFrames;
-(void)setMinIntervalBetweenFrames:(SCD_Struct_Fi11)arg1 ;
-(void)setLock:(OpaqueFigSimpleMutexRef)arg1 ;
-(void)setSession:(OpaqueFigVirtualDisplaySessionRef)arg1 ;
-(void)stopCapture;
-(void)dealloc;
@end

