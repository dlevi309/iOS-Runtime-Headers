/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/GKDashboardMultiplayerPickerDatasourceDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol GKDashboardNearbyBrowserDelegate, GKDashboardMultiplayerPickerDelegate;
@class NSString, NSArray, UILabel, UIButton, UITextField, NSLayoutConstraint, CNContactPickerViewController, UIView, UIVisualEffectView, GKPickerSearchTextField, GKDashboardMultiplayerPickerDataSource;

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, GKDashboardMultiplayerPickerDatasourceDelegate, CNContactPickerDelegate> {

	BOOL _shouldIgnoreClearSelection;
	NSString* _message;
	/*^block*/id _completionHandler;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	id<GKDashboardMultiplayerPickerDelegate> _multiplayerPickerDelegate;
	NSArray* _initiallySelectedPlayers;
	UILabel* _descriptionLabel;
	UIButton* _sendButton;
	UIButton* _customizeMessageButton;
	UITextField* _messageField;
	NSLayoutConstraint* _customizeMessageBottomConstraint;
	double _initialCustomizeMessageBottomConstraintConstant;
	CNContactPickerViewController* _contactPicker;
	UIView* _searchBackgroundView;
	UIVisualEffectView* _backgroundEffectView;
	GKPickerSearchTextField* _searchTextField;
	UIButton* _showContactPickerButton;

}

@property (nonatomic,retain) NSArray * initiallySelectedPlayers;                                                     //@synthesize initiallySelectedPlayers=_initiallySelectedPlayers - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreClearSelection;                                                        //@synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                                  //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIButton * customizeMessageButton;                                                      //@synthesize customizeMessageButton=_customizeMessageButton - In the implementation block
@property (nonatomic,retain) UITextField * messageField;                                                             //@synthesize messageField=_messageField - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * customizeMessageBottomConstraint;                                  //@synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint - In the implementation block
@property (assign,nonatomic) double initialCustomizeMessageBottomConstraintConstant;                                 //@synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant - In the implementation block
@property (nonatomic,readonly) GKDashboardMultiplayerPickerDataSource * pickerDataSource; 
@property (nonatomic,retain) CNContactPickerViewController * contactPicker;                                          //@synthesize contactPicker=_contactPicker - In the implementation block
@property (nonatomic,retain) UIView * searchBackgroundView;                                                          //@synthesize searchBackgroundView=_searchBackgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                              //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,retain) GKPickerSearchTextField * searchTextField;                                              //@synthesize searchTextField=_searchTextField - In the implementation block
@property (nonatomic,retain) UIButton * showContactPickerButton;                                                     //@synthesize showContactPickerButton=_showContactPickerButton - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                       //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL supportsNearby; 
@property (nonatomic,readonly) BOOL nearbyOnly; 
@property (assign,nonatomic) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;                                    //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardMultiplayerPickerDelegate> multiplayerPickerDelegate;              //@synthesize multiplayerPickerDelegate=_multiplayerPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(NSString *)message;
-(id)preferredFocusEnvironments;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)hasData;
-(void)cancel:(id)arg1 ;
-(id)completionHandler;
-(void)setInitiallySelectedPlayers:(NSArray *)arg1 ;
-(void)adjustCustomizeMessageConstraint;
-(void)_updateButtonEnableState;
-(BOOL)nearbyOnly;
-(void)setShouldIgnoreClearSelection:(BOOL)arg1 ;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)setMessageField:(UITextField *)arg1 ;
-(NSArray *)initiallySelectedPlayers;
-(BOOL)shouldIgnoreClearSelection;
-(UIButton *)customizeMessageButton;
-(void)setCustomizeMessageButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)customizeMessageBottomConstraint;
-(void)setCustomizeMessageBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(double)initialCustomizeMessageBottomConstraintConstant;
-(void)setInitialCustomizeMessageBottomConstraintConstant:(double)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 nearbyOnly:(BOOL)arg3 ;
-(GKDashboardMultiplayerPickerDataSource *)pickerDataSource;
-(id<GKDashboardMultiplayerPickerDelegate>)multiplayerPickerDelegate;
-(UIView *)searchBackgroundView;
-(BOOL)supportsNearby;
-(id)blurEffectForTraitCollection:(id)arg1 ;
-(void)setSupportsNearby:(BOOL)arg1 ;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(CNContactPickerViewController *)contactPicker;
-(void)setContactPicker:(CNContactPickerViewController *)arg1 ;
-(void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(BOOL)arg2 ;
-(void)handleSearchTextFieldReturn:(id)arg1 ;
-(void)didBeginSearchTextEditing;
-(void)didEndSearchTextEditing;
-(void)_updateCollectionView;
-(UIButton *)sendButton;
-(UIEdgeInsets)collectionSectionInset;
-(void)pickerDatasource:(id)arg1 didPickPlayers:(id)arg2 ;
-(void)pickerDatasourceDidSelectAddFriend:(id)arg1 ;
-(id)createSortPickerMenu;
-(void)didPressShowContactPickerButton:(id)arg1 ;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(void)setMultiplayerPickerDelegate:(id<GKDashboardMultiplayerPickerDelegate>)arg1 ;
-(void)setSearchBackgroundView:(UIView *)arg1 ;
-(UIButton *)showContactPickerButton;
-(void)setShowContactPickerButton:(UIButton *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)clearSelection;
-(void)setSearchText:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)send:(id)arg1 ;
-(void)addMessage:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(GKPickerSearchTextField *)searchTextField;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSendButton:(UIButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSearchTextField:(GKPickerSearchTextField *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UITextField *)messageField;
-(UILabel *)descriptionLabel;
@end

