/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsManagerDelegate.h>
#import <libobjc.A.dylib/CKNavigationBarCanvasViewDelegate.h>

@protocol CKNavbarCanvasViewControllerDelegate;
@class UIButton, CKNavigationBarCanvasView, NSString, CKConversation, CKAvatarPickerViewController, CKLabel, CKCanvasBackButtonView, UINavigationController, CNContactStore, CKDetailsContactsManager;

@interface CKNavbarCanvasViewController : UIViewController <UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate> {

	BOOL _canShowBackButtonView;
	BOOL _shouldShowDoneButton;
	BOOL _isInEditingMode;
	BOOL _editing;
	id<CKNavbarCanvasViewControllerDelegate> _delegate;
	UIButton* _callButton;
	CKNavigationBarCanvasView* _canvasView;
	NSString* _navbarTitle;
	CKConversation* _conversation;
	CKAvatarPickerViewController* _avatarPickerViewController;
	CKLabel* _defaultLabel;
	CKCanvasBackButtonView* _backButtonView;
	UIButton* _detailsButton;
	UIButton* _clearAllButtonView;
	UIButton* _editCancelButtonView;
	UIButton* _doneButton;
	UINavigationController* _proxyNavigationController;
	long long _indicatorType;
	CNContactStore* _suggestionsEnabledContactStore;
	CKDetailsContactsManager* _contactsManager;

}

@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKAvatarPickerViewController * avatarPickerViewController;              //@synthesize avatarPickerViewController=_avatarPickerViewController - In the implementation block
@property (nonatomic,retain) CKNavigationBarCanvasView * canvasView;                                 //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) CKLabel * defaultLabel;                                                 //@synthesize defaultLabel=_defaultLabel - In the implementation block
@property (nonatomic,retain) CKCanvasBackButtonView * backButtonView;                                //@synthesize backButtonView=_backButtonView - In the implementation block
@property (nonatomic,retain) UIButton * detailsButton;                                               //@synthesize detailsButton=_detailsButton - In the implementation block
@property (nonatomic,retain) UIButton * callButton;                                                  //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) UIButton * clearAllButtonView;                                          //@synthesize clearAllButtonView=_clearAllButtonView - In the implementation block
@property (nonatomic,retain) UIButton * editCancelButtonView;                                        //@synthesize editCancelButtonView=_editCancelButtonView - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * proxyNavigationController;              //@synthesize proxyNavigationController=_proxyNavigationController - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                           //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSString * navbarTitle;                                                 //@synthesize navbarTitle=_navbarTitle - In the implementation block
@property (assign,nonatomic) long long indicatorType;                                                //@synthesize indicatorType=_indicatorType - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;                        //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) CKDetailsContactsManager * contactsManager;                             //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic,__weak) id<CKNavbarCanvasViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canShowBackButtonView;                                             //@synthesize canShowBackButtonView=_canShowBackButtonView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDoneButton;                                              //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
@property (assign,nonatomic) BOOL isInEditingMode;                                                   //@synthesize isInEditingMode=_isInEditingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKNavbarCanvasViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKNavbarCanvasViewControllerDelegate>)arg1 ;
-(CKLabel *)defaultLabel;
-(void)setDefaultLabel:(CKLabel *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(CKCanvasBackButtonView *)backButtonView;
-(id)navigationItem;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
-(CKNavigationBarCanvasView *)canvasView;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)collapse;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)_buttonPressed:(id)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(void)_contactPhotosEnabledChangedNotification:(id)arg1 ;
-(BOOL)_canShowAvatarView;
-(CKAvatarPickerViewController *)avatarPickerViewController;
-(void)setAvatarPickerViewController:(CKAvatarPickerViewController *)arg1 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)setCanShowBackButtonView:(BOOL)arg1 ;
-(BOOL)shouldShowDoneButton;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureForEditing:(BOOL)arg1 ;
-(id)initWithConversation:(id)arg1 navigationController:(id)arg2 ;
-(UIButton *)detailsButton;
-(UIButton *)editCancelButtonView;
-(UIButton *)clearAllButtonView;
-(void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)arg1 ;
-(void)setIsInEditingMode:(BOOL)arg1 ;
-(void)setContactsManager:(CKDetailsContactsManager *)arg1 ;
-(void)_handleTranscriptScroll:(id)arg1 ;
-(void)accessibilitySizeCategoryDidChange:(id)arg1 ;
-(void)setProxyNavigationController:(UINavigationController *)arg1 ;
-(id)navBarTitleFromConversation:(id)arg1 ;
-(void)setNavbarTitle:(NSString *)arg1 ;
-(CKDetailsContactsManager *)contactsManager;
-(id)_windowTraitCollection;
-(double)_preferredHeightForTraitCollection:(id)arg1 ;
-(BOOL)isMultiwayFaceTimeAudioSupported;
-(void)_initializeForTraitCollection:(id)arg1 ;
-(NSString *)navbarTitle;
-(void)_userDidTapNavigationBar:(id)arg1 ;
-(void)toggleExpansionState;
-(BOOL)_isMuliwayAvaialble;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)_isFaceTimeSupportedForIndividualCalls;
-(void)_notifyDelegateThatViewControllerWantsResize;
-(void)handleCloseNavBarAnimationCompleteNotification:(id)arg1 ;
-(BOOL)isInEditingMode;
-(long long)_unreadCount;
-(void)_updateUnreadCountForBackbuttonView:(long long)arg1 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)multiwayStateChanged:(id)arg1 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(void)_updateMultiwayButtonStateWithConversation:(id)arg1 ;
-(void)setIndicatorType:(long long)arg1 ;
-(void)_configureForEditMode;
-(void)_configureForDefaultMode;
-(id)_titleItemViewForTraitCollection:(id)arg1 ;
-(id)_leftItemViewForTraitCollection:(id)arg1 ;
-(id)_rightItemViewForTraitCollection:(id)arg1 ;
-(BOOL)canShowBackButtonView;
-(UIButton *)callButton;
-(UINavigationController *)proxyNavigationController;
-(CNContactStore *)suggestionsEnabledContactStore;
-(void)setUnreadCountTitleColor;
-(void)contactsManagerViewModelsDidChange:(id)arg1 ;
-(void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(BOOL)arg5 ;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1 ;
-(id)_secondaryRightItemViewForTraitCollection:(id)arg1 ;
-(void)showMapkitBusinessData;
-(void)dismissModal;
-(void)_showContactCardForEntity:(id)arg1 ;
-(void)setCallButton:(UIButton *)arg1 ;
-(void)setBackButtonView:(CKCanvasBackButtonView *)arg1 ;
-(void)setDetailsButton:(UIButton *)arg1 ;
-(void)setClearAllButtonView:(UIButton *)arg1 ;
-(void)setEditCancelButtonView:(UIButton *)arg1 ;
-(long long)indicatorType;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
@end

