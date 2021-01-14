/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)eventName;
-(id)initWithEventName:(id)arg1 ;
-(id)description;
-(void)associateWithCompletedOperation:(id)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(id)additionalPayload;
-(id)subDescription;
-(BOOL)isCKMetric;
-(void)setIsCKMetric:(BOOL)arg1 ;
-(CKEventMetric *)associatedCKEventMetricIfAvailable;
@end

