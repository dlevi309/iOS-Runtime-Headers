/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAppActivityMonitor.h>

@class NSNotificationCenter, NSHashTable, NSString, NSMutableSet;

@interface NUApplicationAppActivityMonitorMacOS : NSObject <NUAppActivityMonitor> {

	BOOL _windowIsForeground;
	BOOL _becomingActive;
	NSNotificationCenter* _notificationCenter;
	NSHashTable* _observers;
	NSString* _windowBecameFrontmostNotificationName;
	NSString* _windowLostFrontmostNotificationName;
	NSMutableSet* _foregroundObserverBlocks;
	NSMutableSet* _backgroundObserverBlocks;
	NSMutableSet* _windowForegroundObserverBlocks;
	NSMutableSet* _windowBackgroundObserverBlocks;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                          //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy,readonly) NSString * windowBecameFrontmostNotificationName;              //@synthesize windowBecameFrontmostNotificationName=_windowBecameFrontmostNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * windowLostFrontmostNotificationName;                //@synthesize windowLostFrontmostNotificationName=_windowLostFrontmostNotificationName - In the implementation block
@property (nonatomic,readonly) NSMutableSet * foregroundObserverBlocks;                            //@synthesize foregroundObserverBlocks=_foregroundObserverBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableSet * backgroundObserverBlocks;                            //@synthesize backgroundObserverBlocks=_backgroundObserverBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableSet * windowForegroundObserverBlocks;                      //@synthesize windowForegroundObserverBlocks=_windowForegroundObserverBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableSet * windowBackgroundObserverBlocks;                      //@synthesize windowBackgroundObserverBlocks=_windowBackgroundObserverBlocks - In the implementation block
@property (assign,getter=isWindowForeground,nonatomic) BOOL windowIsForeground;                    //@synthesize windowIsForeground=_windowIsForeground - In the implementation block
@property (assign,getter=isBecomingActive,nonatomic) BOOL becomingActive;                          //@synthesize becomingActive=_becomingActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(NSHashTable *)observers;
-(void)applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)activityObservingApplicationDidFinishLaunchingNotification:(id)arg1 ;
-(void)activityObservingApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_markWindowAsForeground;
-(void)_markWindowAsBackground;
-(NSMutableSet *)foregroundObserverBlocks;
-(NSMutableSet *)backgroundObserverBlocks;
-(NSMutableSet *)windowBackgroundObserverBlocks;
-(NSMutableSet *)windowForegroundObserverBlocks;
-(BOOL)isBecomingActive;
-(void)setBecomingActive:(BOOL)arg1 ;
-(BOOL)isWindowForeground;
-(void)setWindowIsForeground:(BOOL)arg1 ;
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)performOnApplicationWillEnterForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeBackground:(/*^block*/id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 windowBecameFrontmostNotificationName:(id)arg2 windowLostFrontmostNotificationName:(id)arg3 ;
-(NSString *)windowBecameFrontmostNotificationName;
-(NSString *)windowLostFrontmostNotificationName;
@end

