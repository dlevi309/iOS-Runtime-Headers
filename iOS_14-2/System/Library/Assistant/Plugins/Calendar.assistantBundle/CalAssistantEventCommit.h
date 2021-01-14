/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

#import <SAObjects/SADomainObjectCommit.h>

@class EKEventStore;

@interface CalAssistantEventCommit : SADomainObjectCommit {

	EKEventStore* _eventStore;

}
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_validateEvent:(id)arg1 ;
-(id)_commitEvent:(id)arg1 serviceHelper:(id)arg2 ;
@end

