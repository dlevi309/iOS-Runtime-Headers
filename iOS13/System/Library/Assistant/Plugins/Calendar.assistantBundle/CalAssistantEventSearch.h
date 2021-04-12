/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

#import <SAObjects/SACalendarEventSearch.h>
#import <Calendar/CalAssistantCommand.h>

@class EKEventStore, NSString;

@interface CalAssistantEventSearch : SACalendarEventSearch <CalAssistantCommand> {

	EKEventStore* _eventStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EKEventStore * eventStore; 
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)_visibleCalendars;
@end

