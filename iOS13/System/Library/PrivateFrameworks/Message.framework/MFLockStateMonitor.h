/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol OS_dispatch_queue, EFObserver;
@class NSObject, EFObservable;

@interface MFLockStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	EFObservable*<EFObserver> _observable;
	BOOL _isLocked;

}

@property (nonatomic,readonly) EFObservable * lockStateObservable; 
@property (getter=isLocked,readonly) BOOL locked; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isLocked;
-(EFObservable *)lockStateObservable;
-(void)_receiveLockState:(BOOL)arg1 ;
@end

