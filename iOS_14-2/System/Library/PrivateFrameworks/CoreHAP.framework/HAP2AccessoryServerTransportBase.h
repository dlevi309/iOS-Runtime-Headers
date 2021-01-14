/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerTransportCommon.h>

@protocol OS_dispatch_queue;
@class HAP2AccessoryServerTransportBaseOperationClose, HAP2PropertyLock, HAP2SerializedOperationQueue, NSObject, NSString;

@interface HAP2AccessoryServerTransportBase : HAP2LoggingObject <HAP2AccessoryServerTransportCommon> {

	unsigned long long _internalState;
	HAP2AccessoryServerTransportBaseOperationClose* _queuedCloseOperation;
	double _maxRequestTimeout;
	HAP2PropertyLock* _propertyLock;
	HAP2SerializedOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                         //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) double maxRequestTimeout;                                                  //@synthesize maxRequestTimeout=_maxRequestTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) id<HAP2AccessoryServerTransportCommon> underlyingTransport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(HAP2SerializedOperationQueue *)operationQueue;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HAP2PropertyLock *)propertyLock;
-(unsigned long long)state;
-(unsigned long long)protocolFeaturesForVersion:(id)arg1 ;
-(void)sendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)closeWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMaxRequestTimeout:(double)arg1 ;
-(void)openWithCompletion:(/*^block*/id)arg1 ;
-(id)wellKnownEndpoint:(unsigned long long)arg1 ;
-(id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1 ;
-(void)doOpenWithCompletion:(/*^block*/id)arg1 ;
-(void)doCloseWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doUpdateMaxRequestTimeout:(double)arg1 ;
-(void)setMaxRequestTimeout:(double)arg1 ;
-(void)didChangeStateWithError:(id)arg1 ;
-(void)doSendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)endpointForCharacteristic:(id)arg1 ;
-(id)endpointForCharacteristics:(id)arg1 ;
-(id)mimeTypeForCharacteristicRequests;
-(BOOL)mergeWithNewTransport:(id)arg1 ;
-(double)maxRequestTimeout;
-(id<HAP2AccessoryServerTransportCommon>)underlyingTransport;
-(id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 ;
-(void)didDisconnectWithError:(id)arg1 ;
@end

