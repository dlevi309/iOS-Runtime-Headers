/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AFMultiUserConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _targetQueue;

}
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_clearConnection;
-(void)getHomeUserIdForSharedUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSharedUserIdForHomeUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConformingSharedUserIds:(/*^block*/id)arg1 ;
-(id)_multiUserServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)getSharedUserProfileLimitWithCompletion:(/*^block*/id)arg1 ;
@end

