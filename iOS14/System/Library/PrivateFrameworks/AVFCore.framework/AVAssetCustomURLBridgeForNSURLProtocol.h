/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSMutableDictionary, NSObject;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {

	NSMutableDictionary* _requestIDToDownload;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(void)_didFinish:(id)arg1 error:(CFErrorRef)arg2 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_didReceiveResponse:(id)arg1 response:(CFURLResponseRef)arg2 ;
-(void)_didReceiveData:(id)arg1 data:(CFDataRef)arg2 ;
-(BOOL)_willSendRequest:(id)arg1 request:(CFURLRequestRef)arg2 redirectionResponse:(CFURLResponseRef)arg3 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)_cancelRequestID:(unsigned long long)arg1 ;
@end

