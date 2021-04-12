/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>

@class SBModalAlertPresentationCoordinator, FBSceneManager, FBScene, NSHashTable, NSString;

@interface SBModalAlertPresenter : NSObject <BSDescriptionProviding, FBSceneManagerObserver> {

	SBModalAlertPresentationCoordinator* _modalAlertPresentationCoordinator;
	FBSceneManager* _sceneManager;
	FBScene* _scene;
	unsigned long long _visibleModalAlertCount;
	BOOL _invalidated;
	BOOL _isSystemPresenter;
	NSHashTable* _visibleAlertAssertions;

}

@property (setter=_setScene:,nonatomic,retain) FBScene * scene;                                                    //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBModalAlertPresentationCoordinator * modalAlertPresentationCoordinator;              //@synthesize modalAlertPresentationCoordinator=_modalAlertPresentationCoordinator - In the implementation block
@property (nonatomic,retain) FBSceneManager * sceneManager;                                                        //@synthesize sceneManager=_sceneManager - In the implementation block
@property (getter=isShowingModalAlert,nonatomic,readonly) BOOL showingModalAlert; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (assign,nonatomic) unsigned long long visibleModalAlertCount;                                            //@synthesize visibleModalAlertCount=_visibleModalAlertCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScene *)scene;
-(id)succinctDescription;
-(void)_setScene:(id)arg1 ;
-(FBSceneManager *)sceneManager;
-(void)setSceneManager:(FBSceneManager *)arg1 ;
-(void)_addOrRemoveModalAlertPresenterIfNecessary;
-(id)_initWithModalAlertPresentationCoordinator:(id)arg1 sceneManager:(id)arg2 scene:(id)arg3 ;
-(SBModalAlertPresentationCoordinator *)modalAlertPresentationCoordinator;
-(void)decrementVisibleModalAlertCount;
-(id)acquireVisibleModalAlertAssertionWithDescription:(id)arg1 ;
-(void)setModalAlertPresentationCoordinator:(SBModalAlertPresentationCoordinator *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initForSystemApplication;
-(void)incrementVisibleModalAlertCount;
-(void)setVisibleModalAlertCount:(unsigned long long)arg1 ;
-(unsigned long long)visibleModalAlertCount;
-(BOOL)isForeground;
-(NSString *)description;
-(void)_addOrRemoveModalAlertPresenterIfNecessaryWithForegroundState:(BOOL)arg1 fromOrToTerminalState:(BOOL)arg2 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(BOOL)isShowingModalAlert;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

