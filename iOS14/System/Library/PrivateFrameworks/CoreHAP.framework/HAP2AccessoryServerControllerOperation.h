/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AsynchronousOperation.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportRequestEndpoint, HAP2EncodedRequest, HAP2EncodedResponse;
@class HMFTimer, HAP2AccessoryServerController, NSString;

@interface HAP2AccessoryServerControllerOperation : HAP2AsynchronousOperation <HMFTimerDelegate> {

	BOOL _attemptedSessionRefresh;
	HMFTimer* _timer;
	HAP2AccessoryServerController* _controller;
	id<HAP2AccessoryServerEncoding> _encoding;
	id<HAP2AccessoryServerTransportCommon> _transport;
	id<HAP2AccessoryServerTransportRequestEndpoint> _endpoint;
	NSString* _mimeType;
	double _timeout;
	unsigned long long _options;
	id<HAP2EncodedRequest> _request;
	id<HAP2EncodedResponse> _response;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerDidFire:(id)arg1 ;
-(void)finish;
-(void)cancelWithError:(id)arg1 ;
-(NSString *)description;
-(void)main;
-(void)finishWithError:(id)arg1 ;
-(void)_cleanUp;
-(void)cancel;
-(void)_openTransport;
-(void)_sendRequest;
-(void)_parseResponseData:(id)arg1 ;
-(id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 request:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9 ;
@end

