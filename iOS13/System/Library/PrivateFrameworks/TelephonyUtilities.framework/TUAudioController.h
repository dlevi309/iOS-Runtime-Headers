/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface TUAudioController : NSObject {

	NSObject*<OS_dispatch_semaphore> _modifyingStateLock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> modifyingStateLock;              //@synthesize modifyingStateLock=_modifyingStateLock - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_semaphore>)modifyingStateLock;
-(void)setModifyingStateLock:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)_acquireLock;
-(void)_releaseLock;
-(void)_requestUpdatedValueWithBlock:(/*^block*/id)arg1 object:(id*)arg2 isRequestingPointer:(BOOL*)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7 ;
@end

