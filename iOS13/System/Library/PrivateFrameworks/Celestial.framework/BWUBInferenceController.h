/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>

@class BWInferenceScheduler, BWInferenceEngine, BWVideoFormat, NSDictionary, NSArray, NSString;

@interface BWUBInferenceController : BWStillImageProcessorController <BWInferenceFormatProvider> {

	BWInferenceScheduler* _inferenceScheduler;
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
+(CVBufferRef)lowResPersonSegmentationMaskFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
+(id)faceObservationsFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
+(id)faceLandmarksObservationsFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(void)cancelProcessing;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(NSArray *)providedAttachedMediaKeys;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(int)prepareWithPixelBufferPoolProvider:(id)arg1 ;
-(void)_releaseResources;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(int)_configureInferenceWithConfiguration:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
@end

