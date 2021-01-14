/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)interface;
+(id)defaultService;
-(id)initWithServiceBroker:(id)arg1 ;
-(void)addSubscriberWithEndpoint:(id)arg1 ;
-(id)activeClientsWithError:(id*)arg1 ;
-(id)sendDetailsCommand:(long long)arg1 timeout:(id)arg2 withError:(id*)arg3 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)pingWithError:(id*)arg1 ;
-(BOOL)sendCommand:(long long)arg1 withError:(id*)arg2 ;
-(id)sendDetailsCommand:(long long)arg1 withError:(id*)arg2 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

