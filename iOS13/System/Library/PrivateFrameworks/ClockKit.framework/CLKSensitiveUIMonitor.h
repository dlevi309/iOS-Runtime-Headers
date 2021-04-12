/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSHashTable;

@interface CLKSensitiveUIMonitor : NSObject {

	NSHashTable* _observers;
	int _notifyToken;
	BOOL _hideSensitiveUI;
	BOOL _needPrefsUpdate;
	os_unfair_lock_s _observerLock;
	os_unfair_lock_s _prefsLock;

}
+(id)sharedMonitor;
-(id)init;
-(BOOL)_isVendorRelease;
-(void)addSensitiveUIObserver:(id)arg1 ;
-(void)removeSensitiveUIObserver:(id)arg1 ;
-(BOOL)shouldHideForSensitivity:(long long)arg1 ;
-(BOOL)hideSensitiveUISwitchEnabled;
@end

