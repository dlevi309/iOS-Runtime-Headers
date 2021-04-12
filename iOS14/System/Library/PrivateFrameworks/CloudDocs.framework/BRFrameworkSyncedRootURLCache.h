/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <libobjc.A.dylib/BRSyncedRootURLCache.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {

	int _syncedLocationsChangedNotificationToken;
	NSArray* _syncedRootURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,readonly) NSArray * syncedRootURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)syncedRootURLs;
-(void)_accountWillChange;
-(void)registerForSyncedLocationsChangesNotifications;
-(void)_fetchSyncedRootURLs;
-(void)dealloc;
@end

