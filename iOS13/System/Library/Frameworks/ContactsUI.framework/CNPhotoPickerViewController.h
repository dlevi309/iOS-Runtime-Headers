/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerHeaderViewDelegate.h>
#import <libobjc.A.dylib/CNContactPhotoViewDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarEditingManagerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderGroupDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerActionsViewControllerDelegate.h>

@protocol CNPhotoPickerViewControllerDelegate;
@class UICollectionView, CNMutableContact, CNPhotoPickerDataSource, CNPhotoPickerHeaderView, CNPhotoPickerProviderItem, CNAvatarEditingManager, CNPhotoPickerActionsViewController, CNContactStyle, NSString;

@interface CNPhotoPickerViewController : UIViewController <UINavigationControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, CNPhotoPickerHeaderViewDelegate, CNContactPhotoViewDelegate, CNPhotoPickerVariantListControllerDelegate, UIAdaptivePresentationControllerDelegate, CNAvatarEditingManagerDelegate, AVTAvatarEditorViewControllerDelegate, CNPhotoPickerProviderGroupDelegate, CNPhotoPickerActionsViewControllerDelegate> {

	BOOL _allowRotation;
	id<CNPhotoPickerViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	CNMutableContact* _pendingEditContact;
	CNPhotoPickerDataSource* _dataSource;
	CNPhotoPickerHeaderView* _headerView;
	CNPhotoPickerProviderItem* _editingProviderItem;
	CNPhotoPickerProviderItem* _duplicatingProviderItem;
	CNAvatarEditingManager* _posePickerController;
	CNPhotoPickerActionsViewController* _actionsViewController;
	CNContactStyle* _contactStyle;
	NSString* _assignActionTitleOverride;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CNMutableContact * pendingEditContact;                                   //@synthesize pendingEditContact=_pendingEditContact - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerHeaderView * headerView;                                  //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * editingProviderItem;                         //@synthesize editingProviderItem=_editingProviderItem - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * duplicatingProviderItem;                     //@synthesize duplicatingProviderItem=_duplicatingProviderItem - In the implementation block
@property (nonatomic,retain) CNAvatarEditingManager * posePickerController;                           //@synthesize posePickerController=_posePickerController - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionsViewController * actionsViewController;              //@synthesize actionsViewController=_actionsViewController - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;                                           //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowRotation;                                                      //@synthesize allowRotation=_allowRotation - In the implementation block
@property (nonatomic,retain) NSString * assignActionTitleOverride;                                    //@synthesize assignActionTitleOverride=_assignActionTitleOverride - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
+(id)log;
+(id)descriptorForRequiredKeys;
+(BOOL)canShowAvatarEditor;
+(double)itemsPerRowForWidth:(double)arg1 ;
+(BOOL)canShowPhotoPickerForView:(id)arg1 withTraitCollection:(id)arg2 ;
+(CGSize)defaultContentSize;
+(id)navigationControllerForPicker:(id)arg1 ;
+(id)photoPickerForGameCenterWithContact:(id)arg1 ;
-(id<CNPhotoPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNPhotoPickerViewControllerDelegate>)arg1 ;
-(id)contact;
-(CNPhotoPickerDataSource *)dataSource;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(CNPhotoPickerHeaderView *)headerView;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(BOOL)isModalInPresentation;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setAllowRotation:(BOOL)arg1 ;
-(BOOL)allowRotation;
-(NSString *)assignActionTitleOverride;
-(void)setAssignActionTitleOverride:(NSString *)arg1 ;
-(id)contactViewCache;
-(void)photoViewDidUpdate:(id)arg1 ;
-(void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(CNContactStyle *)contactStyle;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPresentingModalViewController;
-(CNMutableContact *)pendingEditContact;
-(void)setPendingEditContact:(CNMutableContact *)arg1 ;
-(void)photoPickerProviderGroupDidUpdate:(id)arg1 ;
-(void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2 ;
-(CNPhotoPickerActionsViewController *)actionsViewController;
-(void)setActionsViewController:(CNPhotoPickerActionsViewController *)arg1 ;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(void)buildCollectionView;
-(void)avatarPosePickerManager:(id)arg1 didFinishWithProviderItem:(id)arg2 ;
-(void)photoPickerActionsViewControllerDidFinish:(id)arg1 ;
-(void)photoPickerActionsViewController:(id)arg1 didPerformAction:(long long)arg2 withProviderItem:(id)arg3 atIndexPath:(id)arg4 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(void)headerViewPhotoViewTapped;
-(id)initWithContact:(id)arg1 style:(id)arg2 configuration:(id)arg3 ;
-(id)initWithPhotosDataSource:(id)arg1 style:(id)arg2 allowRotation:(BOOL)arg3 ;
-(void)confirmCancelAction;
-(void)buildHeaderView;
-(id)photoPickerNavigationControllerForRootController:(id)arg1 ;
-(void)updateActiveIndexPath:(id)arg1 reload:(BOOL)arg2 ;
-(void)updateActiveIndexPath:(id)arg1 ;
-(BOOL)photoHasChanged;
-(void)updateContactWithProviderItem:(id)arg1 ;
-(void)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(BOOL)arg3 ;
-(void)deleteExistingItem:(id)arg1 ;
-(id)contactImageForCurrentActiveItem;
-(void)headerActionPressedAtIndexPath:(id)arg1 ;
-(BOOL)isEditingOrDuplicatingItem;
-(void)selectItem:(id)arg1 presentFromViewControllerIfNeeded:(id)arg2 ;
-(void)presentPhotoPickerVariantListFor:(id)arg1 FromViewController:(id)arg2 ;
-(long long)defaultModalPresentationStyle;
-(void)showAvatarEditorForCreation;
-(void)showAvatarPosePickerFromItem:(id)arg1 ;
-(void)showAvatarCropAndScaleForItem:(id)arg1 fromViewController:(id)arg2 ;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(void)presentLibraryImagePicker;
-(void)presentCameraImagePicker;
-(void)presentEditImagePickerForImageData:(id)arg1 cropRect:(CGRect)arg2 fromViewController:(id)arg3 ;
-(id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3 ;
-(id)providerItemFromPhotoPickerInfo:(id)arg1 ;
-(void)presentActionsViewControllerForProviderItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)presentDismissConfirmation;
-(void)deleteItemFromRecentsImageStore:(id)arg1 ;
-(void)saveItemToRecentsImageStore:(id)arg1 ;
-(CNPhotoPickerProviderItem *)editingProviderItem;
-(void)setEditingProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(CNPhotoPickerProviderItem *)duplicatingProviderItem;
-(void)setDuplicatingProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(CNAvatarEditingManager *)posePickerController;
-(void)setPosePickerController:(CNAvatarEditingManager *)arg1 ;
@end

