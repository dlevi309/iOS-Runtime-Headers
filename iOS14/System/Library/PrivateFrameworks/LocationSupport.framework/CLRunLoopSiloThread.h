/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)initWithCurrentThread;
-(BOOL)shouldCancelThread;
-(id)init;
-(NSRunLoop *)underlyingRunLoop;
-(NSThread *)underlyingThread;
-(opaque_pthread_t*)threadId;
-(void)dealloc;
@end

