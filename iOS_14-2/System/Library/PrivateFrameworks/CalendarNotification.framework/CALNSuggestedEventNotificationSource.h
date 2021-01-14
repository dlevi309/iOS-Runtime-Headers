/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNSuggestedEventNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider;
@class NSString, NSArray;

@interface CALNSuggestedEventNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNSuggestedEventNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;

}

@property (nonatomic,readonly) id<CALNSuggestedEventNotificationDataSource> dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                     //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;              //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)coalescedSuggestedEventCategoryIdentifier;
+(id)ignoreActionIdentifier;
+(id)_bundle;
+(id)defaultSuggestedEventCategoryIdentifier;
+(id)confirmActionIdentifier;
+(id)suggestedEventCanceledCategoryIdentifier;
+(id)deleteActionIdentifier;
-(void)didReceiveResponse:(id)arg1 ;
-(NSArray *)categories;
-(id<CALNSuggestedEventNotificationDataSource>)dataSource;
-(id<CALNNotificationManager>)notificationManager;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 ;
-(id)_sourceClientIdentifiersForObjectIDs:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

