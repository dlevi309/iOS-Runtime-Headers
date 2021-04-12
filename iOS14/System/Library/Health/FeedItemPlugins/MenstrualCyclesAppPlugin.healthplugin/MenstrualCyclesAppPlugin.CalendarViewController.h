/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)significantTimeChangeDidOccur;
-(void)cancelAndDismiss;
-(void)viewModelProviderDidUpdate:(id)arg1 ;
-(void)saveChangesAndDismiss;
-(id)calendarDataSource:(id)arg1 cellForItemIn:(id)arg2 date:(id)arg3 dayComponent:(long long)arg4 indexPath:(id)arg5 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(_TtC24MenstrualCyclesAppPlugin18CalendarViewLayout *)collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

