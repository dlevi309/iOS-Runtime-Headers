/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class SGEvent, NSString;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {

	SGEvent* _suggestedEvent;
	NSString* _originAppName;

}

@property (nonatomic,readonly) NSString * originAppName; 
@property (nonatomic,readonly) SGEvent * suggestedEvent; 
+(id)_queue;
-(void)updateSuggestedEventWithEventStore:(id)arg1 ;
-(NSString *)originAppName;
-(SGEvent *)suggestedEvent;
-(Class)_SGSuggestionsServiceClass;
@end

