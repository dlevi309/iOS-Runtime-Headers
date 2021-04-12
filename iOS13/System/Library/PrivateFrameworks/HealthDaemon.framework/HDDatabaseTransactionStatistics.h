/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDDatabaseTransactionStatistics : NSObject {

	double _startTime;
	double _endTime;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double duration; 
-(double)duration;
-(double)startTime;
-(double)endTime;
-(id)_initWithStartTime:(double)arg1 endTime:(double)arg2 ;
@end

