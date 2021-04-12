/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSMutableArray, NSLock, SUScriptObject;

@interface SUScriptObjectInvocationBatch : NSObject {

	NSMutableArray* _invocationQueue;
	NSLock* _lock;
	CFDictionaryRef _proxies;
	SUScriptObject* _rootObject;

}

@property (assign) SUScriptObject * rootObject; 
-(id)init;
-(void)dealloc;
-(void)setRootObject:(SUScriptObject *)arg1 ;
-(SUScriptObject *)rootObject;
-(void)checkOutBatchTarget:(id)arg1 ;
-(id)copyQueuedInvocationsForObject:(id)arg1 ;
-(id)batchProxyForObject:(id)arg1 ;
-(void)dequeueInvocations;
-(void)_delayedDequeueInvocations;
-(void)enqueueInvocation:(id)arg1 ;
@end

