/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUSleepWakeMonitor : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _powerCnx;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotifier;
	unsigned _sleepWakeFlags;
	int _sleepWakeState;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _sleepWakeHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id sleepWakeHandler;                                       //@synthesize sleepWakeHandler=_sleepWakeHandler - In the implementation block
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)_ensureStarted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sleepWakeHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setSleepWakeHandler:(id)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)_sleepWakeHandlerForService:(unsigned)arg1 type:(unsigned)arg2 arg:(void*)arg3 ;
-(void)dealloc;
-(void)_ensureStopped;
@end

