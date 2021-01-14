/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@protocol SPUIRemoteSearchViewDelegate;
@class UIView;

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController {

	unsigned _searchHeaderContextID;
	double _revealProgress;
	unsigned long long _source;
	id<SPUIRemoteSearchViewDelegate> _delegate;
	double _distanceToTopOfIcons;
	unsigned long long _searchHeaderLayerRenderID;
	UIView* _dummyTransitionView;
	/*^block*/id _willStartPresetingSpotlightHandler;
	/*^block*/id _finishedPresentingSpotlightHandler;
	/*^block*/id _willBeginDismissingSpotlightHandler;
	/*^block*/id _didFinishDismissingSpotlightHandler;

}

@property (assign,nonatomic) double distanceToTopOfIcons;                                   //@synthesize distanceToTopOfIcons=_distanceToTopOfIcons - In the implementation block
@property (nonatomic,retain) UIView * dummyTransitionView;                                  //@synthesize dummyTransitionView=_dummyTransitionView - In the implementation block
@property (assign,nonatomic) unsigned long long searchHeaderLayerRenderID;                  //@synthesize searchHeaderLayerRenderID=_searchHeaderLayerRenderID - In the implementation block
@property (assign,nonatomic) unsigned searchHeaderContextID;                                //@synthesize searchHeaderContextID=_searchHeaderContextID - In the implementation block
@property (nonatomic,copy) id willStartPresetingSpotlightHandler;                           //@synthesize willStartPresetingSpotlightHandler=_willStartPresetingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id finishedPresentingSpotlightHandler;                           //@synthesize finishedPresentingSpotlightHandler=_finishedPresentingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id willBeginDismissingSpotlightHandler;                          //@synthesize willBeginDismissingSpotlightHandler=_willBeginDismissingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id didFinishDismissingSpotlightHandler;                          //@synthesize didFinishDismissingSpotlightHandler=_didFinishDismissingSpotlightHandler - In the implementation block
@property (assign,nonatomic) double revealProgress;                                         //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)revealProgress;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)setRevealProgress:(double)arg1 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)setDummyTransitionView:(UIView *)arg1 ;
-(id)init;
-(double)distanceToTopOfIcons;
-(id<SPUIRemoteSearchViewDelegate>)delegate;
-(void)setSearchHeaderLayerRenderID:(unsigned long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)finishedPresentingSpotlightHandler;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)finishCompletionHandlerIfNeeded;
-(BOOL)prewarmSceneInTheBackground;
-(unsigned long long)searchHeaderLayerRenderID;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(void)didInvalidateSceneWhenForeground;
-(void)setFinishedPresentingSpotlightHandler:(id)arg1 ;
-(unsigned)searchHeaderContextID;
-(void)setDidFinishDismissingSpotlightHandler:(id)arg1 ;
-(void)setWillStartPresetingSpotlightHandler:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)didFinishDismissingSpotlightHandler;
-(void)setWillBeginDismissingSpotlightHandler:(id)arg1 ;
-(void)updateIntent:(unsigned long long)arg1 ;
-(id)sceneSpecification;
-(void)setDistanceToTopOfIcons:(double)arg1 ;
-(void)setSearchHeaderContextID:(unsigned)arg1 ;
-(UIView *)dummyTransitionView;
-(id)willStartPresetingSpotlightHandler;
-(id)willBeginDismissingSpotlightHandler;
-(void)updateSceneSettingsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)source;
@end

