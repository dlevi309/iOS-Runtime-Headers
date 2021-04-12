/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@interface MNTraceAnnotatedUserEnvironmentRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	long long _environmentType;

}

@property (assign,nonatomic) double startTimestamp;                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                    //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign,nonatomic) long long environmentType;              //@synthesize environmentType=_environmentType - In the implementation block
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(double)endTimestamp;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setEnvironmentType:(long long)arg1 ;
-(long long)environmentType;
@end

