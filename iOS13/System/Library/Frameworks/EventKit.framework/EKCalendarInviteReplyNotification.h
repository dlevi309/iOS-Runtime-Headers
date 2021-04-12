/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	unsigned long long _status;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(id)titleStringWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(id)initWithType:(long long)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
@end

