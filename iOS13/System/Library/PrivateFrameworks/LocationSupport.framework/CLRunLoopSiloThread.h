/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


#import <LocationSupport/LocationSupport-Structs.h>
@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject {

	opaque_pthread_t* _threadId;
	NSRunLoop* _underlyingRunLoop;
	NSThread* _underlyingThread;
	BOOL _shouldCancelThread;

}

@property (nonatomic,readonly) opaque_pthread_t* threadId;                 //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) NSRunLoop * underlyingRunLoop;              //@synthesize underlyingRunLoop=_underlyingRunLoop - In the implementation block
@property (nonatomic,readonly) NSThread * underlyingThread;                //@synthesize underlyingThread=_underlyingThread - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancelThread;                    //@synthesize shouldCancelThread=_shouldCancelThread - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)initWithCurrentThread;
-(opaque_pthread_t*)threadId;
-(NSRunLoop *)underlyingRunLoop;
-(NSThread *)underlyingThread;
-(BOOL)shouldCancelThread;
@end

