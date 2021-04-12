/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableDictionary, NSObject;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {

	NSMutableDictionary* _requestIDToDownload;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(void)dealloc;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_cancelRequestID:(unsigned long long)arg1 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)_didFinish:(id)arg1 error:(CFErrorRef)arg2 ;
-(BOOL)_willSendRequest:(id)arg1 request:(CFURLRequestRef)arg2 redirectionResponse:(CFURLResponseRef)arg3 ;
-(void)_didReceiveResponse:(id)arg1 response:(CFURLResponseRef)arg2 ;
-(void)_didReceiveData:(id)arg1 data:(CFDataRef)arg2 ;
@end

