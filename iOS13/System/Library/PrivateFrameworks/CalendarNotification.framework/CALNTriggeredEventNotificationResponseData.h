/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EKTravelEngineHypothesis *)hypothesis;
-(id)initWithHypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2 ;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
@end

