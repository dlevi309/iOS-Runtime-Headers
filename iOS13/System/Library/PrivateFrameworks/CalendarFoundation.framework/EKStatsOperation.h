/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface EKStatsOperation : NSObject {

	int _type;
	long long _intValue;
	double _doubleValue;

}

@property (assign) int type;                        //@synthesize type=_type - In the implementation block
@property (assign) long long intValue;              //@synthesize intValue=_intValue - In the implementation block
@property (assign) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(long long)intValue;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(id)initWithType:(int)arg1 doubleValue:(double)arg2 ;
-(id)initWithType:(int)arg1 intValue:(long long)arg2 ;
@end

