/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSRemoteCredential : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	BOOL _wantsRetries;

}

@property (assign,nonatomic) BOOL wantsRetries;              //@synthesize wantsRetries=_wantsRetries - In the implementation block
-(void)dealloc;
-(void)_disconnected;
-(BOOL)_disconnect;
-(BOOL)_connect;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(BOOL)arg3 allowQuery:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)wantsRetries;
-(void)setWantsRetries:(BOOL)arg1 ;
@end

