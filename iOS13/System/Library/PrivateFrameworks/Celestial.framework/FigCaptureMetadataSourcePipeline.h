/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourcePipeline.h>

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
-(void)dealloc;
-(void)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(BWNodeOutput *)output;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 errorOut:(int*)arg4 ;
-(int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2 ;
@end

