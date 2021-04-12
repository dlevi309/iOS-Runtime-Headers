/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKPersistentNotification.h>

@interface EKPersistentInviteReplyNotification : EKPersistentNotification
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(id)summary;
-(int)entityType;
-(void)setSummary:(id)arg1 ;
-(unsigned long long)shareeStatus;
-(id)shareeDisplayName;
-(id)inReplyTo;
-(void)setInReplyTo:(id)arg1 ;
-(void)setShareeDisplayName:(id)arg1 ;
-(id)shareeFirstName;
-(void)setShareeFirstName:(id)arg1 ;
-(id)shareeLastName;
-(void)setShareeLastName:(id)arg1 ;
-(id)shareeURL;
-(void)setShareeURL:(id)arg1 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(BOOL)alerted;
-(id)inviteReplyCalendar;
-(void)setInviteReplyCalendar:(id)arg1 ;
@end

