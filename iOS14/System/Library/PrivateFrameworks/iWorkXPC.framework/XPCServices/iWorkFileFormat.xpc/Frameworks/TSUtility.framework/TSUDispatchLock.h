/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUDispatchLock : NSObject {

	NSObject*<OS_dispatch_queue> _underlyingQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> underlyingQueue;              //@synthesize underlyingQueue=_underlyingQueue - In the implementation block
-(id)init;
-(id)initWithLabel:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)performSynchronousRead:(/*^block*/id)arg1 ;
-(void)performAsynchronousRead:(/*^block*/id)arg1 ;
-(void)performSynchronousWrite:(/*^block*/id)arg1 ;
-(void)performAsynchronousWrite:(/*^block*/id)arg1 ;
-(void)assertHasReadLock;
-(void)assertHasWriteLock;
@end

