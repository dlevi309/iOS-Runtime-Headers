/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AVCallbackContextRegistry : NSObject {

	NSMutableDictionary* _contextsForTokens;
	unsigned long long _currentToken;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}
+(void)initialize;
+(id)sharedCallbackContextRegistry;
-(id)init;
-(void)dealloc;
-(void*)registerCallbackContextObject:(id)arg1 ;
-(void)unregisterCallbackContextForToken:(void*)arg1 ;
-(id)callbackContextForToken:(void*)arg1 ;
@end

