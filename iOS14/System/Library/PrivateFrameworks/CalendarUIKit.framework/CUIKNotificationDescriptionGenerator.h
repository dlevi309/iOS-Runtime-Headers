/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSNumberFormatter, NSDateFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {

	NSNumberFormatter* _numberFormatter;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _dateTimeFormatter;

}
+(id)stringWithAutoCommentRemoved:(id)arg1 ;
+(id)comment:(id)arg1 withInsertedAutoCommentForDate:(id)arg2 ;
+(id)sharedGenerator;
+(id)stringWithOnlyAutoComment:(id)arg1 ;
+(id)autoCommentForProposedTime:(id)arg1 ;
-(id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2 ;
-(id)_sharedDateFormatter;
-(id)titleStringForNotification:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)timePeriodForTimeInterval:(id)arg1 ;
-(id)_adjustedTitle:(id)arg1 maxLength:(unsigned long long)arg2 ;
-(id)conflictStringForConflictDetails:(id)arg1 descriptions:(id)arg2 ;
-(id)descriptionStringsForNotification:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_sharedNumberFormatter;
-(id)descriptionForNotification:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2 descriptions:(id)arg3 ;
-(id)_sharedTimeFormatter;
-(id)_sharedDateTimeFormatter;
@end

