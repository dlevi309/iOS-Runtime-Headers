/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDDatabaseTransactionStatistics : NSObject {

	double _startTime;
	double _endTime;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double duration; 
-(id)_initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(double)endTime;
-(double)duration;
-(double)startTime;
@end

