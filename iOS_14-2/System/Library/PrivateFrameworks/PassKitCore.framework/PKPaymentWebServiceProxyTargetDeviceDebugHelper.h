/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class PKPaymentWebService, NSXPCListener, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebServiceRemoteProxyTargetDevice, NSString;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate> {

	PKPaymentWebService* _webService;
	NSXPCListener* _remoteListener;
	PKPaymentWebServiceLocalProxyTargetDevice* _localTarget;
	PKPaymentWebServiceRemoteProxyTargetDevice* _remoteTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webServiceWithProxiedTargetDevice:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithWebService:(id)arg1 ;
-(id)localProxyTargetDevice;
-(void)dealloc;
@end

