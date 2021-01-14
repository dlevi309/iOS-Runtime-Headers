/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDClipServiceBroker.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface ASDServiceBroker : NSObject <ASDClipServiceBroker> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _machServiceName;
	int _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newBrokerForMachServiceName:(id)arg1 ;
+(id)interface;
+(id)machServiceName;
+(id)defaultBroker;
-(id)getPurchaseServiceWithError:(id*)arg1 ;
-(void)_connect;
-(void)getCrossfireServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getRepairServiceWithError:(id*)arg1 ;
-(void)getDiagnosticServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getDiagnosticServiceWithError:(id*)arg1 ;
-(void)getClipServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPurchaseHistoryServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getPurchaseHistoryServiceWithError:(id*)arg1 ;
-(void)getIAPHistoryServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getUpdatesServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAppStoreServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getTestFlightFeedbackServiceWithError:(id*)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)getClipServiceWithError:(id*)arg1 ;
-(id)getLibraryServiceWithError:(id*)arg1 ;
-(void)getPurchaseServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getRepairServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getManagedAppServiceWithError:(id*)arg1 ;
-(id)getInstallAttributionServiceWithError:(id*)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)getInstallationServiceWithError:(id*)arg1 ;
-(void)getTestFlightFeedbackServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getIAPHistoryServiceWithError:(id*)arg1 ;
-(void)getOcelotServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getUpdatesServiceWithError:(id*)arg1 ;
-(void)getPersonalizationServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getInstallationServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getLibraryServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getManagedAppServiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)getInstallAttributionServiceWithCompletionHandler:(/*^block*/id)arg1 ;
@end

