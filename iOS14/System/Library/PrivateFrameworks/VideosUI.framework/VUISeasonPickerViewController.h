/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@class VUISeasonPickerCollectionViewCell, VUIFamilyMember, _VUISeasonPickerView, UIViewController, VUIViewControllerContentPresenter, VUIMediaEntitiesDataSource, UICollectionViewDiffableDataSource, NSString;

@interface VUISeasonPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol> {

	VUISeasonPickerCollectionViewCell* _sizingCell;
	BOOL _lastViewedSeasonWasManuallyDeleted;
	VUIFamilyMember* _familyMember;
	_VUISeasonPickerView* _seasonPickerView;
	UIViewController* _currentSeasonViewController;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUIMediaEntitiesDataSource* _dataSource;
	UICollectionViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,retain) _VUISeasonPickerView * seasonPickerView;                              //@synthesize seasonPickerView=_seasonPickerView - In the implementation block
@property (nonatomic,retain) UIViewController * currentSeasonViewController;                       //@synthesize currentSeasonViewController=_currentSeasonViewController - In the implementation block
@property (assign,nonatomic) BOOL lastViewedSeasonWasManuallyDeleted;                              //@synthesize lastViewedSeasonWasManuallyDeleted=_lastViewedSeasonWasManuallyDeleted - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                 //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;              //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                       //@synthesize familyMember=_familyMember - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUIMediaEntitiesDataSource *)dataSource;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(void)setDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLoad;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)loadView;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(id)_createDiffableDataSource;
-(UIViewController *)currentSeasonViewController;
-(void)setLastViewedSeasonWasManuallyDeleted:(BOOL)arg1 ;
-(void)setCurrentSeasonViewController:(UIViewController *)arg1 ;
-(BOOL)lastViewedSeasonWasManuallyDeleted;
-(_VUISeasonPickerView *)seasonPickerView;
-(id)_getSeasonIdentifiersFromSeasons;
-(void)setSeasonPickerView:(_VUISeasonPickerView *)arg1 ;
@end

