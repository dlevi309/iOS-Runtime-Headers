/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
*/


@class NSXPCConnection;

@interface INDaemonConnection : NSObject {

	NSXPCConnection* _connection;

}
-(id)init;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)commonHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)presentHiddenFreshmintWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyDeviceStorageLevel:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2 ;
-(void)unregisterAccount:(id)arg1 fromiCloudNotificationsWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)clearAllRegistrationDigestsWithError:(id*)arg1 ;
-(id)diagnosticReport;
-(void)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

