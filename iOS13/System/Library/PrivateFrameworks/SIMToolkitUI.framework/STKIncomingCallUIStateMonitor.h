/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
@class NSHashTable, BSTimer;

@interface STKIncomingCallUIStateMonitor : NSObject {

	os_unfair_lock_s _observersLock;
	NSHashTable* _observersLock_observers;
	BSTimer* _fallbackTimer;
	os_unfair_lock_s _lock;
	BOOL _lock_showingIncomingCallUI;
	int _inCallAlertVisibleNotifyToken;
	BOOL _isShowingIncomingCallUI;

}

@property (assign,nonatomic) BOOL isShowingIncomingCallUI;              //@synthesize isShowingIncomingCallUI=_isShowingIncomingCallUI - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_refreshState;
-(BOOL)isShowingIncomingCallUI;
-(void)_setIncomingCallUIState:(BOOL)arg1 forReason:(id)arg2 ;
-(double)_fallbackTimerDuration;
-(void)setIsShowingIncomingCallUI:(BOOL)arg1 ;
@end

