/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManagerDelegate.h>
#import <libobjc.A.dylib/TIKeyboardActivityControlling.h>
#import <libobjc.A.dylib/TIKeyboardApplicationStateResponses.h>

@protocol OS_dispatch_source, OS_os_transaction;
@class NSObject, NSTimer, NSHashTable, TIKeyboardApplicationStateMonitor, NSString;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses> {

	BOOL _hadRecentActivity;
	BOOL _hasBackgroundActivity;
	unsigned long long _activityState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _inactiveMemoryPressureCount;
	BOOL _isDirty;
	NSObject*<OS_os_transaction> _isDirtyTransaction;
	NSTimer* _inactivityTimer;
	NSHashTable* _observers;
	TIKeyboardApplicationStateMonitor* _appMonitor;

}

@property (assign,nonatomic) BOOL isDirty;                                                 //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> isDirtyTransaction;              //@synthesize isDirtyTransaction=_isDirtyTransaction - In the implementation block
@property (nonatomic,retain) NSTimer * inactivityTimer;                                    //@synthesize inactivityTimer=_inactivityTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) TIKeyboardApplicationStateMonitor * appMonitor;               //@synthesize appMonitor=_appMonitor - In the implementation block
@property (nonatomic,readonly) unsigned long long activityState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(double)keyboardIdleTimeoutInterval;
+(void)setSharedController:(id)arg1 ;
+(double)defaultKeyboardIdleTimeoutInterval;
+(void)setKeyboardIdleTimeoutInterval:(double)arg1 ;
+(id)sharedController;
-(BOOL)canGoEarlyClean;
-(unsigned long long)activityState;
-(void)setKeyboardCleanIfNecessary;
-(NSHashTable *)observers;
-(BOOL)isDirty;
-(BOOL)shouldBecomeDirty;
-(id)init;
-(void)notifyTransitionWithContext:(id)arg1 ;
-(void)keyboardAssertionsDidChange;
-(NSObject*<OS_os_transaction>)isDirtyTransaction;
-(void)touchInactivityTimer;
-(void)inactivityTimerFired:(id)arg1 ;
-(unsigned long long)getExcessMemoryInBytes;
-(NSTimer *)inactivityTimer;
-(void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)addActivityObserver:(id)arg1 ;
-(void)setIsDirtyTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setKeyboardDirtyIfNecessaryWithReason:(id)arg1 ;
-(void)handleMemoryStatusPressure:(unsigned long long)arg1 ;
-(void)setAppMonitor:(TIKeyboardApplicationStateMonitor *)arg1 ;
-(BOOL)shouldBecomeClean;
-(id)createMemoryPressureSource;
-(TIKeyboardApplicationStateMonitor *)appMonitor;
-(void)setInactivityTimer:(NSTimer *)arg1 ;
-(void)updateActivityState;
-(void)removeActivityObserver:(id)arg1 ;
-(void)backgroundActivityAssertionsDidChange;
-(void)setIsDirty:(BOOL)arg1 ;
-(BOOL)atexitHandler;
-(void)dealloc;
-(void)releaseInputManagers;
@end

