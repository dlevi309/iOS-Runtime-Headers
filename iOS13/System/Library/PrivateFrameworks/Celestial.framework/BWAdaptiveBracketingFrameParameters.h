/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(id)initWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
-(int)integrationTimeInMiroseconds;
-(double)integrationTimeInSeconds;
-(int)maxAGC;
@end

