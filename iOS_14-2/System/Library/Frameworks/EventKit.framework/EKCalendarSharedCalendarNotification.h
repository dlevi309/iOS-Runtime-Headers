/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {

	unsigned long long _sharingInvitationResponse;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long sharingInvitationResponse;              //@synthesize sharingInvitationResponse=_sharingInvitationResponse - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;                     //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)calendarFromEventStore:(id)arg1 ;
-(BOOL)isSharedCalendarInvitation;
@end

