/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
*/


@class NSXPCConnection;

@interface INDaemonConnection : NSObject {

	NSXPCConnection* _connection;

}
-(id)init;
-(void)dealloc;
-(void)presentHiddenFreshmintWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)commonHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyDeviceStorageLevel:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2 ;
-(void)unregisterAccount:(id)arg1 fromiCloudNotificationsWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)clearAllRegistrationDigestsWithError:(id*)arg1 ;
-(id)diagnosticReport;
-(void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

