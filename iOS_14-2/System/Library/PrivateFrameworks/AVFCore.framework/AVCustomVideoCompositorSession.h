/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue, AVVideoCompositing;
#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary, AVWeakReference, NSObject, AVVideoComposition, NSError, AVVideoCompositionRenderContext;

@interface AVCustomVideoCompositorSession : NSObject {

	OpaqueFigVideoCompositorRef _figCustomCompositor;
	BOOL _hasRegisteredFigCustomCompositorCallbacks;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	AVWeakReference* _weakSelf;
	void* _callbackContextToken;
	NSObject*<OS_dispatch_queue> _videoCompositionQ;
	AVVideoComposition* _videoComposition;
	BOOL _videoCompositionDidChange;
	NSObject*<OS_dispatch_queue> _clientCustomCompositorQ;
	id<AVVideoCompositing> _clientCustomCompositor;
	NSObject*<OS_dispatch_queue> _clientErrorQ;
	NSError* _clientError;
	NSObject*<OS_dispatch_queue> _renderContextQ;
	AVVideoCompositionRenderContext* _renderContext;
	NSObject*<OS_dispatch_queue> _finishedRequestQ;

}

@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
+(id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2 ;
+(BOOL)_colorPropertiesAreSetInVideoComposition:(id)arg1 ;
-(OpaqueFigVideoCompositorRef)_copyFigVideoCompositor;
-(BOOL)supportsHDRSourceFrames;
-(BOOL)supportsWideColorSourceFrames;
-(id)initWithVideoComposition:(id)arg1 ;
-(int)_setupFigCallbacks;
-(BOOL)_validateSourcePixelBufferAttributes:(id)arg1 andReturnException:(id*)arg2 ;
-(void)_cleanupFigCallbacks;
-(BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)arg1 andReturnException:(id*)arg2 ;
-(void)compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 didFinishWithComposedPixelBuffer:(CVBufferRef)arg2 ;
-(void)compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 didFinishWithError:(id)arg2 ;
-(void)compositionFrameDidCancel:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(int)_compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 atTime:(SCD_Struct_AV6)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4 ;
-(int)_customCompositorShouldAnticipateRenderingFromTime:(SCD_Struct_AV6)arg1 toTime:(SCD_Struct_AV6)arg2 andThenFromTime:(SCD_Struct_AV6)arg3 toTime:(SCD_Struct_AV6)arg4 ;
-(int)_customCompositorShouldPrerollForRenderingFromTime:(SCD_Struct_AV6)arg1 toTime:(SCD_Struct_AV6)arg2 andThenFromTime:(SCD_Struct_AV6)arg3 toTime:(SCD_Struct_AV6)arg4 requestID:(long long)arg5 ;
-(int)_customCompositorShouldCancelPendingFrames;
-(void)_customCompositorFigPropertyDidChange;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(void)_willDeallocOrFinalize;
-(BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(id*)arg1 ;
-(void)detachVideoComposition;
-(id)getAndClearClientError;
-(void)dealloc;
@end

