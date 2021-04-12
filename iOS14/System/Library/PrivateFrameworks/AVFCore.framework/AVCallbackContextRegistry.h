/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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
-(void)unregisterCallbackContextForToken:(void*)arg1 ;
-(id)callbackContextForToken:(void*)arg1 ;
-(void*)registerCallbackContextObject:(id)arg1 ;
-(void)dealloc;
@end

