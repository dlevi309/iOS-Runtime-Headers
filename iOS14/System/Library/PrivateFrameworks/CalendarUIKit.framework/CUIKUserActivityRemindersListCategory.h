/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	BOOL _predictable;

}
-(id)initWithRemindersList:(id)arg1 ;
-(BOOL)_isMatchForRemindersList:(id)arg1 ;
-(id)remindersListFromStore:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2 ;
-(void)updateActivity:(id)arg1 ;
@end

