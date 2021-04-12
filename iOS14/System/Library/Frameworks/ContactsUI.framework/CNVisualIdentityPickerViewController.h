/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarEditingManagerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderGroupDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNVisualIdentityItemEditorViewControllerDelegate.h>

@protocol CNVisualIdentityPickerViewControllerDelegate;
@class NSString, UICollectionView, CNPhotoPickerProviderItem, CNAvatarEditingManager, CNPhotoPickerActionsViewController, CNVisualIdentityEditablePrimaryAvatarViewController, CNContactStyle, CNPhotoPickerHeaderView, CNVisualIdentity, CNPhotoPickerDataSource;

@interface CNVisualIdentityPickerViewController : UIViewController <UINavigationControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, CNPhotoPickerHeaderViewDelegate, UIAdaptivePresentationControllerDelegate, CNAvatarEditingManagerDelegate, AVTAvatarEditorViewControllerDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, CNPhotoPickerProviderGroupDelegate, CNPhotoPickerActionsViewControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate> {

	BOOL _allowRotation;
	id<CNVisualIdentityPickerViewControllerDelegate> _delegate;
	NSString* _assignActionTitleOverride;
	UICollectionView* _collectionView;
	CNPhotoPickerProviderItem* _lastSelectedProviderItem;
	CNPhotoPickerProviderItem* _editingProviderItem;
	CNPhotoPickerProviderItem* _duplicatingProviderItem;
	CNAvatarEditingManager* _avatarEditingManager;
	CNPhotoPickerActionsViewController* _actionsViewController;
	CNVisualIdentityEditablePrimaryAvatarViewController* _editablePrimaryAvatarController;
	CNContactStyle* _contactStyle;
	CNPhotoPickerHeaderView* _headerView;
	CNVisualIdentity* _pendingVisualIdentity;
	CNPhotoPickerDataSource* _dataSource;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * lastSelectedProviderItem;                                               //@synthesize lastSelectedProviderItem=_lastSelectedProviderItem - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * editingProviderItem;                                                    //@synthesize editingProviderItem=_editingProviderItem - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * duplicatingProviderItem;                                                //@synthesize duplicatingProviderItem=_duplicatingProviderItem - In the implementation block
@property (nonatomic,retain) CNAvatarEditingManager * avatarEditingManager;                                                      //@synthesize avatarEditingManager=_avatarEditingManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionsViewController * actionsViewController;                                         //@synthesize actionsViewController=_actionsViewController - In the implementation block
@property (nonatomic,retain) CNVisualIdentityEditablePrimaryAvatarViewController * editablePrimaryAvatarController;              //@synthesize editablePrimaryAvatarController=_editablePrimaryAvatarController - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;                                                                      //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowRotation;                                                                                 //@synthesize allowRotation=_allowRotation - In the implementation block
@property (nonatomic,retain) CNPhotoPickerHeaderView * headerView;                                                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) CNVisualIdentity * pendingVisualIdentity;                                                           //@synthesize pendingVisualIdentity=_pendingVisualIdentity - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerDataSource * dataSource;                                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNVisualIdentityPickerViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * assignActionTitleOverride;                                                               //@synthesize assignActionTitleOverride=_assignActionTitleOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)log;
+(CGSize)defaultItemSize;
+(BOOL)canShowAvatarEditor;
+(double)itemsPerRowForWidth:(double)arg1 ;
+(BOOL)canShowPhotoPickerForView:(id)arg1 withTraitCollection:(id)arg2 ;
+(CGSize)defaultContentSize;
+(id)navigationControllerForPicker:(id)arg1 ;
+(id)imagePickerForContact:(id)arg1 ;
+(id)photoPickerForGameCenterWithContact:(id)arg1 ;
+(id)imagePickerForGroupIdentity:(id)arg1 ;
+(id)imagePickerForVisualIdentity:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setHeaderView:(CNPhotoPickerHeaderView *)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)buildHeaderView;
-(void)visualIdentityEditorControllerDidCancel:(id)arg1 ;
-(void)confirmCancelAction;
-(void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2 ;
-(CNVisualIdentity *)pendingVisualIdentity;
-(void)photoPickerActionsViewControllerDidFinish:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(void)photoPickerActionsViewController:(id)arg1 didPerformAction:(long long)arg2 withProviderItem:(id)arg3 atIndexPath:(id)arg4 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)initializeHeaderView;
-(void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2 ;
-(void)updateDoneButtonEnabledState;
-(void)photoPickerHeaderView:(id)arg1 didUpdateIdentityNameTextField:(id)arg2 withText:(id)arg3 ;
-(void)buildCollectionView;
-(void)photoPickerHeaderViewDidTapClearAvatarImageButton:(id)arg1 ;
-(double)collectionViewPaddingForCatalyst;
-(void)photoPickerHeaderViewDidReceiveDroppedImageData:(id)arg1 ;
-(void)updateActiveIndexPath:(id)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 style:(id)arg2 allowRotation:(BOOL)arg3 ;
-(void)updateVisualIdentityWithProviderItem:(id)arg1 ;
-(id)photoPickerNavigationControllerForRootController:(id)arg1 ;
-(void)updateActiveIndexPath:(id)arg1 reload:(BOOL)arg2 ;
-(void)updateInjectedItemsSectionForProviderItem:(id)arg1 ;
-(id)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(BOOL)arg3 ;
-(void)updateDoneButtonEnabledStateForEditingProviderItem:(id)arg1 ;
-(void)updateHeaderViewAvatar;
-(id)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(BOOL)arg3 scrollToItem:(BOOL)arg4 ;
-(void)deleteExistingItem:(id)arg1 ;
-(void)setSuggestionsProviderItemAsActiveItem:(id)arg1 ;
-(id)contactImageForCurrentActiveItem;
-(void)headerActionPressedAtIndexPath:(id)arg1 ;
-(void)didSelectSuggestionsAddItemAtIndexPath:(id)arg1 ;
-(void)processSelectionForSuggestionsProviderItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)presentEmojiEditor;
-(void)handleAddEmojiItemSelectedWithIndexPath:(id)arg1 ;
-(void)presentMonogramEditorFromIndexPath:(id)arg1 ;
-(id<CNVisualIdentityPickerViewControllerDelegate>)delegate;
-(BOOL)isEditingOrDuplicatingItem;
-(void)selectItem:(id)arg1 presentFromViewControllerIfNeeded:(id)arg2 ;
-(void)presentVisualIdentityItemEditorForItem:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentCameraImagePicker;
-(long long)defaultModalPresentationStyle;
-(void)showAvatarEditorForCreation;
-(CNPhotoPickerProviderItem *)lastSelectedProviderItem;
-(void)showAvatarPosePickerFromItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)presentLibraryImagePickerForIndexPath:(id)arg1 ;
-(CNContactStyle *)contactStyle;
-(void)showAvatarCropAndScaleForItem:(id)arg1 fromViewController:(id)arg2 ;
-(void)deleteItemFromRecentsImageStore:(id)arg1 ;
-(void)presentEditImagePickerForImageData:(id)arg1 cropRect:(CGRect)arg2 fromViewController:(id)arg3 ;
-(CNPhotoPickerProviderItem *)editingProviderItem;
-(void)reloadItemsForUpdatedSuggestionsGroup:(id)arg1 atSectionIndex:(long long)arg2 ;
-(void)setLastSelectedProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(void)updateActiveIndexPathForUpdatedSuggestionsGroup:(id)arg1 atSectionIndex:(long long)arg2 ;
-(void)updateVisualIdentityWithName:(id)arg1 locale:(id)arg2 ;
-(void)updateMonogramsForUpdatedVisualIdentity:(id)arg1 ;
-(void)updateEmojiSuggestionsForUpdatedVisualIdentity:(id)arg1 locale:(id)arg2 ;
-(void)saveItemToRecentsImageStore:(id)arg1 ;
-(id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(id)providerItemFromPhotoPickerInfo:(id)arg1 ;
-(void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3 ;
-(void)setEditingProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(void)presentActionsViewControllerForProviderItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)presentDismissConfirmation;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)presentEditItemViewController:(id)arg1 fromViewController:(id)arg2 ;
-(void)updateForSelectedProviderItem:(id)arg1 ;
-(void)didCancelEditingProviderItemFromViewController:(id)arg1 ;
-(CNPhotoPickerProviderItem *)duplicatingProviderItem;
-(void)viewController:(id)arg1 didSelectUpdatedProviderItem:(id)arg2 ;
-(void)setDuplicatingProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(CNAvatarEditingManager *)avatarEditingManager;
-(void)setAvatarEditingManager:(CNAvatarEditingManager *)arg1 ;
-(CNVisualIdentityEditablePrimaryAvatarViewController *)editablePrimaryAvatarController;
-(void)setEditablePrimaryAvatarController:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1 ;
-(void)setPendingVisualIdentity:(CNVisualIdentity *)arg1 ;
-(void)setAllowRotation:(BOOL)arg1 ;
-(BOOL)allowRotation;
-(UICollectionView *)collectionView;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CNPhotoPickerDataSource *)dataSource;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)done:(id)arg1 ;
-(void)setDelegate:(id<CNVisualIdentityPickerViewControllerDelegate>)arg1 ;
-(void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)textFieldFontSize;
-(NSString *)assignActionTitleOverride;
-(void)setAssignActionTitleOverride:(NSString *)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)viewDidLoad;
-(CNPhotoPickerActionsViewController *)actionsViewController;
-(void)setActionsViewController:(CNPhotoPickerActionsViewController *)arg1 ;
-(BOOL)isModalInPresentation;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)hasPendingChanges;
-(CNPhotoPickerHeaderView *)headerView;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPresentingModalViewController;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)photoPickerProviderGroupDidUpdate:(id)arg1 ;
-(void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2 ;
-(id)visualIdentity;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(void)viewDidLayoutSubviews;
@end

