/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol CNSharingProfilePhotoPickerViewControllerDelegate, AVTAvatarRecord;
@class CNSharingProfilePhotoPickerItem, CNContact, CNSharingProfileLogger, UICollectionViewFlowLayout, UIImageView, UICollectionView, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileAvatarItemProvider, NSArray, UIButton, CNPhotoPickerVariantsManager, CNPhotoPickerColorVariant, PRMonogramColor, NSString;

@interface CNSharingProfilePhotoPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	BOOL _isSmallScreenDevice;
	id<CNSharingProfilePhotoPickerViewControllerDelegate> _delegate;
	CNSharingProfilePhotoPickerItem* _selectedItem;
	CNContact* _contact;
	id<AVTAvatarRecord> _avatarRecord;
	CNSharingProfileLogger* _logger;
	UICollectionViewFlowLayout* _selectorLayout;
	UIImageView* _previewView;
	UICollectionView* _selectorView;
	CNSharingProfileAvatarItemProviderConfiguration* _avatarItemProviderConfiguration;
	CNSharingProfileAvatarItemProvider* _itemProvider;
	NSArray* _items;
	UIButton* _customizeButton;
	CNPhotoPickerVariantsManager* _variantsManager;
	CNPhotoPickerColorVariant* _animojiBackgroundColor;
	PRMonogramColor* _monogramBackgroundColor;

}

@property (assign,nonatomic) BOOL isSmallScreenDevice;                                                                       //@synthesize isSmallScreenDevice=_isSmallScreenDevice - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                               //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNSharingProfileLogger * logger;                                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * selectorLayout;                                                    //@synthesize selectorLayout=_selectorLayout - In the implementation block
@property (nonatomic,retain) UIImageView * previewView;                                                                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UICollectionView * selectorView;                                                                //@synthesize selectorView=_selectorView - In the implementation block
@property (nonatomic,retain) CNSharingProfilePhotoPickerItem * selectedItem;                                                 //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration;              //@synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProvider * itemProvider;                                              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                                                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIButton * customizeButton;                                                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                                 //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * animojiBackgroundColor;                                             //@synthesize animojiBackgroundColor=_animojiBackgroundColor - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramBackgroundColor;                                                      //@synthesize monogramBackgroundColor=_monogramBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfilePhotoPickerViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCustomizeButton:(UIButton *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id<CNSharingProfilePhotoPickerViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CNSharingProfileAvatarItemProvider *)itemProvider;
-(UIImageView *)previewView;
-(PRMonogramColor *)monogramColor;
-(NSArray *)items;
-(void)setDelegate:(id<CNSharingProfilePhotoPickerViewControllerDelegate>)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)reloadData;
-(void)viewDidLoad;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(CNSharingProfileLogger *)logger;
-(void)setItemProvider:(CNSharingProfileAvatarItemProvider *)arg1 ;
-(CNSharingProfilePhotoPickerItem *)selectedItem;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(double)previewEdgeSize;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 logger:(id)arg4 ;
-(void)reloadItems;
-(double)previewToSelectorSpacing;
-(void)updateInteritemSpacing;
-(void)updatePreviewForSelectedItem;
-(void)updateWithContact:(id)arg1 fromFullPhotoPicker:(BOOL)arg2 ;
-(void)didSelectCustomizeButton:(id)arg1 ;
-(UICollectionViewFlowLayout *)selectorLayout;
-(BOOL)isSmallScreenDevice;
-(void)setIsSmallScreenDevice:(BOOL)arg1 ;
-(void)setSelectorLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionView *)selectorView;
-(void)setSelectorView:(UICollectionView *)arg1 ;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(CNPhotoPickerColorVariant *)animojiBackgroundColor;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(void)setAnimojiBackgroundColor:(CNPhotoPickerColorVariant *)arg1 ;
-(PRMonogramColor *)monogramBackgroundColor;
-(void)setMonogramBackgroundColor:(PRMonogramColor *)arg1 ;
-(UIButton *)customizeButton;
-(id)buildItems;
-(void)setupConstraints;
-(void)viewDidLayoutSubviews;
-(void)setSelectedItem:(CNSharingProfilePhotoPickerItem *)arg1 ;
-(void)setPreviewView:(UIImageView *)arg1 ;
@end

