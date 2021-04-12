/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (setter=_setScene:,nonatomic,retain) FBScene * scene;                                //@synthesize scene=_scene - In the implementation block
@property (getter=isShowingModalAlert,nonatomic,readonly) BOOL showingModalAlert; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (assign,nonatomic) unsigned long long visibleModalAlertCount;                        //@synthesize visibleModalAlertCount=_visibleModalAlertCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(void)_setScene:(id)arg1 ;
-(BOOL)isForeground;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)initForSystemApplication;
-(void)incrementVisibleModalAlertCount;
-(void)decrementVisibleModalAlertCount;
-(BOOL)isShowingModalAlert;
-(id)acquireVisibleModalAlertAssertionWithDescription:(id)arg1 ;
-(void)setVisibleModalAlertCount:(unsigned long long)arg1 ;
-(id)_initWithModalAlertPresentationCoordinator:(id)arg1 sceneManager:(id)arg2 scene:(id)arg3 ;
-(void)_addOrRemoveModalAlertPresenterIfNecessary;
-(void)_addOrRemoveModalAlertPresenterIfNecessaryWithForegroundState:(BOOL)arg1 fromOrToTerminalState:(BOOL)arg2 ;
-(unsigned long long)visibleModalAlertCount;
@end

