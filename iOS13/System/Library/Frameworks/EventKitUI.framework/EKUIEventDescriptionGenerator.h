/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject {

	CFDateFormatterRef _dateFormatter;
	NSNumberFormatter* _numberFormatter;

}
+(id)eventDescriptionForDrag:(id)arg1 ;
-(void)dealloc;
-(id)_sharedNumberFormatter;
-(id)_attendeesForEvent:(id)arg1 sorted:(BOOL)arg2 limitedTo:(long long)arg3 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(CFDateFormatterRef)_sharedDateFormatter;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)naturalLanguageDescriptionForAttendees:(id)arg1 ;
-(id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
@end

