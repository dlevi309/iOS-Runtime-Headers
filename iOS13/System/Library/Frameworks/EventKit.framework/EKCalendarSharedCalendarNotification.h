/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {

	unsigned long long _sharingInvitationResponse;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long sharingInvitationResponse;              //@synthesize sharingInvitationResponse=_sharingInvitationResponse - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;                     //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(id)titleStringWithOptions:(unsigned long long)arg1 ;
-(id)senderStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)calendarFromEventStore:(id)arg1 ;
@end

