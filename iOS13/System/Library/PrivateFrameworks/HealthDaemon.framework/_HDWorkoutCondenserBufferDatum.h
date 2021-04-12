/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface _HDWorkoutCondenserBufferDatum : NSObject {

	unsigned char _UUIDBytes[16];
	BOOL _isSeries;
	double _startTime;
	double _endTime;
	double _value;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL isSeries;                 //@synthesize isSeries=_isSeries - In the implementation block
-(id)init;
-(id)description;
-(double)value;
-(double)startTime;
-(double)endTime;
-(BOOL)isSeries;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUIDBytes:(unsigned char)arg4 series:(BOOL)arg5 ;
-(BOOL)shouldReplaceDatum:(id)arg1 ;
@end

