/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTVisit;

@interface RTVisitManagerVisitIncidentNotification : RTNotification {

	RTVisit* _visitIncident;

}

@property (nonatomic,readonly) RTVisit * visitIncident;              //@synthesize visitIncident=_visitIncident - In the implementation block
-(id)init;
-(RTVisit *)visitIncident;
-(id)initWithVisitIncident:(id)arg1 ;
@end

