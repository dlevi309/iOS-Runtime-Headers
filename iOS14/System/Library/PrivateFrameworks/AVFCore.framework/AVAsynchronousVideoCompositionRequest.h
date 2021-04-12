/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {

	AVAsynchronousVideoCompositionRequestInternal* _internal;

}

@property (nonatomic,readonly) AVVideoCompositionRenderContext * renderContext; 
@property (nonatomic,readonly) SCD_Struct_AV6 compositionTime; 
@property (nonatomic,readonly) NSArray * sourceTrackIDs; 
@property (nonatomic,readonly) id<AVVideoCompositionInstruction> videoCompositionInstruction; 
-(id<AVVideoCompositionInstruction>)videoCompositionInstruction;
-(SCD_Struct_AV6)compositionTime;
-(void)finishWithComposedVideoFrame:(CVBufferRef)arg1 ;
-(void)finishCancelledRequest;
-(NSArray *)sourceTrackIDs;
-(CVBufferRef)sourceFrameByTrackID:(int)arg1 ;
-(id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg3 atTime:(SCD_Struct_AV6)arg4 usingSources:(id)arg5 instruction:(id)arg6 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(AVVideoCompositionRenderContext *)renderContext;
-(void)finishWithError:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

