/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol CNSharingProfilePhotoPickerViewControllerDelegate, AVTAvatarRecord;
@class CNSharingProfilePhotoPickerItem, CNContact, CNSharingProfileLogger, UICollectionViewFlowLayout, UIImageView, UICollectionView, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileAvatarItemProvider, NSArray, CNPhotoPickerVariantsManager, CNPhotoPickerColorVariant, PRMonogramColor, NSString;

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
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                                 //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * animojiBackgroundColor;                                             //@synthesize animojiBackgroundColor=_animojiBackgroundColor - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramBackgroundColor;                                                      //@synthesize monogramBackgroundColor=_monogramBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfilePhotoPickerViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNSharingProfilePhotoPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNSharingProfilePhotoPickerViewControllerDelegate>)arg1 ;
-(CNSharingProfileAvatarItemProvider *)itemProvider;
-(void)setItemProvider:(CNSharingProfileAvatarItemProvider *)arg1 ;
-(CNSharingProfileLogger *)logger;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setSelectedItem:(CNSharingProfilePhotoPickerItem *)arg1 ;
-(CNSharingProfilePhotoPickerItem *)selectedItem;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(void)setupConstraints;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 logger:(id)arg4 ;
-(void)updateInteritemSpacing;
-(double)previewEdgeSize;
-(void)reloadItems;
-(id)buildItems;
-(void)updateWithContact:(id)arg1 fromFullPhotoPicker:(BOOL)arg2 ;
-(void)updatePreviewForSelectedItem;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(PRMonogramColor *)monogramColor;
-(BOOL)isSmallScreenDevice;
-(void)setIsSmallScreenDevice:(BOOL)arg1 ;
-(UICollectionViewFlowLayout *)selectorLayout;
-(void)setSelectorLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UIImageView *)previewView;
-(void)setPreviewView:(UIImageView *)arg1 ;
-(UICollectionView *)selectorView;
-(void)setSelectorView:(UICollectionView *)arg1 ;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(CNPhotoPickerColorVariant *)animojiBackgroundColor;
-(void)setAnimojiBackgroundColor:(CNPhotoPickerColorVariant *)arg1 ;
-(PRMonogramColor *)monogramBackgroundColor;
-(void)setMonogramBackgroundColor:(PRMonogramColor *)arg1 ;
@end

