/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OspreyRPC;
@class NSString;

@interface OspreyMethodCall : NSObject {

	NSString* _methodName;
	id<OspreyRPC> _channel;
	/*^block*/id _serializeRequest;
	/*^block*/id _deserializeResponse;
	/*^block*/id _defaultRequestBuilder;

}
-(id)callWithRequestBuilder:(/*^block*/id)arg1 messageReceived:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMethodName:(id)arg1 channel:(id)arg2 serializeRequest:(/*^block*/id)arg3 deserializeResponse:(/*^block*/id)arg4 defaultRequestBuilder:(/*^block*/id)arg5 ;
-(id)callWithMessageReceived:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

