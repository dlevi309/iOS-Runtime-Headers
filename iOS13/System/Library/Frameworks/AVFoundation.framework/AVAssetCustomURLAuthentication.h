/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject;

@interface AVAssetCustomURLAuthentication : NSObject {

	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)copyKeychainCredentialForUrl:(id)arg1 ;
+(int)sendAuthResponse:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(OpaqueFigCustomURLHandlerRef)arg5 ;
-(void)dealloc;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(int)_handleAuthChallenge:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char*)arg3 ;
@end

