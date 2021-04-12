/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManagerDelegate.h>
#import <libobjc.A.dylib/TIKeyboardActivityControlling.h>
#import <libobjc.A.dylib/TIKeyboardApplicationStateResponses.h>

@protocol OS_dispatch_source;
@class NSObject, NSTimer, NSHashTable, TIKeyboardApplicationStateMonitor, NSString;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses> {

	BOOL _hadRecentActivity;
	BOOL _hasBackgroundActivity;
	unsigned long long _activityState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _inactiveMemoryPressureCount;
	BOOL _isDirty;
	NSTimer* _inactivityTimer;
	NSHashTable* _observers;
	TIKeyboardApplicationStateMonitor* _appMonitor;

}

@property (assign,nonatomic) BOOL isDirty;                                                //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,retain) NSTimer * inactivityTimer;                                   //@synthesize inactivityTimer=_inactivityTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) TIKeyboardApplicationStateMonitor * appMonitor;              //@synthesize appMonitor=_appMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long activityState; 
+(id)sharedController;
+(void)setSharedController:(id)arg1 ;
+(id)singletonInstance;
+(double)keyboardIdleTimeoutInterval;
+(double)defaultKeyboardIdleTimeoutInterval;
+(void)setKeyboardIdleTimeoutInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isDirty;
-(NSHashTable *)observers;
-(TIKeyboardApplicationStateMonitor *)appMonitor;
-(unsigned long long)activityState;
-(void)setIsDirty:(BOOL)arg1 ;
-(void)releaseInputManagers;
-(void)addActivityObserver:(id)arg1 ;
-(void)removeActivityObserver:(id)arg1 ;
-(void)keyboardAssertionsDidChange;
-(void)backgroundActivityAssertionsDidChange;
-(void)notifyTransitionWithContext:(id)arg1 ;
-(void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(id)createMemoryPressureSource;
-(void)handleMemoryStatusPressure:(unsigned long long)arg1 ;
-(unsigned long long)getExcessMemoryInBytes;
-(void)updateActivityState;
-(BOOL)atexitHandler;
-(void)touchInactivityTimer;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)setKeyboardDirtyIfNecessary;
-(BOOL)shouldBecomeDirty;
-(void)setKeyboardCleanIfNecessary;
-(BOOL)canGoEarlyClean;
-(BOOL)shouldBecomeClean;
-(NSTimer *)inactivityTimer;
-(void)setInactivityTimer:(NSTimer *)arg1 ;
-(void)setAppMonitor:(TIKeyboardApplicationStateMonitor *)arg1 ;
@end

