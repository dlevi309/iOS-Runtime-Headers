/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) long long applicationState; 
@property (assign,getter=isIdleTimerDisabled,nonatomic) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) NSArray * applicationBundleURLSchemes; 
+(id)imageNamed:(id)arg1 ;
+(id)sharedContext;
-(NSBundle *)bundle;
-(long long)applicationState;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)inactive;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)setProvider:(id<WFApplicationContextProvider>)arg1 ;
-(long long)userInterfaceStyle;
-(void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(NSString *)currentUserInterfaceType;
-(id<WFApplicationContextProvider>)provider;
-(NSLock *)observersLock;
-(void)setInBackground:(BOOL)arg1 ;
-(void)handleApplicationStateEvent:(long long)arg1 ;
-(void)applicationWillResignActive;
-(BOOL)inBackground;
-(void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)applicationDidBecomeActive;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)applicationBundleURLSchemes;
-(id)keyWindow;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2 ;
-(NSMutableDictionary *)applicationStateObserversByEvent;
-(id)applicationOrNil;
-(NSBundle *)applicationBundle;
-(void)openURL:(id)arg1 ;
-(void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2 ;
-(void)setApplicationStateObserversByEvent:(NSMutableDictionary *)arg1 ;
-(BOOL)canLoadShortcutsDatabase;
-(BOOL)canLoadShortcutsDatabaseEntitlementChecked;
-(BOOL)shouldReverseLayoutDirection;
-(void)dealloc;
-(BOOL)isIdleTimerDisabled;
-(void)setCanLoadShortcutsDatabaseEntitlementChecked:(BOOL)arg1 ;
@end

