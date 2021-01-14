/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject {

	CFDateFormatterRef _dateFormatter;
	NSNumberFormatter* _numberFormatter;

}
+(id)eventDescriptionForDrag:(id)arg1 ;
-(id)_attendeesForEvent:(id)arg1 sorted:(BOOL)arg2 limitedTo:(long long)arg3 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)naturalLanguageDescriptionForAttendees:(id)arg1 ;
-(id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
-(CFDateFormatterRef)_sharedDateFormatter;
-(id)_sharedNumberFormatter;
-(void)dealloc;
@end

