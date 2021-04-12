/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBIconAnimator.h>
#import <libobjc.A.dylib/SBIconIndexNodeObserver.h>

@class NSMapTable, NSSet, SBIconListModel, SBHIconModel, SBIconListView, SBHIconZoomSettings, NSString;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {

	NSMapTable* _listIconToViewMap;
	NSMapTable* _dockIconToViewMap;
	NSSet* _criticalIconNodeIdentifiers;
	SBIconListModel* _iconListModel;
	SBHIconModel* _iconModel;
	double _startTime;
	SBIconListView* _iconListView;
	SBIconListView* _dockListView;

}

@property (nonatomic,readonly) id<SBIconZoomAnimationContaining> animationContainer; 
@property (nonatomic,readonly) SBIconListView * iconListView;                                     //@synthesize iconListView=_iconListView - In the implementation block
@property (nonatomic,readonly) SBIconListView * dockListView;                                     //@synthesize dockListView=_dockListView - In the implementation block
@property (nonatomic,retain) NSSet * criticalIconNodeIdentifiers;                                 //@synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers - In the implementation block
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,retain) SBHIconZoomSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)startTime;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(id)iconViewForIcon:(id)arg1 ;
-(void)_cleanupZoom;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(id)initWithAnimationContainer:(id)arg1 ;
-(void)_iconModelDidRelayout:(id)arg1 ;
-(void)_iconModelDidReload:(id)arg1 ;
-(void)_clearObservers;
-(void)_setIconListView:(id)arg1 ;
-(void)_setDockListView:(id)arg1 ;
-(void)_applyLabelAlphaFraction:(double)arg1 ;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)nodeDidMoveContainedNodes:(id)arg1 ;
-(void)enumerateIconsAndIconViewsWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)listIconCount;
-(unsigned long long)dockIconCount;
-(void)cleanupZoom;
-(BOOL)isPastPointOfNoReturn;
-(NSSet *)criticalIconNodeIdentifiers;
-(void)setCriticalIconNodeIdentifiers:(NSSet *)arg1 ;
-(SBIconListView *)iconListView;
-(SBIconListView *)dockListView;
@end

