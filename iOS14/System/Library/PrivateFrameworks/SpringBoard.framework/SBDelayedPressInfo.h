/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBDelayedPressInfo : NSObject {

	long long _type;
	long long _phase;
	double _timestamp;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long phase;               //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(double)timestamp;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

