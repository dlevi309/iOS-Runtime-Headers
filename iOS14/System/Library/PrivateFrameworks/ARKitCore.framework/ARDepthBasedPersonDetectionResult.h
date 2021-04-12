/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARPersonDetectionResult.h>

@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {

	float _sumDepthValues;
	long long _numberDepthPixels;
	float _sumDepthValuesWithHighConfidence;
	long long _numberDepthPixelsWithHighConfidence;
	double _initialBoundingBoxAvg;

}

@property (assign,nonatomic) double initialBoundingBoxAvg;                      //@synthesize initialBoundingBoxAvg=_initialBoundingBoxAvg - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSamples; 
-(void)encodeWithCoder:(id)arg1 ;
-(float)meanValue;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfSamples;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(void)addSampleValueWithHighConfidence:(float)arg1 ;
-(void)addSampleValue:(float)arg1 ;
-(void)setInitialBoundingBoxAvg:(double)arg1 ;
-(double)initialBoundingBoxAvg;
@end

