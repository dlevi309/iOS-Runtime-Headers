/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDMessageServicesCenter : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_disconnected;
-(BOOL)_disconnect;
-(BOOL)_connect;
-(void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 handler:(/*^block*/id)arg4 ;
-(void)_requestExpireStateWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestWatchdogWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestRoutingWithCompletion:(/*^block*/id)arg1 ;
-(void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)requestExpireStateWithCompletion:(/*^block*/id)arg1 ;
-(void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestWatchdogWithCompletion:(/*^block*/id)arg1 ;
-(void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

