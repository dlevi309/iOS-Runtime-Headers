/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocked;
-(id)init;
-(EFObservable *)lockStateObservable;
-(void)_receiveLockState:(BOOL)arg1 ;
-(void)dealloc;
@end

