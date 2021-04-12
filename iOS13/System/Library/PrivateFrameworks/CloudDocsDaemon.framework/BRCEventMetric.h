/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSString, NSDate, CKEventMetric;

@interface BRCEventMetric : NSObject {

	BOOL _isCKMetric;
	NSString* _eventName;
	NSDate* _startTime;
	NSDate* _endTime;
	CKEventMetric* _associatedCKEventMetricIfAvailable;

}

@property (nonatomic,readonly) NSString * eventName;                                            //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL isCKMetric;                                                   //@synthesize isCKMetric=_isCKMetric - In the implementation block
@property (nonatomic,readonly) CKEventMetric * associatedCKEventMetricIfAvailable;              //@synthesize associatedCKEventMetricIfAvailable=_associatedCKEventMetricIfAvailable - In the implementation block
-(id)description;
-(NSString *)eventName;
-(id)initWithEventName:(id)arg1 ;
-(void)associateWithCompletedOperation:(id)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)additionalPayload;
-(id)subDescription;
-(BOOL)isCKMetric;
-(void)setIsCKMetric:(BOOL)arg1 ;
-(CKEventMetric *)associatedCKEventMetricIfAvailable;
@end

