/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) unsigned long long outputTopicCount; 
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)sigmoid:(float*)arg1 ;
-(unsigned long long)outputTopicCount;
-(id)payloadForTopic:(unsigned)arg1 ;
-(void)_enumerateSparseRowAtIndex:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)_enumerateSparseColumnAtIndex:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)addWeightedTopicScoreToBuffer:(float*)arg1 countNonZeroComponentsInBuffer:(unsigned short*)arg2 qid:(unsigned)arg3 score:(float)arg4 ;
-(void)addWeightedTopicScoreToBuffer:(float*)arg1 qid:(unsigned)arg2 score:(float)arg3 ;
-(id)QIDWeightsWithMappedTopicIdentifier:(id)arg1 ;
-(void)addBias:(float*)arg1 ;
-(void)scaleBuffer:(float*)arg1 withFactor:(float)arg2 ;
-(void)halfSigmoid:(float*)arg1 ;
@end

