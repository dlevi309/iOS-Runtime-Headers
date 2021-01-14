/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PRAngleMeasurement *)angle;
-(id)init;
-(PRRangeMeasurement *)range;
-(double)score;
-(double)timestamp;
-(long long)proximity;
-(NSData *)btAddress;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToPRDeviceScore:(id)arg1 ;
-(double)scoreUncertainty;
-(id)initWithValues:(id)arg1 proximity:(long long)arg2 range:(id)arg3 angle:(id)arg4 score:(double)arg5 scoreUncertainty:(double)arg6 ;
@end

