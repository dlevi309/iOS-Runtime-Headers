/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol FBSynchronizedTransactionDelegate;
@class FBSceneManager, NSString, FBSSceneDefinition, FBSSceneParameters, FBSSceneTransitionContext, FBWaitForSceneDestructionTransaction, FBScene, FBSSceneSettings, FBSSceneSpecification;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction> {

	FBSceneManager* _sceneManager;
	NSString* _sceneID;
	FBSSceneDefinition* _definition;
	FBSSceneParameters* _parameters;
	FBSSceneTransitionContext* _transitionContext;
	FBWaitForSceneDestructionTransaction* _destructionTransaction;
	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;
	unsigned long long _transactionID;
	BOOL _waitsForSceneCommit;
	BOOL _readyToCommit;
	BOOL _didCommit;
	BOOL _destroyed;

}

@property (nonatomic,readonly) FBScene * scene; 
@property (nonatomic,readonly) NSString * sceneIdentifier;                                                      //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * settings; 
@property (nonatomic,readonly) FBSSceneSpecification * specification; 
@property (nonatomic,readonly) FBSSceneTransitionContext * transitionContext;                                   //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) BOOL destroyed;                                                                  //@synthesize destroyed=_destroyed - In the implementation block
@property (assign,nonatomic) BOOL waitsForSceneCommit;                                                          //@synthesize waitsForSceneCommit=_waitsForSceneCommit - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * newSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)_childTransactionDidComplete:(id)arg1 ;
-(FBScene *)scene;
-(void)addObserver:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)_begin;
-(NSString *)sceneIdentifier;
-(id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)setWaitsForSceneCommit:(BOOL)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(void)_didComplete;
-(FBSSceneSpecification *)specification;
-(id)_customizedDescriptionProperties;
-(FBSSceneSettings *)newSettings;
-(id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_commitSceneOrWait;
-(void)_commitSceneUpdate:(/*^block*/id)arg1 ;
-(void)_noteDidCreate;
-(void)_performCommit;
-(void)_noteDidCommit:(BOOL)arg1 ;
-(FBSSceneSettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(void)_createScene;
-(id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4 ;
-(void)_noteWillUpdate;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(BOOL)waitsForSceneCommit;
-(BOOL)destroyed;
-(void)_updateScene;
-(id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)isReadyForSynchronizedCommit;
-(void)_noteWillCommit;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(void)dealloc;
@end

