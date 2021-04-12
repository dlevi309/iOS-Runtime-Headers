/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

#import <SAObjects/SADomainObjectDelete.h>

@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {

	EKEventStore* _eventStore;

}
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(id)_validateEvent:(id)arg1 ;
-(id)_deleteEvent:(id)arg1 ;
@end

