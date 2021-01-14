/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>
#import <libobjc.A.dylib/BWInferencePixelBufferPoolProvider.h>

@class BWInferenceEngine, BWFigVideoCaptureDevice, NSString;

@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {

	BWInferenceEngine* _inferenceEngine;
	BWFigVideoCaptureDevice* _captureDevice;
	BOOL _awaitAsynchronousOutputs;

}

@property (nonatomic,readonly) BWInferenceEngine * inferenceEngine;              //@synthesize inferenceEngine=_inferenceEngine - In the implementation block
@property (assign,nonatomic) BOOL awaitAsynchronousOutputs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)nodeType;
-(id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)nodeSubType;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(NSString *)description;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW57)arg2 configuration:(id)arg3 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)willEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BWInferenceEngine *)inferenceEngine;
-(BOOL)awaitAsynchronousOutputs;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW57)arg2 ;
-(void)setAwaitAsynchronousOutputs:(BOOL)arg1 ;
-(void)dealloc;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
@end

