/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSData;

@interface PPTopicTransform : NSObject {

	NSData* _data;
	header_s _header;
	const float* _bias;
	const unsigned* _qids;
	const unsigned* _matrixIndices;
	const float* _matrixElts;
	const char* _payloads;
	unsigned char _featureSmoothingType;
	unsigned char _featureScalingType;
	unsigned char _featureNormalizationType;
	unsigned char _outputScalingType;
	unsigned char _activationType;
	float _featureSmoothingFactor;
	float _featureScalingFactor;
	float _outputScalingFactor;
	float _attenuationFactor;
	float _threshold;

}

@property (nonatomic,readonly) unsigned long long outputTopicCount; 
@property (nonatomic,readonly) float threshold;                                  //@synthesize threshold=_threshold - In the implementation block
-(float)threshold;
-(void)addWeightedTopicScoreToBuffer:(float*)arg1 qid:(unsigned)arg2 score:(float)arg3 ;
-(id)initWithPath:(id)arg1 mappingId:(id)arg2 ;
-(id)init;
-(void)applyFeatureScaling:(float*)arg1 vectorLength:(int)arg2 ;
-(void)applyOutputScaling:(float*)arg1 vectorLength:(int)arg2 ;
-(void)_enumerateSparseRowAtIndex:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)addBias:(float*)arg1 ;
-(id)QIDWeightsWithMappedTopicIdentifier:(id)arg1 ;
-(void)_readHyperparameters:(id)arg1 ;
-(void)_applyScaling:(float*)arg1 vectorLength:(int)arg2 scalingType:(unsigned char)arg3 scalingFactor:(float)arg4 ;
-(void)applyFeatureNormalization:(float*)arg1 vectorLength:(int)arg2 ;
-(id)initWithPath:(id)arg1 mappingId:(id)arg2 hyperparameters:(id)arg3 ;
-(void)addWeightedTopicScoreToBuffer:(float*)arg1 countNonZeroComponentsInBuffer:(unsigned short*)arg2 qid:(unsigned)arg3 score:(float)arg4 ;
-(void)_enumerateSparseColumnAtIndex:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)applyOutputActivation:(float*)arg1 ;
-(id)payloadForTopic:(unsigned)arg1 ;
-(void)applyOutputAttenuation:(float*)arg1 nonzeroCounts:(unsigned short*)arg2 ;
-(unsigned long long)outputTopicCount;
-(BOOL)containsMappedTopic:(id)arg1 ;
-(void)applyFeatureSmoothing:(float*)arg1 vectorLength:(int)arg2 ;
@end

