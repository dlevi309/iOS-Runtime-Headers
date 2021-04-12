/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding> {

	EKTravelEngineHypothesis* _hypothesis;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;

}

@property (nonatomic,readonly) EKTravelEngineHypothesis * hypothesis;                              //@synthesize hypothesis=_hypothesis - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(EKTravelEngineHypothesis *)hypothesis;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2 ;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
@end

