/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@class _TtC24MenstrualCyclesAppPlugin33CycleTimelineCollectionViewLayout;

@interface MenstrualCyclesAppPlugin.CycleTimelineCollectionViewController : UICollectionViewController {

	 state;
	 calendarCache;
	 cycleLoggingDataProvider;
	 supplementaryDisplayTypes;
	 scrollToZoomedItemCompletionHandlers;
	 today;
	 indexableDays;
	 needsScrollToCurrentDay;

}

@property (readonly,nonatomic) _TtC24MenstrualCyclesAppPlugin33CycleTimelineCollectionViewLayout * collectionViewLayout; 
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(_TtC24MenstrualCyclesAppPlugin33CycleTimelineCollectionViewLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)updateTodayDayIndex;
@end

