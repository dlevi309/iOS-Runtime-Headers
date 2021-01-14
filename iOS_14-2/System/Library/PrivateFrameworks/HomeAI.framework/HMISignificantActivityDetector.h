/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class MLModel, NSString, NSArray, HMINMSConfiguration, MLPredictionOptions;

@interface HMISignificantActivityDetector : HMFObject <HMFLogging> {

	double _confidenceThresholds[91];
	CGSize _anchorSizes[66];
	unsigned long long _numberOfAnchors[6];
	BOOL _useSoftmax;
	MLModel* _mlModel;
	NSString* _inputFeatureValueName;
	NSArray* _offsetsFeatureValueNames;
	NSArray* _scoresFeatureValueNames;
	NSArray* _yawsFeatureValueNames;
	NSArray* _rollsFeatureValueNames;
	HMINMSConfiguration* _nmsConfiguration;
	MLPredictionOptions* _predictionOptions;
	CGSize _inputDimensions;

}

@property (readonly) MLModel * mlModel;                                    //@synthesize mlModel=_mlModel - In the implementation block
@property (readonly) NSString * inputFeatureValueName;                     //@synthesize inputFeatureValueName=_inputFeatureValueName - In the implementation block
@property (readonly) NSArray * offsetsFeatureValueNames;                   //@synthesize offsetsFeatureValueNames=_offsetsFeatureValueNames - In the implementation block
@property (readonly) NSArray * scoresFeatureValueNames;                    //@synthesize scoresFeatureValueNames=_scoresFeatureValueNames - In the implementation block
@property (readonly) NSArray * yawsFeatureValueNames;                      //@synthesize yawsFeatureValueNames=_yawsFeatureValueNames - In the implementation block
@property (readonly) NSArray * rollsFeatureValueNames;                     //@synthesize rollsFeatureValueNames=_rollsFeatureValueNames - In the implementation block
@property (readonly) HMINMSConfiguration * nmsConfiguration;               //@synthesize nmsConfiguration=_nmsConfiguration - In the implementation block
@property (readonly) BOOL useSoftmax;                                      //@synthesize useSoftmax=_useSoftmax - In the implementation block
@property (readonly) MLPredictionOptions * predictionOptions;              //@synthesize predictionOptions=_predictionOptions - In the implementation block
@property (readonly) CGSize inputDimensions;                               //@synthesize inputDimensions=_inputDimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)defaultAssetPath;
-(CGSize)inputDimensions;
-(MLPredictionOptions *)predictionOptions;
-(MLModel *)mlModel;
-(BOOL)_runNeuralNetworkOnPixelBuffer:(CVBufferRef)arg1 offsets:(id)arg2 scores:(id)arg3 yaws:(id)arg4 rolls:(id)arg5 error:(id*)arg6 ;
-(void)_postProcessOffsets:(id)arg1 scores:(id)arg2 yaws:(id)arg3 rolls:(id)arg4 outputPredictions:(id)arg5 ;
-(NSString *)inputFeatureValueName;
-(NSArray *)offsetsFeatureValueNames;
-(NSArray *)scoresFeatureValueNames;
-(NSArray *)yawsFeatureValueNames;
-(NSArray *)rollsFeatureValueNames;
-(BOOL)useSoftmax;
-(HMINMSConfiguration *)nmsConfiguration;
-(id)initWithConfidenceThresholds:(id)arg1 nmsConfiguration:(id)arg2 assetPath:(id)arg3 error:(id*)arg4 ;
-(BOOL)predict:(CVBufferRef)arg1 detectedObjects:(id)arg2 error:(id*)arg3 ;
@end

