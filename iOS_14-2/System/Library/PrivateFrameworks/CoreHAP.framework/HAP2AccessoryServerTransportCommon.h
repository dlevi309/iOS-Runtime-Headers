/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerTransportCommon <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double maxRequestTimeout; 
@property (nonatomic,readonly) id<HAP2AccessoryServerTransportCommon> underlyingTransport; 
@required
-(unsigned long long)state;
-(unsigned long long)protocolFeaturesForVersion:(id)arg1;
-(void)sendRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)closeWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateMaxRequestTimeout:(double)arg1;
-(void)openWithCompletion:(/*^block*/id)arg1;
-(id)wellKnownEndpoint:(unsigned long long)arg1;
-(id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
-(id)endpointForCharacteristic:(id)arg1;
-(id)endpointForCharacteristics:(id)arg1;
-(id)mimeTypeForCharacteristicRequests;
-(BOOL)mergeWithNewTransport:(id)arg1;
-(double)maxRequestTimeout;
-(id<HAP2AccessoryServerTransportCommon>)underlyingTransport;

@end

