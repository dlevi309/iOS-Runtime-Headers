/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)defaultService;
+(id)interface;
-(id)initWithServiceBroker:(id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)activeClientsWithError:(id*)arg1 ;
-(BOOL)pingWithError:(id*)arg1 ;
-(BOOL)sendCommand:(long long)arg1 withError:(id*)arg2 ;
-(id)sendDetailsCommand:(long long)arg1 withError:(id*)arg2 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

