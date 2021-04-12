/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneHost.h>

@protocol FBSceneManagerSceneDelegate, FBSceneClient, FBSceneClientProvider, BSInvalidatable;
@class NSString, FBSSceneSpecification, FBSceneLayerManager, FBSceneHostManager, FBSceneObserver, NSMutableOrderedSet, FBProcess, FBSSceneIdentityToken, FBSMutableSceneSettings, FBSSceneSettings, FBSSceneClientSettings, FBSSceneDefinition, NSHashTable, FBSDisplayConfiguration, NSArray, FBSSceneParameters;

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost> {

	FBSceneLayerManager* _layerManager;
	FBSceneHostManager* _hostManager;
	id<FBSceneManagerSceneDelegate> _sceneManagerSceneDelegate;
	FBSceneObserver* _delegateProxy;
	NSMutableOrderedSet* _observerProxies;
	BOOL _valid;
	id<FBSceneClient> _client;
	id<FBSceneClientProvider> _clientProvider;
	FBProcess* _clientProcess;
	NSString* _identifier;
	NSString* _workspaceIdentifier;
	FBSSceneIdentityToken* _identityToken;
	FBSMutableSceneSettings* _mutableSettings;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	FBSSceneDefinition* _definition;
	long long _contentState;
	BOOL _contentStateIsChanging;
	NSHashTable* _geometryObservers;
	unsigned long long _transactionID;
	BOOL _inTransaction;
	id<BSInvalidatable> _stateCaptureAssertion;
	unsigned long long _lastForegroundingTransitionID;

}

@property (nonatomic,readonly) FBSceneHostManager * hostManager; 
@property (nonatomic,retain,readonly) FBSDisplayConfiguration * display; 
@property (assign,nonatomic,__weak) id<FBSceneManagerSceneDelegate> sceneManagerSceneDelegate;              //@synthesize sceneManagerSceneDelegate=_sceneManagerSceneDelegate - In the implementation block
@property (nonatomic,retain) FBSMutableSceneSettings * mutableSettings;                                     //@synthesize mutableSettings=_mutableSettings - In the implementation block
@property (nonatomic,readonly) FBSceneObserver * delegateProxy; 
@property (nonatomic,copy,readonly) NSArray * observerProxies; 
@property (nonatomic,readonly) unsigned long long _transactionID;                                           //@synthesize transactionID=_transactionID - In the implementation block
@property (getter=_isInTransaction,nonatomic,readonly) BOOL _inTransaction;                                 //@synthesize inTransaction=_inTransaction - In the implementation block
@property (nonatomic,readonly) id<FBSceneClient> client;                                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) id<FBSceneClientProvider> clientProvider;                                    //@synthesize clientProvider=_clientProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * workspaceIdentifier;                                         //@synthesize workspaceIdentifier=_workspaceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneDefinition * definition;                                        //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneIdentityToken * identityToken;                                  //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * settings;                                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) FBSSceneClientSettings * clientSettings;                                     //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneParameters * parameters; 
@property (nonatomic,readonly) long long contentState;                                                      //@synthesize contentState=_contentState - In the implementation block
@property (nonatomic,readonly) FBSceneLayerManager * layerManager;                                          //@synthesize layerManager=_layerManager - In the implementation block
@property (nonatomic,readonly) FBProcess * clientProcess;                                                   //@synthesize clientProcess=_clientProcess - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                   //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)isValid;
-(id<FBSceneDelegate>)delegate;
-(void)setDelegate:(id<FBSceneDelegate>)arg1 ;
-(NSString *)identifier;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<FBSceneClient>)client;
-(FBSSceneParameters *)parameters;
-(FBSSceneDefinition *)definition;
-(FBSSceneSettings *)settings;
-(unsigned long long)_beginTransaction;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneIdentityToken *)identityToken;
-(FBSSceneSpecification *)specification;
-(id)uiSettings;
-(FBSSceneClientSettings *)clientSettings;
-(id)uiClientSettings;
-(FBProcess *)clientProcess;
-(void)updateUISettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(FBSceneLayerManager *)layerManager;
-(id)createSnapshotWithContext:(id)arg1 ;
-(id)snapshotContext;
-(long long)contentState;
-(void)sendActions:(id)arg1 ;
-(FBSDisplayConfiguration *)display;
-(unsigned long long)_transactionID;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)workspaceIdentifier;
-(BOOL)_isInTransaction;
-(id)createSnapshot;
-(void)_addSceneGeometryObserver:(id)arg1 ;
-(void)_removeSceneGeometryObserver:(id)arg1 ;
-(FBSceneHostManager *)hostManager;
-(void)clientWillInvalidate:(id)arg1 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)updateUISettingsWithBlock:(/*^block*/id)arg1 ;
-(long long)currentInterfaceOrientation;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(FBSMutableSceneSettings *)mutableSettings;
-(id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3 ;
-(void)setSceneManagerSceneDelegate:(id<FBSceneManagerSceneDelegate>)arg1 ;
-(void)setMutableSettings:(FBSMutableSceneSettings *)arg1 ;
-(void)_applyUpdateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_endTransaction:(unsigned long long)arg1 ;
-(void)_adjustInitialSettings:(id)arg1 ;
-(id<FBSceneClientProvider>)clientProvider;
-(void)_invalidateWithTransitionContext:(id)arg1 ;
-(FBSceneObserver *)delegateProxy;
-(NSArray *)observerProxies;
-(void)_setContentState:(long long)arg1 ;
-(void)_dispatchClientMessageWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(id<FBSceneManagerSceneDelegate>)sceneManagerSceneDelegate;
@end

