/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceResourceProvider.h>

@class BWInferenceScheduler, BWInferenceDependencyProvider, BWEspressoInferenceAdapter, BWEspressoInferenceContext, BWVisionInferenceAdapter, BWVisionInferenceContext, BWVideoProcessingInferenceAdapter, BWFigVideoCaptureDevice, NSMutableArray, NSMutableDictionary, NSMutableSet, NSDictionary, NSString;

@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider> {

	BWInferenceScheduler* _scheduler;
	unsigned long long _connection;
	unsigned _priority;
	BWInferenceDependencyProvider* _dependencyProvider;
	BWEspressoInferenceAdapter* _espressoAdapter;
	BWEspressoInferenceContext* _cpuContext;
	BWEspressoInferenceContext* _gpuContext;
	BWEspressoInferenceContext* _convContext;
	BWEspressoInferenceContext* _aneContext;
	BWVisionInferenceAdapter* _visionAdapter;
	BWVisionInferenceContext* _visionContext;
	BWVideoProcessingInferenceAdapter* _videoProcessingAdapter;
	BWFigVideoCaptureDevice* _captureDevice;
	OpaqueFigCaptureISPProcessingSessionRef _ispProcessingSession;
	NSMutableArray* _inferenceRequirements;
	NSMutableArray* _videoRequirementsPossiblyReceivingAttachedMedia;
	NSMutableArray* _videoRequirementsPossiblyProvidingAttachedMedia;
	NSMutableDictionary* _lazyInputVideoRequirementsByAttachedMediaKey;
	NSMutableDictionary* _lazyOutputVideoRequirementsByAttachedMediaKey;
	NSMutableDictionary* _scalingRequirementByVideoFormatByAttachedMediaKey;
	NSMutableSet* _unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
	BOOL _requiresDeviceOrientationMetadata;

}

@property (nonatomic,copy,readonly) NSDictionary * providedVideoRequirementsByAttachedMediaKey; 
@property (nonatomic,readonly) BOOL requiresDeviceOrientationMetadata;                                       //@synthesize requiresDeviceOrientationMetadata=_requiresDeviceOrientationMetadata - In the implementation block
@property (getter=isConfiguredForInference,nonatomic,readonly) BOOL configuredForInference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isNeuralEngineSupported;
+(BOOL)isConvolutionEngineSupported;
-(void)dealloc;
-(id)visionContextForExecutionTarget:(int)arg1 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW94)arg2 configuration:(id)arg3 ;
-(BOOL)isConfiguredForInference;
-(int)prewarmInferencesUsingLimitedMemory:(BOOL)arg1 ;
-(NSDictionary *)providedVideoRequirementsByAttachedMediaKey;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 shareIntermediateBuffer:(BOOL)arg4 ;
-(int)prepareForInputVideoFormat:(id)arg1 attachedMediaKey:(id)arg2 ;
-(int)performInferencesOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingResultsToSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(int)prepareForInferenceWithFormatProvider:(id)arg1 pixelBufferPoolProvider:(id)arg2 ;
-(BOOL)requiresDeviceOrientationMetadata;
-(int)prepareForInferenceWithFormatProvider:(id)arg1 ;
-(OpaqueFigCaptureISPProcessingSessionRef)ispProcessingSessionForExecutionTarget:(int)arg1 ;
-(void)_invalidateProcessingSessionIfNecessary;
-(void)_prepareProvidedVideoRequirementsIfNecessary;
-(void)_prepareDependenciesByRequirementIfNecessary;
-(int)_prepareProcessingSessionIfNecessary;
-(void)_addInferenceRequirementForProvider:(id)arg1 configuration:(id)arg2 ;
-(id)espressoContextForExecutionTarget:(int)arg1 ;
@end

