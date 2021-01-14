/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(_TtC24MenstrualCyclesAppPlugin33CycleTimelineCollectionViewLayout *)collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateTodayDayIndex;
@end

