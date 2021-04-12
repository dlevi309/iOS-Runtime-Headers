/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShouldIgnoreUnlockedState:(BOOL)arg1 ;
-(BOOL)shouldIgnoreUnlockedState;
-(void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2 ;
-(long long)_keyBagLockState;
-(id)diagnosticDescription;
-(void)removeContentProtectionObserver:(id)arg1 ;
-(long long)observedState;
-(id)initWithNotifications:(BOOL)arg1 initialState:(long long)arg2 unlockedSinceBoot:(BOOL)arg3 ;
-(void)recheckContentProtectionState;
-(void)setContentProtectionState:(long long)arg1 ;
-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)isProtectedDataAvailable;
-(void)_observationQueue_adjustContentProtectionStateWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

