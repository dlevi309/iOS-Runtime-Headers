/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSSoftwareUpdatesStore : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	SSXPCConnection* _connection;
	BOOL _didMigration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	void* _mobileCoreServices;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}
-(id)init;
-(void)dealloc;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
@end

