/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@class NSString;

@interface ARPRoutePrediction : NSObject {

	NSString* _outputDeviceID;
	double _confidence;

}

@property (nonatomic,copy,readonly) NSString * outputDeviceID;              //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
-(id)description;
-(double)confidence;
-(NSString *)outputDeviceID;
-(id)initWithOutputDeviceID:(id)arg1 confidence:(double)arg2 ;
@end

