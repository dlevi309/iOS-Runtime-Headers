/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(double)_fallbackTimerDuration;
-(void)_refreshState;
-(BOOL)isShowingIncomingCallUI;
-(void)setIsShowingIncomingCallUI:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_setIncomingCallUIState:(BOOL)arg1 forReason:(id)arg2 ;
@end

