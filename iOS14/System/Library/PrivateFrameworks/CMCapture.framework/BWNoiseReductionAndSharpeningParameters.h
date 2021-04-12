/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {

	NSString* _portType;
	NSDictionary* _noiseReductionAndSharpeningConfiguration;

}
-(id)portType;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(id)description;
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg1 gain:(float)arg2 ;
-(id)_noiseReductionAndSharpeningParametersForType:(int)arg1 ;
-(void)dealloc;
@end

