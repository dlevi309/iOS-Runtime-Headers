/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSError, NSDate;

@interface HMDLogEvent : HMFObject {

	BOOL _submitted;
	NSUUID* _eventType;
	NSError* _eventError;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,getter=isSubmitted,nonatomic) BOOL submitted;              //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSUUID * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSError * eventError;                           //@synthesize eventError=_eventError - In the implementation block
@property (readonly) double durationInMilliseconds; 
@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
+(id)stringForSource:(unsigned long long)arg1 ;
-(NSDate *)endDate;
-(NSUUID *)eventType;
-(id)initWithEventType:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)durationInMilliseconds;
-(void)setSubmitted:(BOOL)arg1 ;
-(void)submitAtDate:(id)arg1 error:(id)arg2 ;
-(BOOL)isSubmitted;
-(void)setEventError:(NSError *)arg1 ;
-(NSError *)eventError;
-(id)bucketedDurationWithRoundInterval:(id)arg1 ;
-(void)populateErrorDetails:(id)arg1 ;
@end

