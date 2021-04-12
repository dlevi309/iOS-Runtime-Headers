/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPostTaskDelegate.h>

@class NSURL, CalDAVCalendarServerInviteNotificationItem, NSString;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	BOOL _acceptInvitation;
	NSURL* _sharedAs;
	CalDAVCalendarServerInviteNotificationItem* _invitation;
	NSURL* _calendarHomeURL;

}

@property (nonatomic,retain) CalDAVCalendarServerInviteNotificationItem * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL acceptInvitation;                                                //@synthesize acceptInvitation=_acceptInvitation - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                              //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (nonatomic,retain) NSURL * sharedAs;                                                     //@synthesize sharedAs=_sharedAs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)acceptInvitation;
-(CalDAVCalendarServerInviteNotificationItem *)invitation;
-(void)setInvitation:(CalDAVCalendarServerInviteNotificationItem *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(NSURL *)calendarHomeURL;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)setAcceptInvitation:(BOOL)arg1 ;
-(id)generateReply;
-(void)setSharedAs:(NSURL *)arg1 ;
-(id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(NSURL *)sharedAs;
@end

