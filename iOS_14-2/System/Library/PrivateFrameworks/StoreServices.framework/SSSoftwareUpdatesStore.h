/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeUpdateBulletins;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)showApplicationBadgeForPendingUpdates;
-(id)init;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

