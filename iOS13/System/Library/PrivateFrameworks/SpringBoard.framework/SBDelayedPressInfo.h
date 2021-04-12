/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
@end

