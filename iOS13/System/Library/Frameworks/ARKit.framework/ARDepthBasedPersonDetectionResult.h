/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARPersonDetectionResult.h>

@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {

	float _sumDepthValues;
	long long _numberDepthPixels;
	float _sumDepthValuesWithHighConfidence;
	long long _numberDepthPixelsWithHighConfidence;
	double _initialBoundingBoxAvg;

}

@property (assign,nonatomic) double initialBoundingBoxAvg;                      //@synthesize initialBoundingBoxAvg=_initialBoundingBoxAvg - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSamples; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(float)meanValue;
-(unsigned long long)numberOfSamples;
-(void)addSampleValueWithHighConfidence:(float)arg1 ;
-(void)addSampleValue:(float)arg1 ;
-(void)setInitialBoundingBoxAvg:(double)arg1 ;
-(double)initialBoundingBoxAvg;
@end

