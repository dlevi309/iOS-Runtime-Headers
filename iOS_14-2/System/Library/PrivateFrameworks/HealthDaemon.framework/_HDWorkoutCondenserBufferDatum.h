/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)endTime;
-(double)startTime;
-(double)value;
-(BOOL)isSeries;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUIDBytes:(unsigned char)arg4 series:(BOOL)arg5 ;
-(BOOL)shouldReplaceDatum:(id)arg1 ;
@end

