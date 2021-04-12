/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UILabel;

@interface MenstrualCyclesAppPlugin.LoggingCardCarouselViewController : UIViewController <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	 collectionView;
	 loggingCards;
	 userPreferredUnit;
	 mutableDaySummary;
	 originalDaySummary;
	 selectedDatatype;
	 collectionViewFlowLayout;
	??? gregorianCalendar;
	 $__lazy_storage_$_dateLabelBackgroundVibrancyView;
	 $__lazy_storage_$_dateLabel;
	 $__lazy_storage_$_cardProgressLabelBackgroundVibrancyView;
	 $__lazy_storage_$_cardProgressLabel;
	 doneButtonBackgroundVibrancyView;
	 $__lazy_storage_$_doneButton;
	 $__lazy_storage_$_doneLabel;
	 configuration;
	 indexOfCellBeforeDragging;
	 contentOffsetXBeforeDragging;
	 infiniteScrollingEnabled;
	 loggingCardValidationResult;
	 loggingCardCarouselViewControllerDelegate;
	 temperatureFormatter;
	 backgroundBlurView;
	 editOrdering;

}

@property (readonly,nonatomic) UILabel * axCardProgressLabel; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (readonly,nonatomic) long long preferredInterfaceOrientationForPresentation; 
@property (readonly,nonatomic) BOOL shouldAutorotate; 
@property (readonly,nonatomic) BOOL prefersStatusBarHidden; 
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)prefersStatusBarHidden;
-(void)doneTapped:(id)arg1 ;
-(UILabel *)axCardProgressLabel;
@end

