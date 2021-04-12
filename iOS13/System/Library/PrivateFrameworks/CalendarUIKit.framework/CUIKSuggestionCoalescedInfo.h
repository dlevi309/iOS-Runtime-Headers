/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class NSString, EKCalendarSuggestionNotification;

@interface CUIKSuggestionCoalescedInfo : NSObject {

	NSString* _title;
	NSString* _descriptionText;
	EKCalendarSuggestionNotification* _earliestSuggestionNotification;

}

@property (readonly) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (readonly) NSString * descriptionText;                                                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (readonly) EKCalendarSuggestionNotification * earliestSuggestionNotification;              //@synthesize earliestSuggestionNotification=_earliestSuggestionNotification - In the implementation block
-(NSString *)title;
-(NSString *)descriptionText;
-(id)initWithTitle:(id)arg1 descriptionText:(id)arg2 earliestSuggestionNotification:(id)arg3 ;
-(EKCalendarSuggestionNotification *)earliestSuggestionNotification;
@end

