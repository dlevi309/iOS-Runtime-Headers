/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSceneHost.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSceneManagerSceneDelegate, FBSceneClient, FBSceneClientProvider, BSInvalidatable;
@class NSString, FBSSceneSpecification, FBSceneLayerManager, FBSceneObserver, NSMutableOrderedSet, FBProcess, FBSSceneIdentityToken, FBSMutableSceneSettings, FBSSceneSettings, FBSSceneClientSettings, FBSSceneDefinition, NSArray, FBSSceneParameters;

@interface FBScene : NSObject <FBSceneHost, BSDescriptionProviding> {

	FBSceneLayerManager* _layerManager;
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
	unsigned long long _transactionID;
	BOOL _inTransaction;
	id<BSInvalidatable> _stateCaptureAssertion;
	unsigned long long _lastForegroundingTransitionID;

}

@property (nonatomic,readonly) id<FBSceneClient> client;                                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) id<FBSceneClientProvider> clientProvider;                                    //@synthesize clientProvider=_clientProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneManagerSceneDelegate> sceneManagerSceneDelegate;              //@synthesize sceneManagerSceneDelegate=_sceneManagerSceneDelegate - In the implementation block
@property (nonatomic,retain) FBSMutableSceneSettings * mutableSettings;                                     //@synthesize mutableSettings=_mutableSettings - In the implementation block
@property (nonatomic,readonly) FBSceneObserver * delegateProxy; 
@property (nonatomic,copy,readonly) NSArray * observerProxies; 
@property (nonatomic,readonly) unsigned long long _transactionID;                                           //@synthesize transactionID=_transactionID - In the implementation block
@property (getter=_isInTransaction,nonatomic,readonly) BOOL _inTransaction;                                 //@synthesize inTransaction=_inTransaction - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * group; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSSceneClientSettings *)clientSettings;
-(FBSSceneParameters *)parameters;
-(NSString *)group;
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(id<FBSceneClient>)client;
-(id<FBSceneDelegate>)delegate;
-(id)createSnapshot;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)contentState;
-(FBSSceneSpecification *)specification;
-(NSString *)debugDescription;
-(unsigned long long)_beginTransaction;
-(long long)currentInterfaceOrientation;
-(id)uiSettings;
-(void)setDelegate:(id<FBSceneDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)workspaceIdentifier;
-(BOOL)isValid;
-(void)clientWillInvalidate:(id)arg1 ;
-(FBSSceneDefinition *)definition;
-(FBSSceneSettings *)settings;
-(void)sendActions:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBSSceneIdentityToken *)identityToken;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(id)display;
-(unsigned long long)_transactionID;
-(id)uiClientSettings;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(FBSceneLayerManager *)layerManager;
-(id)succinctDescriptionBuilder;
-(void)updateUISettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)createSnapshotWithContext:(id)arg1 ;
-(BOOL)_isInTransaction;
-(FBSceneObserver *)delegateProxy;
-(id<FBSceneClientProvider>)clientProvider;
-(id)snapshotContext;
-(void)dealloc;
-(FBProcess *)clientProcess;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updateUISettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDefiniton:(id)arg1 remnant:(id)arg2 specification:(id)arg3 settings:(id)arg4 initialClientSettings:(id)arg5 clientProvider:(id)arg6 ;
-(void)setSceneManagerSceneDelegate:(id<FBSceneManagerSceneDelegate>)arg1 ;
-(void)setMutableSettings:(FBSMutableSceneSettings *)arg1 ;
-(void)_applyUpdateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_endTransaction:(unsigned long long)arg1 ;
-(void)_adjustInitialSettings:(id)arg1 ;
-(void)_invalidateWithTransitionContext:(id)arg1 ;
-(NSArray *)observerProxies;
-(void)_setContentState:(long long)arg1 ;
-(void)_dispatchClientMessageWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(id<FBSceneManagerSceneDelegate>)sceneManagerSceneDelegate;
-(FBSMutableSceneSettings *)mutableSettings;
@end

