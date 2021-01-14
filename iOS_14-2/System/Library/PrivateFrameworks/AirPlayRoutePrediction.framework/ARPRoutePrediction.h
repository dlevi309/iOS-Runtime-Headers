/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@class NSString;

@interface ARPRoutePrediction : NSObject {

	NSString* _outputDeviceID;
	double _confidence;

}

@property (nonatomic,copy,readonly) NSString * outputDeviceID;              //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)outputDeviceID;
-(id)description;
-(id)initWithOutputDeviceID:(id)arg1 confidence:(double)arg2 ;
@end

