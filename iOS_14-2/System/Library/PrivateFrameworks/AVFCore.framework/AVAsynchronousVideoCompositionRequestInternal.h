/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVVideoCompositionInstruction;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVVideoCompositionRenderContext, NSDictionary, NSArray;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {

	AVWeakReference* _session;
	AVVideoCompositionRenderContext* _renderContext;
	OpaqueFigVideoCompositorFrameRef _compositionFrame;
	SCD_Struct_AV6 _compositionTime;
	NSDictionary* _sourcesByTrackID;
	NSArray* _sourceTrackIDsInClientOrder;
	id<AVVideoCompositionInstruction> _instruction;
	BOOL _isFinished;

}

@property (nonatomic,retain) AVWeakReference * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVVideoCompositionRenderContext * renderContext;                //@synthesize renderContext=_renderContext - In the implementation block
@property (assign,nonatomic) OpaqueFigVideoCompositorFrameRef compositionFrame;              //@synthesize compositionFrame=_compositionFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 compositionTime;                                 //@synthesize compositionTime=_compositionTime - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByTrackID;                                //@synthesize sourcesByTrackID=_sourcesByTrackID - In the implementation block
@property (nonatomic,retain) NSArray * sourceTrackIDsInClientOrder;                          //@synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder - In the implementation block
@property (nonatomic,retain) id<AVVideoCompositionInstruction> instruction;                  //@synthesize instruction=_instruction - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
-(AVWeakReference *)session;
-(BOOL)isFinished;
-(void)setSession:(AVWeakReference *)arg1 ;
-(SCD_Struct_AV6)compositionTime;
-(void)setCompositionTime:(SCD_Struct_AV6)arg1 ;
-(id<AVVideoCompositionInstruction>)instruction;
-(void)setRenderContext:(AVVideoCompositionRenderContext *)arg1 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(void)setCompositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(NSDictionary *)sourcesByTrackID;
-(void)setSourcesByTrackID:(NSDictionary *)arg1 ;
-(NSArray *)sourceTrackIDsInClientOrder;
-(void)setSourceTrackIDsInClientOrder:(NSArray *)arg1 ;
-(void)setInstruction:(id<AVVideoCompositionInstruction>)arg1 ;
-(AVVideoCompositionRenderContext *)renderContext;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)dealloc;
@end

