/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNIconIdentifierVersionProvider, CALNNotificationStorage, CALNIconCache, CALNCalendarIconIdentifierProvider, CALNNotificationManager;
@interface CALNNotificationIconUpdater : NSObject {

	id<CALNIconIdentifierVersionProvider> _identifierVersionProvider;
	id<CALNNotificationStorage> _protectedStorage;
	id<CALNIconCache> _iconCache;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CALNNotificationManager> _notificationManager;

}

@property (nonatomic,readonly) id<CALNIconIdentifierVersionProvider> identifierVersionProvider;              //@synthesize identifierVersionProvider=_identifierVersionProvider - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationStorage> protectedStorage;                                 //@synthesize protectedStorage=_protectedStorage - In the implementation block
@property (nonatomic,readonly) id<CALNIconCache> iconCache;                                                  //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;                //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationManager> notificationManager;                              //@synthesize notificationManager=_notificationManager - In the implementation block
-(id)initWithIconIdentifierVersionProvider:(id)arg1 protectedNotificationStorage:(id)arg2 iconCache:(id)arg3 iconIdentifierProvider:(id)arg4 notificationManager:(id)arg5 ;
-(void)updateIconsToNewVersionIfNeeded;
-(id<CALNNotificationManager>)notificationManager;
-(id<CALNIconCache>)iconCache;
-(id<CALNNotificationStorage>)protectedStorage;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(void)_updateAllIconIdentifiersInStorage:(id)arg1 ;
-(id<CALNIconIdentifierVersionProvider>)identifierVersionProvider;
@end

