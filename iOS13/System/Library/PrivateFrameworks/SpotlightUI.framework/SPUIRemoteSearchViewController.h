/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@protocol SPUIRemoteSearchViewDelegate;
@class UIView;

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController {

	double _revealProgress;
	unsigned long long _source;
	id<SPUIRemoteSearchViewDelegate> _delegate;
	double _distanceToTopOfIcons;
	UIView* _dummyTransitionView;
	/*^block*/id _willStartPresetingSpotlightHandler;
	/*^block*/id _finishedPresentingSpotlightHandler;
	/*^block*/id _willBeginDismissingSpotlightHandler;
	/*^block*/id _didFinishDismissingSpotlightHandler;

}

@property (assign,nonatomic) double distanceToTopOfIcons;                                   //@synthesize distanceToTopOfIcons=_distanceToTopOfIcons - In the implementation block
@property (nonatomic,retain) UIView * dummyTransitionView;                                  //@synthesize dummyTransitionView=_dummyTransitionView - In the implementation block
@property (nonatomic,copy) id willStartPresetingSpotlightHandler;                           //@synthesize willStartPresetingSpotlightHandler=_willStartPresetingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id finishedPresentingSpotlightHandler;                           //@synthesize finishedPresentingSpotlightHandler=_finishedPresentingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id willBeginDismissingSpotlightHandler;                          //@synthesize willBeginDismissingSpotlightHandler=_willBeginDismissingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id didFinishDismissingSpotlightHandler;                          //@synthesize didFinishDismissingSpotlightHandler=_didFinishDismissingSpotlightHandler - In the implementation block
@property (assign,nonatomic) double revealProgress;                                         //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SPUIRemoteSearchViewDelegate>)delegate;
-(void)setDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(void)setDummyTransitionView:(UIView *)arg1 ;
-(UIView *)dummyTransitionView;
-(void)setDistanceToTopOfIcons:(double)arg1 ;
-(double)distanceToTopOfIcons;
-(void)updateSceneSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)beginTodayViewAnimationWithSourceLayerRenderId:(unsigned long long)arg1 sourceContextId:(unsigned)arg2 ;
-(void)didInvalidateSceneWhenForeground;
-(id)willStartPresetingSpotlightHandler;
-(void)updateIntent:(unsigned long long)arg1 ;
-(void)startMatchMoveIfNeeded;
-(id)finishedPresentingSpotlightHandler;
-(id)willBeginDismissingSpotlightHandler;
-(id)didFinishDismissingSpotlightHandler;
-(id)sceneSpecification;
-(void)setWillStartPresetingSpotlightHandler:(id)arg1 ;
-(void)setFinishedPresentingSpotlightHandler:(id)arg1 ;
-(void)setWillBeginDismissingSpotlightHandler:(id)arg1 ;
-(void)setDidFinishDismissingSpotlightHandler:(id)arg1 ;
@end

