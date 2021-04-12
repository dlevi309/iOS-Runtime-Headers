/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNEventCanceledNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CalDateProvider;
@class NSString, NSArray;

@interface CALNEventCanceledNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNEventCanceledNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNEventCanceledNotificationDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                     //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;              //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                           //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteActionIdentifier;
-(void)didReceiveResponse:(id)arg1 ;
-(NSArray *)categories;
-(id<CALNEventCanceledNotificationDataSource>)dataSource;
-(id<CALNNotificationManager>)notificationManager;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id*)arg2 summaryArgument:(id*)arg3 ;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 dateProvider:(id)arg4 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(id)_categoryIdentifier;
-(id<CalDateProvider>)dateProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

