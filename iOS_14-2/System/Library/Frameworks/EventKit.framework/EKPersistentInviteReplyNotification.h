/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKPersistentNotification.h>

@interface EKPersistentInviteReplyNotification : EKPersistentNotification
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
-(int)entityType;
-(void)setInviteReplyCalendar:(id)arg1 ;
-(void)setCreationDate:(id)arg1 ;
-(BOOL)alerted;
-(id)creationDate;
-(id)summary;
-(unsigned long long)shareeStatus;
-(id)shareeDisplayName;
-(id)inviteReplyCalendar;
-(id)inReplyTo;
-(void)setSummary:(id)arg1 ;
-(id)shareeFirstName;
-(id)shareeLastName;
-(void)setInReplyTo:(id)arg1 ;
-(void)setShareeDisplayName:(id)arg1 ;
-(void)setShareeFirstName:(id)arg1 ;
-(void)setShareeLastName:(id)arg1 ;
-(void)setShareeURL:(id)arg1 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(id)shareeURL;
@end

