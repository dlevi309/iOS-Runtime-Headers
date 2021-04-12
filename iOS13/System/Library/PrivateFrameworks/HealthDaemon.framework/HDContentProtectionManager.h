/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject> {

	Ai _contentProtectionState;
	AB _shouldIgnoreUnlockedState;
	AB _unlockedSinceBoot;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _observationQueue;
	NSMapTable* _observers;
	double _beganObservingTime;
	double _lastNotificationTime;
	double _lastRecheckTime;

}

@property (assign,nonatomic) BOOL shouldIgnoreUnlockedState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isProtectedDataAvailableWithState:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)isProtectedDataAvailable;
-(id)diagnosticDescription;
-(long long)observedState;
-(void)removeContentProtectionObserver:(id)arg1 ;
-(void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2 ;
-(void)recheckContentProtectionState;
-(void)setContentProtectionState:(long long)arg1 ;
-(id)initWithNotifications:(BOOL)arg1 initialState:(long long)arg2 unlockedSinceBoot:(BOOL)arg3 ;
-(long long)_keyBagLockState;
-(void)_observationQueue_adjustContentProtectionStateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreUnlockedState;
-(void)setShouldIgnoreUnlockedState:(BOOL)arg1 ;
@end

