/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSDServiceBrokerProtocol;
@interface AMSSigningSecurityService : NSObject {

	id<AMSDServiceBrokerProtocol> _serviceBroker;

}

@property (nonatomic,readonly) id<AMSDServiceBrokerProtocol> serviceBroker;              //@synthesize serviceBroker=_serviceBroker - In the implementation block
-(id<AMSDServiceBrokerProtocol>)serviceBroker;
-(id)init;
-(id)initWithServiceBroker:(id)arg1 ;
-(id)_headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 securityServicePromise:(id)arg4 onDenied:(/*^block*/id)arg5 ;
-(id)signatureForRequest:(id)arg1 ;
-(id)_defaultSecurityServiceWithDelegate:(id)arg1 ;
-(void)_handleSecurityServicePromise:(id)arg1 onConnected:(/*^block*/id)arg2 onDenied:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
-(id)_handleResponse:(id)arg1 bag:(id)arg2 securityServicePromise:(id)arg3 onDenied:(/*^block*/id)arg4 ;
-(id)handleResponse:(id)arg1 bag:(id)arg2 ;
@end

