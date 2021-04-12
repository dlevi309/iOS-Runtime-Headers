/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/


@protocol OS_dispatch_queue, CRInvocationChainDelegate;
@class NSObject, NSPointerArray;

@interface CRInvocationChain : NSObject {

	NSObject*<OS_dispatch_queue> _chainedObjectsAccessQueue;
	id<CRInvocationChainDelegate> _delegate;
	NSPointerArray* _chainedObjects;

}

@property (setter=_setChainedObjects:,getter=_chainedObjects,nonatomic,retain) NSPointerArray * chainedObjects;              //@synthesize chainedObjects=_chainedObjects - In the implementation block
@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<CRInvocationChainDelegate>)delegate;
-(void)setDelegate:(id<CRInvocationChainDelegate>)arg1 ;
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(void)addChainedObject:(id)arg1 ;
-(void)_forwardInvocation:(id)arg1 ;
-(void)_accessChainedObjectsSafely:(/*^block*/id)arg1 ;
-(BOOL)_respondsToSelector:(SEL)arg1 ;
-(void)_addChainedObject:(id)arg1 ;
-(void)_enumerateChainedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isEligibleForSelector:(SEL)arg1 ;
-(id)_chainedObjects;
-(void)enumerateChainedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEligibleForSelector:(SEL)arg1 ;
-(void)_setChainedObjects:(id)arg1 ;
@end

