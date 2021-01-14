/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class NSNumber;

@interface CUIKDefaultAlarmPreferences : NSObject {

	NSNumber* _defaultAllDayAlarmOffset;
	NSNumber* _defaultTimedAlarmOffset;

}

@property (nonatomic,retain) NSNumber * defaultAllDayAlarmOffset;              //@synthesize defaultAllDayAlarmOffset=_defaultAllDayAlarmOffset - In the implementation block
@property (nonatomic,retain) NSNumber * defaultTimedAlarmOffset;               //@synthesize defaultTimedAlarmOffset=_defaultTimedAlarmOffset - In the implementation block
-(id)_defaultTimedAlarmOffset;
-(id)_defaultAllDayAlarmOffset;
-(id)_defaultBirthdayAlarmOffsetForSources:(id)arg1 ;
-(id)defaultAlarmOffsetForAlarmType:(int)arg1 sources:(id)arg2 ;
-(void)setDefaultAlarmOffset:(id)arg1 forAlarmType:(int)arg2 sources:(id)arg3 ;
-(NSNumber *)defaultAllDayAlarmOffset;
-(void)setDefaultAllDayAlarmOffset:(NSNumber *)arg1 ;
-(NSNumber *)defaultTimedAlarmOffset;
-(void)setDefaultTimedAlarmOffset:(NSNumber *)arg1 ;
@end

