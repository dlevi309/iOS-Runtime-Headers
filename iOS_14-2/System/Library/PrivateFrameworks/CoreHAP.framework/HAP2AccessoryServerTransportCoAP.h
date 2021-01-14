/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerTransportBaseWithDelegate.h>
#import <libobjc.A.dylib/HAP2CoAPClientDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerTransportNetServiceDelegate.h>

@protocol HAP2AccessoryServerTransportNetService, HAP2CoAPClient, HAP2AccessoryServerDiscovery, HAP2AccessoryServerTransportNetServiceFactory, HAP2AccessoryServerTransportCoAPClientFactory;
@class HMFActivity, NSString, HAP2AccessoryServerDiscoveryAccessoryInfo;

@interface HAP2AccessoryServerTransportCoAP : HAP2AccessoryServerTransportBaseWithDelegate <HAP2CoAPClientDelegate, HAP2AccessoryServerTransportNetServiceDelegate> {

	/*^block*/id _stateChangeCompletion;
	/*^block*/id _sendRequestCompletion;
	id<HAP2AccessoryServerTransportNetService> _netService;
	HMFActivity* _netServiceResolveActivity;
	id<HAP2CoAPClient> _coapClient;
	unsigned long long _maxTransmitAttempts;
	double _initialACKTimeout;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	id<HAP2AccessoryServerDiscovery> _discovery;
	HAP2AccessoryServerDiscoveryAccessoryInfo* _acessoryInfo;
	double _addressResolutionTimeout;
	id<HAP2AccessoryServerTransportNetServiceFactory> _netServiceFactory;
	id<HAP2AccessoryServerTransportCoAPClientFactory> _coapClientFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg1 error:(id)arg2 ;
-(unsigned long long)protocolFeaturesForVersion:(id)arg1 ;
-(id)wellKnownEndpoint:(unsigned long long)arg1 ;
-(id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1 ;
-(void)doOpenWithCompletion:(/*^block*/id)arg1 ;
-(void)doCloseWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doUpdateMaxRequestTimeout:(double)arg1 ;
-(void)doSendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)endpointForCharacteristic:(id)arg1 ;
-(id)endpointForCharacteristics:(id)arg1 ;
-(id)mimeTypeForCharacteristicRequests;
-(BOOL)mergeWithNewTransport:(id)arg1 ;
-(id)underlyingTransport;
-(id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 ;
-(void)client:(id)arg1 didReceiveEvent:(id)arg2 ;
-(id)initWithAccessoryInfo:(id)arg1 discovery:(id)arg2 operationQueue:(id)arg3 ;
-(id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5 addressResolutionTimeout:(double)arg6 discovery:(id)arg7 accessoryInfo:(id)arg8 coapClient:(id)arg9 netServiceFactory:(id)arg10 coapClientFactory:(id)arg11 ;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 operationQueue:(id)arg4 ;
@end

