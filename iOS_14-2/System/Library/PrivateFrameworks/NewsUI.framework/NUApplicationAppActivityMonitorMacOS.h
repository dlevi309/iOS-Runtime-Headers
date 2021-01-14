/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAppActivityMonitor.h>
#import <libobjc.A.dylib/FCAppActivityReceiver.h>

@class NSNotificationCenter, NSHashTable, NSString, NSMutableSet;

@interface NUApplicationAppActivityMonitorMacOS : NSObject <NUAppActivityMonitor, FCAppActivityReceiver> {

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
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(NSNotificationCenter *)notificationCenter;
-(void)sceneWillConnect;
-(NSMutableSet *)foregroundObserverBlocks;
-(void)sceneDidEnterBackground;
-(void)performOnApplicationWindowDidBecomeForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWillEnterForeground:(/*^block*/id)arg1 ;
-(void)sceneWillEnterForeground;
-(void)sceneDidBecomeActiveWithURL:(id)arg1 sourceApplication:(id)arg2 sceneID:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(NSMutableSet *)windowBackgroundObserverBlocks;
-(NSMutableSet *)backgroundObserverBlocks;
-(void)sceneDidEnterBackgroundWithSceneID:(id)arg1 ;
-(NSMutableSet *)windowForegroundObserverBlocks;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)sceneDidBecomeActive;
-(void)performOnApplicationWindowDidBecomeBackground:(/*^block*/id)arg1 ;
-(void)_applicationWillTerminate;
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)sceneWillResignActiveWithSceneID:(id)arg1 ;
-(void)_markWindowAsForeground;
-(void)_markWindowAsBackground;
-(BOOL)isBecomingActive;
-(void)setBecomingActive:(BOOL)arg1 ;
-(BOOL)isWindowForeground;
-(void)setWindowIsForeground:(BOOL)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 windowBecameFrontmostNotificationName:(id)arg2 windowLostFrontmostNotificationName:(id)arg3 ;
-(NSString *)windowBecameFrontmostNotificationName;
-(NSString *)windowLostFrontmostNotificationName;
@end

