/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_connect;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)_disconnect;
-(void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(BOOL)arg3 allowQuery:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)wantsRetries;
-(void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_disconnected;
-(void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setWantsRetries:(BOOL)arg1 ;
-(void)dealloc;
@end

