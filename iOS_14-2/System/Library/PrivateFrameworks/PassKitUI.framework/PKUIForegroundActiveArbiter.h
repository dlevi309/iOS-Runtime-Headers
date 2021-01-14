/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiter.h>

@protocol OS_dispatch_source;
@class NSHashTable, NSObject, NSString;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter> {

	BOOL _foreground;
	BOOL _enteringForeground;
	BOOL _enteringForegroundExpired;
	BOOL _active;
	SCD_Struct_PK5 _foregroundActiveState;
	unsigned _deactivationReasons;
	NSHashTable* _observers;
	NSHashTable* _deactivationObservers;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_source> _enteringForegroundTimeout;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(SCD_Struct_PK5)registerObserver:(id)arg1 ;
-(id)init;
-(void)didEnterBackground;
-(void)didBecomeActive;
-(void)willTerminate;
-(void)willResignActive;
-(id)_init;
-(void)_willAddDeactivationReasonNotification:(id)arg1 ;
-(void)_didRemoveDeactivationReasonNotification:(id)arg1 ;
-(void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1 ;
-(void)_beginEnteringForegroundTimer;
-(void)willEnterForegroundPrelude;
-(void)willEnterForegroundPostlude;
-(unsigned)registerDeactivationObserver:(id)arg1 ;
-(void)unregisterDeactivationObserver:(id)arg1 ;
-(void)dealloc;
@end

