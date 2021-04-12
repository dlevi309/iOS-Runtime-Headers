/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol FigScreenCaptureFrameHandlerDelegate;
#import <MediaToolbox/MediaToolbox-Structs.h>
@interface FigScreenCaptureController : NSObject {

	id<FigScreenCaptureFrameHandlerDelegate> _delegateWeak;
	OpaqueFigVirtualDisplaySessionRef _session;
	OpaqueFigSimpleMutexRef _lock;
	CGSize _size;
	SCD_Struct_Fi7 _minIntervalBetweenFrames;

}

@property (assign,nonatomic) OpaqueFigVirtualDisplaySessionRef session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) OpaqueFigSimpleMutexRef lock;                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi7 minIntervalBetweenFrames;                               //@synthesize minIntervalBetweenFrames=_minIntervalBetweenFrames - In the implementation block
@property (assign,nonatomic,__weak) id<FigScreenCaptureFrameHandlerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
+(id)screenCaptureControllerWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi7)arg2 ;
-(void)dealloc;
-(id<FigScreenCaptureFrameHandlerDelegate>)delegate;
-(void)setDelegate:(id<FigScreenCaptureFrameHandlerDelegate>)arg1 ;
-(OpaqueFigSimpleMutexRef)lock;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(OpaqueFigVirtualDisplaySessionRef)session;
-(void)setSession:(OpaqueFigVirtualDisplaySessionRef)arg1 ;
-(void)setLock:(OpaqueFigSimpleMutexRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi7)arg2 ;
-(void)stopCapture;
-(void)didReceiveSampleBuffer:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 destRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(void)startCapture;
-(SCD_Struct_Fi7)minIntervalBetweenFrames;
-(void)setMinIntervalBetweenFrames:(SCD_Struct_Fi7)arg1 ;
@end

