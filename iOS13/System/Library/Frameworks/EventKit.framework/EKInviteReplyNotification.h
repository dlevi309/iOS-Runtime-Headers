/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKNotification.h>

@class EKCalendar, NSString, NSURL, NSDate;

@interface EKInviteReplyNotification : EKNotification

@property (nonatomic,readonly) EKCalendar * inviteReplyCalendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,copy) NSString * inReplyTo; 
@property (nonatomic,copy) NSString * shareeDisplayName; 
@property (nonatomic,copy) NSString * shareeFirstName; 
@property (nonatomic,copy) NSString * shareeLastName; 
@property (nonatomic,copy) NSURL * shareeURL; 
@property (nonatomic,readonly) NSString * shareeEmailAddress; 
@property (nonatomic,readonly) NSString * shareePhoneNumber; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,readonly) BOOL alerted; 
+(Class)frozenClass;
+(id)sourceForInviteReplyNotification:(id)arg1 ;
+(id)knownRelationshipSingleValueKeys;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(unsigned long long)shareeStatus;
-(NSString *)shareeDisplayName;
-(NSString *)inReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
-(void)setShareeDisplayName:(NSString *)arg1 ;
-(NSString *)shareeFirstName;
-(void)setShareeFirstName:(NSString *)arg1 ;
-(NSString *)shareeLastName;
-(void)setShareeLastName:(NSString *)arg1 ;
-(NSURL *)shareeURL;
-(void)setShareeURL:(NSURL *)arg1 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(BOOL)alerted;
-(EKCalendar *)inviteReplyCalendar;
-(NSString *)calendarName;
-(NSString *)shareeEmailAddress;
-(NSString *)shareePhoneNumber;
-(void)_setInviteReplyCalendar:(id)arg1 ;
-(id)initWithInviteReplyCalendar:(id)arg1 ;
-(void)clearAlertedStatus;
@end

