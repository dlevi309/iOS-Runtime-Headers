/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject;

@interface AVAssetCustomURLAuthentication : NSObject {

	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)copyKeychainCredentialForUrl:(id)arg1 ;
+(int)sendAuthResponse:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(OpaqueFigCustomURLHandlerRef)arg5 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(int)_handleAuthChallenge:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char*)arg3 ;
-(void)dealloc;
@end

