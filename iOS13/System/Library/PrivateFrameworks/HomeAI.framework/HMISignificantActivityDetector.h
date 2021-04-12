/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class MLModel, NSString, NSArray, MLPredictionOptions;

@interface HMISignificantActivityDetector : HMFObject <HMFLogging> {

	double _confidenceThresholds[91];
	CGSize _anchorSizes[66];
	unsigned long long _numberOfAnchors[6];
	BOOL _useSoftmax;
	MLModel* _mlModel;
	NSString* _inputFeatureValueName;
	NSArray* _offsetsFeatureValueNames;
	NSArray* _scoresFeatureValueNames;
	double _nmsThreshold;
	MLPredictionOptions* _predictionOptions;
	CGSize _inputDimensions;

}

@property (readonly) MLModel * mlModel;                                    //@synthesize mlModel=_mlModel - In the implementation block
@property (readonly) NSString * inputFeatureValueName;                     //@synthesize inputFeatureValueName=_inputFeatureValueName - In the implementation block
@property (readonly) NSArray * offsetsFeatureValueNames;                   //@synthesize offsetsFeatureValueNames=_offsetsFeatureValueNames - In the implementation block
@property (readonly) NSArray * scoresFeatureValueNames;                    //@synthesize scoresFeatureValueNames=_scoresFeatureValueNames - In the implementation block
@property (readonly) double nmsThreshold;                                  //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (readonly) BOOL useSoftmax;                                      //@synthesize useSoftmax=_useSoftmax - In the implementation block
@property (readonly) MLPredictionOptions * predictionOptions;              //@synthesize predictionOptions=_predictionOptions - In the implementation block
@property (readonly) CGSize inputDimensions;                               //@synthesize inputDimensions=_inputDimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(MLPredictionOptions *)predictionOptions;
-(double)nmsThreshold;
-(MLModel *)mlModel;
-(BOOL)_runNeuralNetworkOnPixelBuffer:(CVBufferRef)arg1 offsets:(id)arg2 scores:(id)arg3 error:(id*)arg4 ;
-(void)_postProcessOffsets:(id)arg1 scores:(id)arg2 outputPredictions:(id)arg3 ;
-(NSString *)inputFeatureValueName;
-(NSArray *)offsetsFeatureValueNames;
-(NSArray *)scoresFeatureValueNames;
-(BOOL)useSoftmax;
-(id)initWithConfidenceThresholds:(id)arg1 nmsThreshold:(double)arg2 error:(id*)arg3 ;
-(BOOL)predict:(CVBufferRef)arg1 detectedObjects:(id)arg2 error:(id*)arg3 ;
-(CGSize)inputDimensions;
@end

