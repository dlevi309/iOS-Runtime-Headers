/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTVisit;

@interface RTVisitManagerLeechedVisitIncidentNotification : RTNotification {

	RTVisit* _visitIncident;

}

@property (nonatomic,readonly) RTVisit * visitIncident;              //@synthesize visitIncident=_visitIncident - In the implementation block
-(id)init;
-(RTVisit *)visitIncident;
-(id)initWithVisitIncident:(id)arg1 ;
@end

