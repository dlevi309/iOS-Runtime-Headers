/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>

@class BWInferenceEngine, BWVideoFormat, NSDictionary, NSArray, NSString;

@interface BWUBInferenceController : BWStillImageProcessorController <BWInferenceFormatProvider> {

	BOOL _inferenceEnginePrepared;
	BWInferenceEngine* _inferenceEngine;
	BWVideoFormat* _inputFormat;
	NSDictionary* _inferenceOutputFormatByAttachedMediaKey;

}

@property (nonatomic,readonly) NSArray * providedAttachedMediaKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(CVBufferRef)semanticSkinMatteFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
+(CVBufferRef)semanticSkyMatteFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
+(CVBufferRef)lowResPersonSegmentationMaskFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
+(id)faceObservationsFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(int)_configureInferenceWithConfiguration:(id)arg1 ;
-(unsigned long long)type;
-(NSArray *)providedAttachedMediaKeys;
-(int)prepareWithPixelBufferPoolProvider:(id)arg1 ;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)_releaseResources;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
@end

