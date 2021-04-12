/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

#import <SAObjects/SADomainObjectCommit.h>

@class EKEventStore;

@interface CalAssistantEventCommit : SADomainObjectCommit {

	EKEventStore* _eventStore;

}
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_validateEvent:(id)arg1 ;
-(id)_commitEvent:(id)arg1 serviceHelper:(id)arg2 ;
@end

