/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNSharedCalendarInvitationNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CALNSourceEventRepresentationProvider;
@class NSString, NSArray;

@interface CALNSharedCalendarInvitationNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNSharedCalendarInvitationNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;

}

@property (nonatomic,readonly) id<CALNSharedCalendarInvitationNotificationDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;                            //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;              //@synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)declineActionIdentifier;
+(id)reportJunkActionIdentifier;
+(id)joinActionIdentifier;
+(id)categoryIdentifierWithoutReportJunk;
+(id)categoryIdentifierWithReportJunk;
-(void)didReceiveResponse:(id)arg1 ;
-(NSArray *)categories;
-(id<CALNSharedCalendarInvitationNotificationDataSource>)dataSource;
-(id<CALNNotificationManager>)notificationManager;
-(id<CALNSourceEventRepresentationProvider>)sourceEventRepresentationProvider;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 ;
-(void)refreshNotifications:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

