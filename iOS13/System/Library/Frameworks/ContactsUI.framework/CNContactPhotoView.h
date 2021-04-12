/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CNPresenterDelegate.h>

@protocol CNPresenterDelegate, CNContactPhotoViewDelegate;
@class NSArray, CNAvatarView, CNMutableContact, PRLikeness, UIButton, UITapGestureRecognizer, UILongPressGestureRecognizer, UIDropInteraction, CNPhotoPickerViewController, NSString;

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNPhotoPickerViewControllerDelegate, CNAvatarViewDelegate, CNPresenterDelegate> {

	BOOL _editing;
	BOOL _showEditingLabel;
	BOOL _modified;
	BOOL _shouldAllowTakePhotoAction;
	BOOL _prohibitsPersonaFetch;
	BOOL _isAnimatingBounce;
	BOOL _acceptsImageDrop;
	NSArray* _contacts;
	double _labelAlpha;
	CNAvatarView* _avatarView;
	id<CNPresenterDelegate> _presenterDelegate;
	id<CNContactPhotoViewDelegate> _delegate;
	CNMutableContact* _pendingEditContact;
	PRLikeness* _originalLikeness;
	PRLikeness* _currentLikeness;
	UIButton* _editPhotoButton;
	NSArray* _variableConstraints;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIDropInteraction* _dropInteraction;
	CNPhotoPickerViewController* _photoPicker;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,retain) CNMutableContact * pendingEditContact;                                  //@synthesize pendingEditContact=_pendingEditContact - In the implementation block
@property (nonatomic,retain) PRLikeness * originalLikeness;                                          //@synthesize originalLikeness=_originalLikeness - In the implementation block
@property (nonatomic,retain) PRLikeness * currentLikeness;                                           //@synthesize currentLikeness=_currentLikeness - In the implementation block
@property (assign,nonatomic) BOOL prohibitsPersonaFetch;                                             //@synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIButton * editPhotoButton;                                             //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingBounce;                                                 //@synthesize isAnimatingBounce=_isAnimatingBounce - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                          //@synthesize modified=_modified - In the implementation block
@property (nonatomic,retain) NSArray * variableConstraints;                                          //@synthesize variableConstraints=_variableConstraints - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                    //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic) BOOL acceptsImageDrop;                                                  //@synthesize acceptsImageDrop=_acceptsImageDrop - In the implementation block
@property (nonatomic,retain) CNPhotoPickerViewController * photoPicker;                              //@synthesize photoPicker=_photoPicker - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                     //@synthesize contacts=_contacts - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) double labelAlpha;                                                      //@synthesize labelAlpha=_labelAlpha - In the implementation block
@property (assign,nonatomic) BOOL showEditingLabel;                                                  //@synthesize showEditingLabel=_showEditingLabel - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowTakePhotoAction;                                      //@synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presenterDelegate;                       //@synthesize presenterDelegate=_presenterDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPhotoViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
+(CGSize)defaultSize;
+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
+(id)supportedPasteboardTypes;
-(void)dealloc;
-(id<CNContactPhotoViewDelegate>)delegate;
-(void)setDelegate:(id<CNContactPhotoViewDelegate>)arg1 ;
-(id)contact;
-(NSArray *)contacts;
-(void)reloadData;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isEditing;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(BOOL)hasPhoto;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(void)setModified:(BOOL)arg1 ;
-(void)updateFontSizes;
-(void)menuWillHide:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(BOOL)prohibitsPersonaFetch;
-(void)setProhibitsPersonaFetch:(BOOL)arg1 ;
-(NSArray *)variableConstraints;
-(BOOL)modified;
-(CNMutableContact *)mutableContact;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(CNPhotoPickerViewController *)photoPicker;
-(void)setPhotoPicker:(CNPhotoPickerViewController *)arg1 ;
-(void)setPresenterDelegate:(id<CNPresenterDelegate>)arg1 ;
-(id<CNPresenterDelegate>)presenterDelegate;
-(void)disablePhotoTapGesture;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPresentingModalViewController;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1 ;
-(void)didUpdateContentForAvatarView:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 monogrammerStyle:(long long)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 threeDTouchEnabled:(BOOL)arg4 contactStore:(id)arg5 allowsImageDrops:(BOOL)arg6 imageRenderer:(id)arg7 ;
-(void)setLabelAlpha:(double)arg1 ;
-(BOOL)isMeContact;
-(CNMutableContact *)pendingEditContact;
-(id)newPendingContactPreservingChangesFrom:(id)arg1 ;
-(id)currentImageData;
-(void)saveChangesFromPendingContact:(id)arg1 toContact:(id)arg2 ;
-(void)saveEdits;
-(void)setEditing:(BOOL)arg1 preservingChanges:(BOOL)arg2 ;
-(void)setHighlightedFrame:(BOOL)arg1 ;
-(void)avatarTapped:(id)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(void)resetPhoto;
-(void)updatePhoto;
-(void)updateViewsAndNotifyDelegate:(BOOL)arg1 ;
-(void)updateEditPhotoButton;
-(void)updatePendingContactWithEditedPropertyItem:(id)arg1 ;
-(BOOL)_isUsingCuratedPhoto;
-(BOOL)_isUsingSilhouette;
-(void)presentPhotoPicker;
-(void)_presentPhotoPicker;
-(void)saveImagePickerMediaFromInfo:(id)arg1 toContact:(id)arg2 ;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(id)previewPath;
-(void)_zoomContactPhoto;
-(void)_presentFullScreenPhoto:(id)arg1 ;
-(void)_bounceSmallPhoto;
-(double)labelAlpha;
-(BOOL)showEditingLabel;
-(void)setShowEditingLabel:(BOOL)arg1 ;
-(BOOL)shouldAllowTakePhotoAction;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setPendingEditContact:(CNMutableContact *)arg1 ;
-(PRLikeness *)originalLikeness;
-(void)setOriginalLikeness:(PRLikeness *)arg1 ;
-(PRLikeness *)currentLikeness;
-(void)setCurrentLikeness:(PRLikeness *)arg1 ;
-(UIButton *)editPhotoButton;
-(void)setEditPhotoButton:(UIButton *)arg1 ;
-(BOOL)isAnimatingBounce;
-(void)setIsAnimatingBounce:(BOOL)arg1 ;
-(void)setVariableConstraints:(NSArray *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)acceptsImageDrop;
-(void)setAcceptsImageDrop:(BOOL)arg1 ;
@end

