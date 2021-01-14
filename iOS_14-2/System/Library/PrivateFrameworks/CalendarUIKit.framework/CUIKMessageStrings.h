/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class NSArray, EKCalendarEventInvitationNotificationAttendee;

@interface CUIKMessageStrings : NSObject {

	BOOL _timeProposals;
	NSArray* _titleStrings;
	NSArray* _bodyStrings;
	long long _comments;
	EKCalendarEventInvitationNotificationAttendee* _importantAttendee;

}

@property (nonatomic,readonly) NSArray * titleStrings;                                                         //@synthesize titleStrings=_titleStrings - In the implementation block
@property (nonatomic,readonly) NSArray * bodyStrings;                                                          //@synthesize bodyStrings=_bodyStrings - In the implementation block
@property (nonatomic,readonly) long long comments;                                                             //@synthesize comments=_comments - In the implementation block
@property (nonatomic,readonly) BOOL timeProposals;                                                             //@synthesize timeProposals=_timeProposals - In the implementation block
@property (nonatomic,readonly) EKCalendarEventInvitationNotificationAttendee * importantAttendee;              //@synthesize importantAttendee=_importantAttendee - In the implementation block
-(long long)comments;
-(id)initWithTitles:(id)arg1 bodyStrings:(id)arg2 comments:(long long)arg3 timeProposals:(BOOL)arg4 importantAttendee:(id)arg5 ;
-(NSArray *)titleStrings;
-(NSArray *)bodyStrings;
-(BOOL)timeProposals;
-(EKCalendarEventInvitationNotificationAttendee *)importantAttendee;
@end

