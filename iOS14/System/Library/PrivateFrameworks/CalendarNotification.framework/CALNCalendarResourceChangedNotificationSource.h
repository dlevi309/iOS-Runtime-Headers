/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNCalendarResourceChangedNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CALNSourceEventRepresentationProvider, CalDateProvider;
@class NSString, NSArray;

@interface CALNCalendarResourceChangedNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNCalendarResourceChangedNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNCalendarResourceChangedNotificationDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;                            //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;              //@synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                                         //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveResponse:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 dateProvider:(id)arg5 ;
-(NSArray *)categories;
-(id<CALNCalendarResourceChangedNotificationDataSource>)dataSource;
-(id<CALNNotificationManager>)notificationManager;
-(id<CALNSourceEventRepresentationProvider>)sourceEventRepresentationProvider;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(id<CalDateProvider>)dateProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

