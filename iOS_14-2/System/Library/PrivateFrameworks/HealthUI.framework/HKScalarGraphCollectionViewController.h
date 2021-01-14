/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol HKScalarGraphCollectionViewDelegate;
@class NSArray, UICollectionView, HKScalarGraphCollectionViewCell, HKUnitPreferenceController, NSString;

@interface HKScalarGraphCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	NSArray* _audiograms;
	id<HKScalarGraphCollectionViewDelegate> _delegate;
	UICollectionView* _collectionView;
	HKScalarGraphCollectionViewCell* _currentCell;
	long long _currentIndex;
	HKUnitPreferenceController* _unitController;
	double _collectionViewHeight;
	double _minimumHeight;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) HKScalarGraphCollectionViewCell * currentCell;                 //@synthesize currentCell=_currentCell - In the implementation block
@property (assign,nonatomic) long long currentIndex;                                               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                          //@synthesize unitController=_unitController - In the implementation block
@property (assign,nonatomic) double collectionViewHeight;                                          //@synthesize collectionViewHeight=_collectionViewHeight - In the implementation block
@property (assign,nonatomic) double minimumHeight;                                                 //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,copy) NSArray * audiograms;                                                   //@synthesize audiograms=_audiograms - In the implementation block
@property (assign,nonatomic,__weak) id<HKScalarGraphCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentIndex;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(HKUnitPreferenceController *)unitController;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<HKScalarGraphCollectionViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<HKScalarGraphCollectionViewDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(HKScalarGraphCollectionViewCell *)currentCell;
-(CGSize)preferredContentSize;
-(void)setCurrentCell:(HKScalarGraphCollectionViewCell *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)reload;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)_setupChartCollectionView;
-(void)_pinView:(id)arg1 toParentGuide:(id)arg2 ;
-(void)setCollectionViewHeight:(double)arg1 ;
-(void)resetToIndex:(long long)arg1 ;
-(id)_buildCollectionViewLayout;
-(id)initWithMinimumHeight:(double)arg1 unitController:(id)arg2 ;
-(void)redrawCurrentCell;
-(void)resetToMostRecent;
-(NSArray *)audiograms;
-(void)setAudiograms:(NSArray *)arg1 ;
-(double)collectionViewHeight;
@end

