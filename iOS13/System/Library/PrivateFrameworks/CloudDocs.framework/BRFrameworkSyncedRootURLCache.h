/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * syncedRootURLs; 
-(id)init;
-(void)dealloc;
-(NSArray *)syncedRootURLs;
-(void)_accountWillChange;
-(void)registerForSyncedLocationsChangesNotifications;
-(void)_fetchSyncedRootURLs;
@end

