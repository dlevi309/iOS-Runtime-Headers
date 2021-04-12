/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>
#import <ARKit/ARTechniqueBusyState.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSString, NSArray;

@interface ARMLImageProcessingTechnique : ARImageBasedTechnique <ARTechniqueBusyState> {

	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_semaphore> _processingSemaphore;
	os_unfair_lock_s _prepLock;
	double _espressoInputBufferTimestamp;
	os_unfair_lock_s _espressoInputBufferLock;
	void* _espressoContext;
	void* _espressoPlan;
	SCD_Struct_AR129* _espressoNetwork;
	vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >* _espressoOutputTensors;
	vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >* _espressoInputTensors;
	BOOL _hasBegunPrep;
	BOOL _failedToLoadNetwork;
	CVPixelBufferPoolRef _bgraPixelBufferPool;
	NSString* _previous_network_configuration;
	int _lockedOrientation;
	BOOL _deterministic;
	BOOL _prepComplete;
	BOOL _networkHasConfigurations;
	NSString* _networkFilePath;
	NSArray* _inputTensorNames;
	NSArray* _outputTensorNames;
	CGSize _networkInputScaleBeforeRotation;
	CGSize _allowedResamplingImageSize;

}

@property (assign) BOOL prepComplete;                                               //@synthesize prepComplete=_prepComplete - In the implementation block
@property (nonatomic,retain) NSString * networkFilePath;                            //@synthesize networkFilePath=_networkFilePath - In the implementation block
@property (nonatomic,readonly) NSArray * inputTensorNames;                          //@synthesize inputTensorNames=_inputTensorNames - In the implementation block
@property (nonatomic,readonly) NSArray * outputTensorNames;                         //@synthesize outputTensorNames=_outputTensorNames - In the implementation block
@property (nonatomic,readonly) CGSize networkInputScaleBeforeRotation;              //@synthesize networkInputScaleBeforeRotation=_networkInputScaleBeforeRotation - In the implementation block
@property (assign,nonatomic) CGSize allowedResamplingImageSize;                     //@synthesize allowedResamplingImageSize=_allowedResamplingImageSize - In the implementation block
@property (assign) BOOL networkHasConfigurations;                                   //@synthesize networkHasConfigurations=_networkHasConfigurations - In the implementation block
@property (nonatomic,readonly) NSString * networkVersionString; 
@property (nonatomic,readonly) BOOL failedToLoadNetwork;                            //@synthesize failedToLoadNetwork=_failedToLoadNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBusy; 
+(BOOL)isSupported;
-(void)dealloc;
-(BOOL)isBusy;
-(void*)espressoPlan;
-(SCD_Struct_AR129*)espressoNetwork;
-(id)processData:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(id)initWithDispatchQueue:(id)arg1 inputTensorNames:(id)arg2 outputTensorNames:(id)arg3 networkInputScaleBeforeRotation:(CGSize)arg4 networkFilePath:(id)arg5 ;
-(double)requiredTimeInterval;
-(SCD_Struct_AR130)networkInputParams;
-(id)createResultDataFromTensors:(SCD_Struct_AR17*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(CGSize)arg6 ;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(void)setAllowedResamplingImageSize:(CGSize)arg1 ;
-(BOOL)ARMLVerifyLoadedModelVersion:(id)arg1 deviceName:(id)arg2 major:(int)arg3 minor:(int)arg4 ;
-(id)resultDataClasses;
-(BOOL)isLoadedModelVersionCorrect:(id)arg1 ;
-(SCD_Struct_AR17*)espressoOutputTensorsData;
-(void)changeEspressoConfig:(id)arg1 ;
-(id)processEspressoTensor:(id)arg1 ;
-(long long)captureBehavior;
-(long long)_getDeviceOrientation;
-(void)lockOrientation:(long long)arg1 ;
-(BOOL)failedToLoadNetwork;
-(id)networkModesForOrientation:(long long)arg1 ;
-(BOOL)preProcessNetworkInputImage:(CVBufferRef)arg1 ;
-(NSArray *)inputTensorNames;
-(unsigned long long)espressoOutputTensorsSize;
-(id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(CGSize)arg3 rotationOfResultTensor:(long long)arg4 ;
-(SCD_Struct_AR17*)espressoInputTensorsData;
-(int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4 ;
-(void)networkModeDidChange:(id)arg1 toMode:(id)arg2 ;
-(int)prepareBindInputBuffer:(unsigned long long)arg1 withName:(id)arg2 ;
-(long long)numberOfInputChannelsToExpectInNetwork;
-(NSArray *)outputTensorNames;
-(BOOL)shouldUseSynchronizedUltraWide;
-(int)defaultEngine;
-(id)defaultEngineName;
-(NSString *)networkVersionString;
-(void)loadMLWithPath:(id)arg1 networkMode:(id)arg2 ;
-(void)setPrepComplete:(BOOL)arg1 ;
-(BOOL)prepComplete;
-(void)_asynchronousProcessDownSampledImage:(id)arg1 ;
-(void)waitForProcessingCompleteInDeterministicMode;
-(void)_asynchronousProcessEspressoTensor:(id)arg1 ;
-(BOOL)networkProvidesConfigurationsForDeviceOrientation;
-(id)_resampleImage:(id)arg1 rotationOfResultTensor:(long long)arg2 networkInputSize:(CGSize)arg3 ;
-(void)_runNeuralNetworkAndPushResult:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(CGSize)arg3 rotationOfResultTensor:(long long)arg4 ;
-(id)processImageDataThroughNeuralNetwork:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(CGSize)arg3 rotationOfResultTensor:(long long)arg4 ;
-(id)processingSemaphore;
-(unsigned long long)espressoInputTensorsSize;
-(long long)orientationForInitializingEspresso;
-(NSString *)networkFilePath;
-(void)setNetworkFilePath:(NSString *)arg1 ;
-(CGSize)networkInputScaleBeforeRotation;
-(CGSize)allowedResamplingImageSize;
-(BOOL)networkHasConfigurations;
-(void)setNetworkHasConfigurations:(BOOL)arg1 ;
@end

