/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationBodyDescriptionProvider.h>

@protocol CALNTravelAdvisoryDescriptionGenerator, CalDateProvider;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider> {

	id<CALNTravelAdvisoryDescriptionGenerator> _travelAdvisoryDescriptionGenerator;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryDescriptionGenerator> travelAdvisoryDescriptionGenerator;              //@synthesize travelAdvisoryDescriptionGenerator=_travelAdvisoryDescriptionGenerator - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                                           //@synthesize dateProvider=_dateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)initWithTravelAdvisoryDescriptionGenerator:(id)arg1 dateProvider:(id)arg2 ;
-(id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id<CalDateProvider>)dateProvider;
-(id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
-(id)bodyForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 bodyContainsTravelAdvice:(BOOL*)arg3 ;
-(id<CALNTravelAdvisoryDescriptionGenerator>)travelAdvisoryDescriptionGenerator;
@end

