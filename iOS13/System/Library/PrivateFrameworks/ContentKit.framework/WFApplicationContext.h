/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFApplicationContextProvider;
@class NSBundle, NSMutableDictionary, NSLock, NSString, NSArray;

@interface WFApplicationContext : NSObject {

	BOOL _canLoadShortcutsDatabase;
	BOOL _inactive;
	BOOL _inBackground;
	BOOL _canLoadShortcutsDatabaseEntitlementChecked;
	id<WFApplicationContextProvider> _provider;
	NSBundle* _applicationBundle;
	NSMutableDictionary* _applicationStateObserversByEvent;
	NSLock* _observersLock;

}

@property (nonatomic,retain) NSMutableDictionary * applicationStateObserversByEvent;              //@synthesize applicationStateObserversByEvent=_applicationStateObserversByEvent - In the implementation block
@property (nonatomic,readonly) NSLock * observersLock;                                            //@synthesize observersLock=_observersLock - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                                       //@synthesize inactive=_inactive - In the implementation block
@property (assign,nonatomic) BOOL inBackground;                                                   //@synthesize inBackground=_inBackground - In the implementation block
@property (assign,nonatomic) BOOL canLoadShortcutsDatabaseEntitlementChecked;                     //@synthesize canLoadShortcutsDatabaseEntitlementChecked=_canLoadShortcutsDatabaseEntitlementChecked - In the implementation block
@property (nonatomic,retain) id<WFApplicationContextProvider> provider;                           //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) NSBundle * applicationBundle;                                      //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) NSString * currentUserInterfaceType; 
@property (nonatomic,readonly) BOOL canLoadShortcutsDatabase;                                     //@synthesize canLoadShortcutsDatabase=_canLoadShortcutsDatabase - In the implementation block
@property (nonatomic,readonly) BOOL shouldReverseLayoutDirection; 
@property (nonatomic,readonly) long long applicationState; 
@property (assign,getter=isIdleTimerDisabled,nonatomic) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) NSArray * applicationBundleURLSchemes; 
+(id)sharedContext;
+(id)imageNamed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSBundle *)bundle;
-(void)setProvider:(id<WFApplicationContextProvider>)arg1 ;
-(void)openURL:(id)arg1 ;
-(BOOL)inactive;
-(id<WFApplicationContextProvider>)provider;
-(long long)applicationState;
-(id)keyWindow;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(BOOL)isIdleTimerDisabled;
-(BOOL)shouldReverseLayoutDirection;
-(void)setInactive:(BOOL)arg1 ;
-(NSLock *)observersLock;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)setInBackground:(BOOL)arg1 ;
-(NSBundle *)applicationBundle;
-(BOOL)canLoadShortcutsDatabase;
-(void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2 ;
-(void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2 ;
-(NSString *)currentUserInterfaceType;
-(void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSArray *)applicationBundleURLSchemes;
-(id)applicationOrNil;
-(BOOL)inBackground;
-(void)handleApplicationStateEvent:(long long)arg1 ;
-(NSMutableDictionary *)applicationStateObserversByEvent;
-(void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setApplicationStateObserversByEvent:(NSMutableDictionary *)arg1 ;
-(BOOL)canLoadShortcutsDatabaseEntitlementChecked;
-(void)setCanLoadShortcutsDatabaseEntitlementChecked:(BOOL)arg1 ;
@end

