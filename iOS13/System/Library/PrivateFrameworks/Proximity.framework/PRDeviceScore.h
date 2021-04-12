/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@class NSData, PRRangeMeasurement, PRAngleMeasurement;

@interface PRDeviceScore : NSObject {

	NSData* _btAddress;
	long long _proximity;
	PRRangeMeasurement* _range;
	PRAngleMeasurement* _angle;
	double _score;
	double _scoreUncertainty;
	double _timestamp;

}

@property (assign,nonatomic) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSData * btAddress;                      //@synthesize btAddress=_btAddress - In the implementation block
@property (readonly) long long proximity;                     //@synthesize proximity=_proximity - In the implementation block
@property (readonly) PRRangeMeasurement * range;              //@synthesize range=_range - In the implementation block
@property (readonly) PRAngleMeasurement * angle;              //@synthesize angle=_angle - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
@property (readonly) double scoreUncertainty;                 //@synthesize scoreUncertainty=_scoreUncertainty - In the implementation block
-(id)init;
-(double)timestamp;
-(PRRangeMeasurement *)range;
-(double)score;
-(void)setTimestamp:(double)arg1 ;
-(PRAngleMeasurement *)angle;
-(long long)proximity;
-(NSData *)btAddress;
-(id)initWithValues:(id)arg1 proximity:(long long)arg2 range:(id)arg3 angle:(id)arg4 score:(double)arg5 scoreUncertainty:(double)arg6 ;
-(double)scoreUncertainty;
@end

