/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SUScriptObject *)rootObject;
-(void)setRootObject:(SUScriptObject *)arg1 ;
-(void)dealloc;
-(void)checkOutBatchTarget:(id)arg1 ;
-(id)copyQueuedInvocationsForObject:(id)arg1 ;
-(id)batchProxyForObject:(id)arg1 ;
-(void)dequeueInvocations;
-(void)_delayedDequeueInvocations;
-(void)enqueueInvocation:(id)arg1 ;
@end

