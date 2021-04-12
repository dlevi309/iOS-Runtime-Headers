/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderItemDelegate.h>

@protocol CNPhotoPickerVariantListControllerDelegate;
@class CNPhotoPickerProviderItem, UICollectionView, UIView, NSString, UIImageView, CNPhotoPickerPreviewView, NSArray, CNPhotoPickerVariantsManager;

@interface CNPhotoPickerVariantListController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CNPhotoPickerProviderItemDelegate> {

	BOOL _showPreview;
	BOOL _showsToolbar;
	BOOL _commitsChangesOnSelection;
	BOOL _showsSelection;
	BOOL _shouldShowCaptions;
	id<CNPhotoPickerVariantListControllerDelegate> _delegate;
	CNPhotoPickerProviderItem* _originalItem;
	UICollectionView* _collectionView;
	UIView* _sectionHeaderView;
	/*^block*/id _numberOfItemsPerRowProvider;
	unsigned long long _cellStyle;
	NSString* _rightBarButtonTitle;
	UIView* _headerView;
	UIImageView* _previewImageView;
	CNPhotoPickerPreviewView* _posePreview;
	NSString* _selectedVariantIdentifier;
	NSArray* _providerItems;
	CNPhotoPickerVariantsManager* _variantsManager;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIImageView * previewImageView;                                              //@synthesize previewImageView=_previewImageView - In the implementation block
@property (nonatomic,retain) CNPhotoPickerPreviewView * posePreview;                                      //@synthesize posePreview=_posePreview - In the implementation block
@property (nonatomic,retain) NSString * selectedVariantIdentifier;                                        //@synthesize selectedVariantIdentifier=_selectedVariantIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * providerItems;                                                     //@synthesize providerItems=_providerItems - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                              //@synthesize variantsManager=_variantsManager - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCaptions;                                                     //@synthesize shouldShowCaptions=_shouldShowCaptions - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerVariantListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerProviderItem * originalItem;                                  //@synthesize originalItem=_originalItem - In the implementation block
@property (nonatomic,readonly) NSString * variantsDisplayTitle; 
@property (nonatomic,retain) UIView * sectionHeaderView;                                                  //@synthesize sectionHeaderView=_sectionHeaderView - In the implementation block
@property (nonatomic,copy) id numberOfItemsPerRowProvider;                                                //@synthesize numberOfItemsPerRowProvider=_numberOfItemsPerRowProvider - In the implementation block
@property (assign,nonatomic) BOOL showPreview;                                                            //@synthesize showPreview=_showPreview - In the implementation block
@property (assign,nonatomic) unsigned long long cellStyle;                                                //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) BOOL showsToolbar;                                                           //@synthesize showsToolbar=_showsToolbar - In the implementation block
@property (assign,nonatomic) BOOL commitsChangesOnSelection;                                              //@synthesize commitsChangesOnSelection=_commitsChangesOnSelection - In the implementation block
@property (assign,nonatomic) BOOL showsSelection;                                                         //@synthesize showsSelection=_showsSelection - In the implementation block
@property (assign,nonatomic) NSString * rightBarButtonTitle;                                              //@synthesize rightBarButtonTitle=_rightBarButtonTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)topMarginForBounds:(CGRect)arg1 shouldShowCaptions:(BOOL)arg2 ;
+(CGRect)frameForHeaderInBounds:(CGRect)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setCellStyle:(unsigned long long)arg1 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)buildCollectionView;
-(void)buildHeader;
-(id<CNPhotoPickerVariantListControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CNPhotoPickerPreviewView *)posePreview;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)sectionHeaderView;
-(id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2 ;
-(NSString *)variantsDisplayTitle;
-(void)setSectionHeaderView:(UIView *)arg1 ;
-(void)updateForNewOriginalItem:(id)arg1 ;
-(void)didFinishSelectingVariant;
-(id)numberOfItemsPerRowProvider;
-(void)setNumberOfItemsPerRowProvider:(id)arg1 ;
-(void)setShowPreview:(BOOL)arg1 ;
-(void)setShowsToolbar:(BOOL)arg1 ;
-(UIImageView *)previewImageView;
-(BOOL)commitsChangesOnSelection;
-(void)setCommitsChangesOnSelection:(BOOL)arg1 ;
-(NSString *)rightBarButtonTitle;
-(void)setRightBarButtonTitle:(NSString *)arg1 ;
-(void)setPreviewImageView:(UIImageView *)arg1 ;
-(void)setPosePreview:(CNPhotoPickerPreviewView *)arg1 ;
-(NSArray *)providerItems;
-(NSString *)selectedVariantIdentifier;
-(void)setSelectedVariantIdentifier:(NSString *)arg1 ;
-(void)setProviderItems:(NSArray *)arg1 ;
-(BOOL)shouldShowCaptions;
-(void)setShouldShowCaptions:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(CNPhotoPickerProviderItem *)originalItem;
-(void)cancel:(id)arg1 ;
-(void)providerItemDidUpdate:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CNPhotoPickerVariantListControllerDelegate>)arg1 ;
-(void)updateFlowLayoutItemSize;
-(void)generateProviderItems;
-(void)viewDidLoad;
-(id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2 selectedVariantIdentifier:(id)arg3 ;
-(void)setShowsSelection:(BOOL)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(UIView *)headerView;
-(void)updatePreviewWithItem:(id)arg1 ;
-(unsigned long long)cellStyle;
-(BOOL)showPreview;
-(id)scrollView;
-(BOOL)showsSelection;
-(void)viewDidLayoutSubviews;
-(BOOL)showsToolbar;
@end

