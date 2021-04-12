/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
+(id)stringForSource:(unsigned long long)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSUUID *)eventType;
-(id)initWithEventType:(id)arg1 ;
-(double)durationInMilliseconds;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)isSubmitted;
-(void)setEventError:(NSError *)arg1 ;
-(void)submitAtDate:(id)arg1 error:(id)arg2 ;
-(NSError *)eventError;
@end

