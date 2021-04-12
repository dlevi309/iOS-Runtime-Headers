/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationBodyDescriptionProvider.h>

@protocol CALNTravelAdvisoryDescriptionGenerator;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider> {

	id<CALNTravelAdvisoryDescriptionGenerator> _travelAdvisoryDescriptionGenerator;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryDescriptionGenerator> travelAdvisoryDescriptionGenerator;              //@synthesize travelAdvisoryDescriptionGenerator=_travelAdvisoryDescriptionGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)initWithTravelAdvisoryDescriptionGenerator:(id)arg1 ;
-(id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
-(id<CALNTravelAdvisoryDescriptionGenerator>)travelAdvisoryDescriptionGenerator;
@end

