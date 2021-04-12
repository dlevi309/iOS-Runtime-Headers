/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <Foundation/NSProxy.h>

@protocol RTTransientObjectProtocol;
@class RTTimer, RTTimerManager, NSRecursiveLock;

@interface RTTransientObject : NSProxy {

	id<RTTransientObjectProtocol> _transientObjectDelegate;
	/*^block*/id _backingObjectCreationBlock;
	id _backingObject;
	double _backingObjectExpirationTimeInterval;
	RTTimer* _backingObjectExpirationTimer;
	RTTimerManager* _timerManager;
	NSRecursiveLock* _lock;
	double _lastForwardedMessageTimeInterval;

}

@property (nonatomic,copy) id backingObjectCreationBlock;                                               //@synthesize backingObjectCreationBlock=_backingObjectCreationBlock - In the implementation block
@property (nonatomic,retain) id backingObject;                                                          //@synthesize backingObject=_backingObject - In the implementation block
@property (assign,nonatomic) double backingObjectExpirationTimeInterval;                                //@synthesize backingObjectExpirationTimeInterval=_backingObjectExpirationTimeInterval - In the implementation block
@property (nonatomic,retain) RTTimer * backingObjectExpirationTimer;                                    //@synthesize backingObjectExpirationTimer=_backingObjectExpirationTimer - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                                             //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) double lastForwardedMessageTimeInterval;                                   //@synthesize lastForwardedMessageTimeInterval=_lastForwardedMessageTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) id<RTTransientObjectProtocol> transientObjectDelegate;              //@synthesize transientObjectDelegate=_transientObjectDelegate - In the implementation block
-(id<RTTransientObjectProtocol>)transientObjectDelegate;
-(id)__createBackingObject;
-(void)setBackingObjectExpirationTimeInterval:(double)arg1 ;
-(void)touch;
-(id)initWithCreationBlock:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(NSRecursiveLock *)lock;
-(id)initWithCreationBlock:(/*^block*/id)arg1 timeout:(double)arg2 timerManager:(id)arg3 ;
-(id)backingObjectCreationBlock;
-(void)__createTimerAssociatedWithBackingObject;
-(void)setBackingObjectExpirationTimer:(RTTimer *)arg1 ;
-(void)setBackingObjectCreationBlock:(id)arg1 ;
-(double)lastForwardedMessageTimeInterval;
-(RTTimer *)backingObjectExpirationTimer;
-(double)backingObjectExpirationTimeInterval;
-(RTTimerManager *)timerManager;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)__invalidateBackingObject;
-(void)__handleBackingObjectTimerExpired;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(void)setBackingObject:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)backingObject;
-(void)setLastForwardedMessageTimeInterval:(double)arg1 ;
-(void)setTransientObjectDelegate:(id<RTTransientObjectProtocol>)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

