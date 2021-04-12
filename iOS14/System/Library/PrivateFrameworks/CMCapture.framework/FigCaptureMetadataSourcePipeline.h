/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class BWNode, BWSynchronizerNode, BWNodeOutput;

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {

	BWNode* _sourceNode;
	BWSynchronizerNode* _synchronizerNode;
	OpaqueCMClockRef _masterClock;

}

@property (assign,nonatomic) OpaqueCMClockRef masterClock;                                        //@synthesize masterClock=_masterClock - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatDescription; 
@property (nonatomic,readonly) BWNodeOutput * output; 
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(BWNodeOutput *)output;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 errorOut:(int*)arg4 ;
-(void)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(void)dealloc;
@end

