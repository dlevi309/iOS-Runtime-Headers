/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {

	AVAsynchronousVideoCompositionRequestInternal* _internal;

}

@property (nonatomic,readonly) AVVideoCompositionRenderContext * renderContext; 
@property (nonatomic,readonly) SCD_Struct_AV7 compositionTime; 
@property (nonatomic,readonly) NSArray * sourceTrackIDs; 
@property (nonatomic,readonly) id<AVVideoCompositionInstruction> videoCompositionInstruction; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(AVVideoCompositionRenderContext *)renderContext;
-(id<AVVideoCompositionInstruction>)videoCompositionInstruction;
-(void)_willDeallocOrFinalize;
-(SCD_Struct_AV7)compositionTime;
-(void)finishWithComposedVideoFrame:(CVBufferRef)arg1 ;
-(void)finishCancelledRequest;
-(NSArray *)sourceTrackIDs;
-(CVBufferRef)sourceFrameByTrackID:(int)arg1 ;
-(id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg3 atTime:(SCD_Struct_AV7)arg4 usingSources:(id)arg5 instruction:(id)arg6 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
@end

