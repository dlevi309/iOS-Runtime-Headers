/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AFMultiUserConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _targetQueue;

}
-(void)getSharedUserIdForHomeUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)getFirstNameForSharedUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConformingSharedUserIds:(/*^block*/id)arg1 ;
-(void)_clearConnection;
-(void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_connection;
-(void)getMultiUserSettingsForSharedUserID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSharedUserProfileLimitWithCompletion:(/*^block*/id)arg1 ;
-(void)getHomeUserIdForSharedUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_multiUserServiceWithErrorHandler:(/*^block*/id)arg1 ;
@end

