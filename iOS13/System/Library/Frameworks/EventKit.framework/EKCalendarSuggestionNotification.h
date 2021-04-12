/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(Class)_SGSuggestionsServiceClass;
-(void)updateSuggestedEventWithEventStore:(id)arg1 ;
-(SGEvent *)suggestedEvent;
-(NSString *)originAppName;
@end

