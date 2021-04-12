/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface ASDServiceBroker : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _machServiceName;
	int _token;

}
+(id)interface;
+(id)machServiceName;
+(id)defaultBroker;
+(id)newBrokerForMachServiceName:(id)arg1 ;
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)_connect;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)getOcelotServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getLibraryServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getLibraryServiceWithError:(id*)arg1 ;
-(id)getTestFlightFeedbackServiceWithError:(id*)arg1 ;
-(void)getTestFlightFeedbackServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getIAPHistoryServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCrossfireServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getDiagnosticServiceWithError:(id*)arg1 ;
-(void)getDiagnosticServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getIAPHistoryServiceWithError:(id*)arg1 ;
-(id)getInstallationServiceWithError:(id*)arg1 ;
-(void)getInstallationServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPersonalizationServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getPurchaseHistoryServiceWithError:(id*)arg1 ;
-(void)getPurchaseHistoryServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getPurchaseServiceWithError:(id*)arg1 ;
-(void)getPurchaseServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getUpdatesServiceWithError:(id*)arg1 ;
-(id)getRepairServiceWithError:(id*)arg1 ;
-(void)getRepairServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getUpdatesServiceWithCompletionHandler:(/*^block*/id)arg1 ;
@end

