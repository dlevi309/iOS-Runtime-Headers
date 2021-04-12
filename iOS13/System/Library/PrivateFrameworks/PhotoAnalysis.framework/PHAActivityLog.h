/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSDate;

@interface PHAActivityLog : NSObject {

	double _absoluteStartTime;
	double _absoluteEndTime;
	unsigned long long _status;
	unsigned long long _graphRequestInterruptionCount;
	NSDate* _startDate;
	double _duration;

}

@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(id)init;
-(id)description;
-(NSDate *)startDate;
-(unsigned long long)status;
-(double)duration;
-(void)markProcessingStopped:(unsigned long long)arg1 ;
-(void)markProcessingInterruptedByGraphRequest;
@end

