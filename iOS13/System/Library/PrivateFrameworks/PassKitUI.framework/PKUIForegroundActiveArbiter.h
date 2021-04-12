/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiter.h>

@protocol OS_dispatch_source;
@class NSHashTable, NSObject, NSLock, NSString;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter> {

	BOOL _foreground;
	BOOL _enteringForeground;
	BOOL _enteringForegroundExpired;
	BOOL _active;
	SCD_Struct_PK4 _foregroundActiveState;
	unsigned _deactivationReasons;
	NSHashTable* _observers;
	NSHashTable* _deactivationObservers;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_source> _enteringForegroundTimeout;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)didBecomeActive;
-(void)willResignActive;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(SCD_Struct_PK4)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)willTerminate;
-(void)_willAddDeactivationReasonNotification:(id)arg1 ;
-(void)_didRemoveDeactivationReasonNotification:(id)arg1 ;
-(void)_beginEnteringForeground;
-(void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1 ;
-(unsigned)registerDeactivationObserver:(id)arg1 ;
-(void)unregisterDeactivationObserver:(id)arg1 ;
@end

