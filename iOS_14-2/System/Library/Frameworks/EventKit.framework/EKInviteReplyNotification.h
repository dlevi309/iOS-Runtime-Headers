/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sourceForInviteReplyNotification:(id)arg1 ;
+(id)knownRelationshipSingleValueKeys;
+(Class)frozenClass;
-(BOOL)validate:(id*)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)alerted;
-(NSDate *)creationDate;
-(NSString *)summary;
-(unsigned long long)shareeStatus;
-(NSString *)calendarName;
-(NSString *)shareeDisplayName;
-(NSString *)shareeEmailAddress;
-(NSString *)shareePhoneNumber;
-(EKCalendar *)inviteReplyCalendar;
-(NSString *)inReplyTo;
-(void)setSummary:(NSString *)arg1 ;
-(void)_setInviteReplyCalendar:(id)arg1 ;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(id)initWithInviteReplyCalendar:(id)arg1 ;
-(void)setInReplyTo:(NSString *)arg1 ;
-(void)setShareeDisplayName:(NSString *)arg1 ;
-(void)setShareeFirstName:(NSString *)arg1 ;
-(void)setShareeLastName:(NSString *)arg1 ;
-(void)setShareeURL:(NSURL *)arg1 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(void)clearAlertedStatus;
-(NSURL *)shareeURL;
@end

