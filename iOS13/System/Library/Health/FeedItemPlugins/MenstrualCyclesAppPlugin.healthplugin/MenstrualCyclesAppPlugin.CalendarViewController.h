/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/HKMCViewModelProviderObserver.h>

@class _TtC24MenstrualCyclesAppPlugin18CalendarViewLayout;

@interface MenstrualCyclesAppPlugin.CalendarViewController : UICollectionViewController <HKMCViewModelProviderObserver> {

	 state;
	 loggingMethod;
	 isYearOverlayVisible;
	 decelerationTargetContentOffset;
	 $__lazy_storage_$_yearOverlay;
	 collectionViewDataSource;
	 $__lazy_storage_$_addButton;
	 dateCache;
	 $__lazy_storage_$_viewModelProvider;
	 $__lazy_storage_$_dayFormatter;
	 $__lazy_storage_$_monthFormatter;
	 changeSet;
	 analysisProvider;

}

@property (readonly,nonatomic) _TtC24MenstrualCyclesAppPlugin18CalendarViewLayout * collectionViewLayout; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
-(void)viewModelProviderDidUpdate:(id)arg1 ;
-(id)calendarDataSource:(id)arg1 cellForItemIn:(id)arg2 date:(id)arg3 dayComponent:(long long)arg4 indexPath:(id)arg5 ;
-(void)significantTimeChangeDidOccur;
-(void)cancelAndDismiss;
-(void)saveChangesAndDismiss;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(_TtC24MenstrualCyclesAppPlugin18CalendarViewLayout *)collectionViewLayout;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
@end

