/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNIconIdentifierVersionProvider, CALNNotificationStorage, CALNIconCache, CALNNotificationManager;
@interface CALNNotificationIconUpdater : NSObject {

	id<CALNIconIdentifierVersionProvider> _identifierVersionProvider;
	id<CALNNotificationStorage> _protectedStorage;
	id<CALNIconCache> _iconCache;
	id<CALNNotificationManager> _notificationServer;

}

@property (nonatomic,readonly) id<CALNIconIdentifierVersionProvider> identifierVersionProvider;              //@synthesize identifierVersionProvider=_identifierVersionProvider - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationStorage> protectedStorage;                                 //@synthesize protectedStorage=_protectedStorage - In the implementation block
@property (nonatomic,readonly) id<CALNIconCache> iconCache;                                                  //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationManager> notificationServer;                               //@synthesize notificationServer=_notificationServer - In the implementation block
-(id<CALNIconCache>)iconCache;
-(id<CALNIconIdentifierVersionProvider>)identifierVersionProvider;
-(void)_updateAllIconIdentifiersInStorage:(id)arg1 ;
-(id<CALNNotificationStorage>)protectedStorage;
-(id<CALNNotificationManager>)notificationServer;
-(id)initWithIconIdentifierVersionProvider:(id)arg1 protectedNotificationStorage:(id)arg2 iconCache:(id)arg3 notificationServer:(id)arg4 ;
-(void)updateIconsToNewVersionIfNeeded;
@end

