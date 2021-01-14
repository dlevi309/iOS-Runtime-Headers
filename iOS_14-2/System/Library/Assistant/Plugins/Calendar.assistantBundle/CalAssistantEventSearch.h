/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

#import <SAObjects/SACalendarEventSearch.h>
#import <Calendar/CalAssistantCommand.h>

@class EKEventStore, NSString;

@interface CalAssistantEventSearch : SACalendarEventSearch <CalAssistantCommand> {

	EKEventStore* _eventStore;

}

@property (nonatomic,retain) EKEventStore * eventStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)_validate;
-(id)_visibleCalendars;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

