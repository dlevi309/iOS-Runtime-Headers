/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActions:(NSDictionary *)arg1 ;
-(id)init;
-(NSArray *)allActions;
-(NSDictionary *)actions;
-(BOOL)isFilled;
-(NSLock *)observersLock;
-(NSArray *)apps;
-(void)setObserversLock:(NSLock *)arg1 ;
-(id)currentVersion;
-(id)description;
-(id)cacheURL;
-(id)appWithIdentifier:(id)arg1 ;
-(id)cacheDirectoryURL;
-(void)dealloc;
-(void)updateCache:(/*^block*/id)arg1 ;
-(NSLock *)registryLock;
-(id)appWithBundleIdentifier:(id)arg1 ;
-(ICApp *)currentApp;
-(void)deleteCache;
-(id)bundledURL;
-(NSDictionary *)appsDictionary;
-(id)_appsWithIdentifiers:(id)arg1 ;
-(id)appsWithIdentifiers:(id)arg1 ;
-(id)appWithURLScheme:(id)arg1 ;
-(id)actionsWithIdentifiers:(id)arg1 ;
-(id)identifierForAppWithBundleIdentifier:(id)arg1 ;
-(void)updateRegistry;
-(void)fillRegistry;
-(void)addInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2 ;
-(void)removeInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2 ;
-(void)refreshInstalledApps;
-(void)setRegistryLock:(NSLock *)arg1 ;
-(void)setAppsDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)observersByIdentifier;
-(void)setObserversByIdentifier:(NSMutableDictionary *)arg1 ;
-(int)urlTypesToken;
-(void)setUrlTypesToken:(int)arg1 ;
@end

