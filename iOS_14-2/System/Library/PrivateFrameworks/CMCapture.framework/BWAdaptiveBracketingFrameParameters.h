/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface BWAdaptiveBracketingFrameParameters : NSObject {

	int _integrationTimeInMicroseconds;
	float _gain;
	int _maxAGC;

}

@property (nonatomic,readonly) int integrationTimeInMiroseconds; 
@property (nonatomic,readonly) double integrationTimeInSeconds; 
@property (nonatomic,readonly) float gain; 
@property (nonatomic,readonly) int maxAGC; 
+(id)frameParametersWithIntegrationTimeInSeconds:(double)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
+(id)frameParametersWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
-(float)gain;
-(int)maxAGC;
-(id)initWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
-(int)integrationTimeInMiroseconds;
-(double)integrationTimeInSeconds;
@end

