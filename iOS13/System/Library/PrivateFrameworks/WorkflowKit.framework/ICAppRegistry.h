/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class ICApp, NSLock, NSDictionary, NSMutableDictionary, NSArray;

@interface ICAppRegistry : NSObject {

	BOOL _isFilled;
	int _urlTypesToken;
	ICApp* _currentApp;
	NSLock* _registryLock;
	NSDictionary* _appsDictionary;
	NSDictionary* _actions;
	NSLock* _observersLock;
	NSMutableDictionary* _observersByIdentifier;

}

@property (nonatomic,retain) NSLock * registryLock;                                    //@synthesize registryLock=_registryLock - In the implementation block
@property (nonatomic,retain) NSDictionary * appsDictionary;                            //@synthesize appsDictionary=_appsDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * actions;                                   //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSLock * observersLock;                                   //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observersByIdentifier;              //@synthesize observersByIdentifier=_observersByIdentifier - In the implementation block
@property (assign,nonatomic) int urlTypesToken;                                        //@synthesize urlTypesToken=_urlTypesToken - In the implementation block
@property (nonatomic,readonly) NSArray * apps; 
@property (nonatomic,readonly) ICApp * currentApp;                                     //@synthesize currentApp=_currentApp - In the implementation block
@property (nonatomic,readonly) NSArray * allActions; 
@property (nonatomic,readonly) BOOL isFilled;                                          //@synthesize isFilled=_isFilled - In the implementation block
+(id)sharedRegistry;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)currentVersion;
-(NSDictionary *)actions;
-(void)setActions:(NSDictionary *)arg1 ;
-(NSArray *)apps;
-(void)updateCache:(/*^block*/id)arg1 ;
-(id)cacheURL;
-(NSArray *)allActions;
-(NSLock *)observersLock;
-(void)setObserversLock:(NSLock *)arg1 ;
-(BOOL)isFilled;
-(id)appWithIdentifier:(id)arg1 ;
-(id)appWithBundleIdentifier:(id)arg1 ;
-(void)deleteCache;
-(id)actionsWithIdentifiers:(id)arg1 ;
-(id)cacheDirectoryURL;
-(id)bundledURL;
-(NSDictionary *)appsDictionary;
-(ICApp *)currentApp;
-(id)_appsWithIdentifiers:(id)arg1 ;
-(id)appsWithIdentifiers:(id)arg1 ;
-(id)appWithURLScheme:(id)arg1 ;
-(id)identifierForAppWithBundleIdentifier:(id)arg1 ;
-(void)updateRegistry;
-(void)fillRegistry;
-(void)addInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2 ;
-(void)removeInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2 ;
-(void)refreshInstalledApps;
-(NSLock *)registryLock;
-(void)setRegistryLock:(NSLock *)arg1 ;
-(void)setAppsDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)observersByIdentifier;
-(void)setObserversByIdentifier:(NSMutableDictionary *)arg1 ;
-(int)urlTypesToken;
-(void)setUrlTypesToken:(int)arg1 ;
@end

