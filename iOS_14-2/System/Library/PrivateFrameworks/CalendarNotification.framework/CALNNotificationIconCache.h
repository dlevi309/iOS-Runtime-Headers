/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNIconCache.h>

@protocol CALNNotificationIconProvider, OS_dispatch_queue;
@class NSObject, NSString;

@interface CALNNotificationIconCache : NSObject <CALNIconCache> {

	id<CALNNotificationIconProvider> _notificationIconProvider;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<CALNNotificationIconProvider> notificationIconProvider;              //@synthesize notificationIconProvider=_notificationIconProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pathForCachedIconWithIdentifier:(id)arg1 ;
+(id)_iconCacheDirectory;
+(id)pathForCachedIconWithIdentifier:(id)arg1 ;
+(id)iconCacheDirectory;
-(BOOL)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2 ;
-(BOOL)_createCacheDirectoryIfNeeded;
-(id)initWithNotificationIconProvider:(id)arg1 ;
-(BOOL)removeIconWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id<CALNNotificationIconProvider>)notificationIconProvider;
-(BOOL)forceRemoveAllCachedIconsWithError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)cachedIconPathForIconIdentifier:(id)arg1 ;
-(id)iconIdentifierForCachedIconPath:(id)arg1 ;
@end

