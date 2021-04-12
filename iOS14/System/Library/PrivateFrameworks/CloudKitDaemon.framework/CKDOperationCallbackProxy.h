/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKOperationCallbacks.h>

@protocol CKOperationCallbacks;
@class Protocol;

@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks> {

	id<CKOperationCallbacks> _clientOperationCallbackProxy;
	Protocol* _callbackProtocol;

}

@property (nonatomic,retain) id<CKOperationCallbacks> clientOperationCallbackProxy;              //@synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy - In the implementation block
@property (nonatomic,retain) Protocol * callbackProtocol;                                        //@synthesize callbackProtocol=_callbackProtocol - In the implementation block
-(Protocol *)callbackProtocol;
-(id)initWithClientOperationCallbackProxy:(id)arg1 callbackProtocol:(id)arg2 ;
-(id<CKOperationCallbacks>)clientOperationCallbackProxy;
-(void)setCallbackProtocol:(Protocol *)arg1 ;
-(void)setClientOperationCallbackProxy:(id<CKOperationCallbacks>)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

