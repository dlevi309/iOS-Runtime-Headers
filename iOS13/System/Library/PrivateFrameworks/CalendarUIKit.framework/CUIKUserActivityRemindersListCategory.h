/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	BOOL _predictable;

}
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)updateActivity:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2 ;
-(BOOL)_isMatchForRemindersList:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 ;
-(id)remindersListFromStore:(id)arg1 ;
@end

