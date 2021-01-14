/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderItemDelegate.h>
#import <libobjc.A.dylib/CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate.h>

@protocol CNVisualIdentityItemEditorViewControllerDelegate;
@class CNVisualIdentityEditablePrimaryAvatarViewController, CNVisualIdentityItemEditorSegmentedControl, NSLayoutConstraint, UICollectionView, UIView, CNPhotoPickerVariantsManager, NSArray, CNPhotoPickerProviderItem, NSString;

@interface CNVisualIdentityItemEditorViewController : UIViewController <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNPhotoPickerProviderItemDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> {

	id<CNVisualIdentityItemEditorViewControllerDelegate> _delegate;
	CNVisualIdentityEditablePrimaryAvatarViewController* _editableAvatarViewController;
	CNVisualIdentityItemEditorSegmentedControl* _segmentedControl;
	NSLayoutConstraint* _avatarViewSizeConstraint;
	NSLayoutConstraint* _avatarViewTopConstraint;
	NSLayoutConstraint* _segmentedControlHeightConstraint;
	UICollectionView* _styleCollectionView;
	UIView* _styleDividerView;
	CNPhotoPickerVariantsManager* _variantsManager;
	NSArray* _variantProviderItems;
	CNPhotoPickerProviderItem* _providerItem;

}

@property (nonatomic,retain) CNVisualIdentityEditablePrimaryAvatarViewController * editableAvatarViewController;              //@synthesize editableAvatarViewController=_editableAvatarViewController - In the implementation block
@property (nonatomic,retain) CNVisualIdentityItemEditorSegmentedControl * segmentedControl;                                   //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarViewSizeConstraint;                                                   //@synthesize avatarViewSizeConstraint=_avatarViewSizeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarViewTopConstraint;                                                    //@synthesize avatarViewTopConstraint=_avatarViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * segmentedControlHeightConstraint;                                           //@synthesize segmentedControlHeightConstraint=_segmentedControlHeightConstraint - In the implementation block
@property (nonatomic,retain) UICollectionView * styleCollectionView;                                                          //@synthesize styleCollectionView=_styleCollectionView - In the implementation block
@property (nonatomic,retain) UIView * styleDividerView;                                                                       //@synthesize styleDividerView=_styleDividerView - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                                  //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) NSArray * variantProviderItems;                                                                  //@synthesize variantProviderItems=_variantProviderItems - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * providerItem;                                                        //@synthesize providerItem=_providerItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNVisualIdentityItemEditorViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<CNVisualIdentityItemEditorViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)providerItemDidUpdate:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)didTapDone;
-(void)setDelegate:(id<CNVisualIdentityItemEditorViewControllerDelegate>)arg1 ;
-(BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg1 ;
-(void)setupBarButtonItems;
-(CNPhotoPickerProviderItem *)providerItem;
-(id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2 ;
-(void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2 ;
-(void)didTapEditableAvatar:(id)arg1 ;
-(void)adjustAvatarViewConstraintsForKeyboardFrame:(CGRect)arg1 ;
-(void)updateDoneButtonEnabledStateForText:(id)arg1 ;
-(double)editorViewBottomYForAvatarSize:(double)arg1 withContainerTopMargin:(double)arg2 ;
-(void)forceEmojiKeyboardIfNeeded;
-(void)setupEditableAvatarViewController;
-(void)beginEditingAvatar;
-(BOOL)shouldBeginEditing;
-(void)switchEditorToMode:(unsigned long long)arg1 ;
-(void)setupSegmentedControl;
-(void)setupStyleCollectionView;
-(void)didTapCancel;
-(void)setupViewWithProviderItem:(id)arg1 ;
-(void)hideStyleCollectionView;
-(BOOL)shouldShowStyleCollectionView;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)updateFlowLayoutItemSize;
-(long long)numberOfItemsPerRow;
-(id)updatedProviderItem;
-(double)textFieldFontSize;
-(BOOL)isEmojiProviderItemType;
-(void)didTapSegmentedControl:(id)arg1 ;
-(void)generateProviderItems;
-(double)editableAvatarViewEdgeLength;
-(double)fontSizeForContainerSize:(double)arg1 ;
-(double)segmentedControlTopMargin;
-(double)styleContainerTopMargin;
-(CNVisualIdentityEditablePrimaryAvatarViewController *)editableAvatarViewController;
-(NSLayoutConstraint *)avatarViewSizeConstraint;
-(void)setEditableAvatarViewController:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1 ;
-(void)setAvatarViewSizeConstraint:(NSLayoutConstraint *)arg1 ;
-(UICollectionView *)styleCollectionView;
-(void)setProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(NSLayoutConstraint *)avatarViewTopConstraint;
-(void)setAvatarViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStyleCollectionView:(UICollectionView *)arg1 ;
-(NSLayoutConstraint *)segmentedControlHeightConstraint;
-(void)setSegmentedControlHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)styleDividerView;
-(void)setStyleDividerView:(UIView *)arg1 ;
-(NSArray *)variantProviderItems;
-(void)setVariantProviderItems:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(CNVisualIdentityItemEditorSegmentedControl *)segmentedControl;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setSegmentedControl:(CNVisualIdentityItemEditorSegmentedControl *)arg1 ;
-(void)viewDidLayoutSubviews;
@end

