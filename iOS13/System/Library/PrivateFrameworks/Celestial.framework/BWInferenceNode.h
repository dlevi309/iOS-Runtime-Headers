/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>
#import <libobjc.A.dylib/BWInferencePixelBufferPoolProvider.h>

@class BWInferenceEngine, BWFigVideoCaptureDevice, NSString;

@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {

	BWInferenceEngine* _inferenceEngine;
	BWFigVideoCaptureDevice* _captureDevice;

}

@property (nonatomic,readonly) BWInferenceEngine * inferenceEngine;              //@synthesize inferenceEngine=_inferenceEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(NSString *)description;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW94)arg2 configuration:(id)arg3 ;
-(void)willEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW94)arg2 ;
-(BWInferenceEngine *)inferenceEngine;
@end

