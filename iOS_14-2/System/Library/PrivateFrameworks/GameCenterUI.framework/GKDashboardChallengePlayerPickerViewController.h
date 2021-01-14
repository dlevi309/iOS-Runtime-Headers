/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/GKComposeControllerDelegate.h>

@class NSString, GKChallenge, NSArray, UILabel, UIButton, UIBarButtonItem, UITextField, UIView, NSLayoutConstraint, UIViewController;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate> {

	BOOL _shouldIgnoreClearSelection;
	BOOL _shouldApplyInitialOffset;
	NSString* _message;
	/*^block*/id _completionHandler;
	GKChallenge* _challenge;
	NSArray* _initiallySelectedPlayers;
	UILabel* _descriptionLabel;
	UIButton* _sendButton;
	UIBarButtonItem* _customizeMessageButton;
	UITextField* _messageField;
	UIView* _scrollingHeader;
	NSLayoutConstraint* _scrollingHeaderTopConstraint;
	double _scrollingHeaderTopConstraintConstant;
	NSLayoutConstraint* _customizeMessageBottomConstraint;
	double _initialCustomizeMessageBottomConstraintConstant;
	UIViewController* _composeController;
	UIEdgeInsets _initialInsets;

}

@property (nonatomic,retain) GKChallenge * challenge;                                             //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * initiallySelectedPlayers;                                  //@synthesize initiallySelectedPlayers=_initiallySelectedPlayers - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreClearSelection;                                     //@synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UIButton * sendButton;                                               //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic) UIBarButtonItem * customizeMessageButton;                            //@synthesize customizeMessageButton=_customizeMessageButton - In the implementation block
@property (assign,nonatomic) UITextField * messageField;                                          //@synthesize messageField=_messageField - In the implementation block
@property (assign,nonatomic) UIView * scrollingHeader;                                            //@synthesize scrollingHeader=_scrollingHeader - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * scrollingHeaderTopConstraint;                   //@synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint - In the implementation block
@property (assign,nonatomic) double scrollingHeaderTopConstraintConstant;                         //@synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant - In the implementation block
@property (assign,nonatomic) UIEdgeInsets initialInsets;                                          //@synthesize initialInsets=_initialInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyInitialOffset;                                       //@synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * customizeMessageBottomConstraint;               //@synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint - In the implementation block
@property (assign,nonatomic) double initialCustomizeMessageBottomConstraintConstant;              //@synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant - In the implementation block
@property (nonatomic,retain) UIViewController * composeController;                                //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(NSString *)message;
-(id)preferredFocusEnvironments;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancel:(id)arg1 ;
-(id)completionHandler;
-(void)setInitiallySelectedPlayers:(NSArray *)arg1 ;
-(void)setScrollingHeaderTopConstraintConstant:(double)arg1 ;
-(void)setInitialInsets:(UIEdgeInsets)arg1 ;
-(void)setShouldApplyInitialOffset:(BOOL)arg1 ;
-(void)adjustCustomizeMessageConstraint;
-(void)_updateButtonEnableState;
-(void)applyInitialContentOffset;
-(void)setShouldIgnoreClearSelection:(BOOL)arg1 ;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)selectPlayersAtIndexPaths:(id)arg1 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)setMessageField:(UITextField *)arg1 ;
-(void)loadData;
-(id)initWithChallenge:(id)arg1 initiallySelectedPlayers:(id)arg2 ;
-(NSArray *)initiallySelectedPlayers;
-(BOOL)shouldIgnoreClearSelection;
-(UIBarButtonItem *)customizeMessageButton;
-(void)setCustomizeMessageButton:(UIBarButtonItem *)arg1 ;
-(UIView *)scrollingHeader;
-(void)setScrollingHeader:(UIView *)arg1 ;
-(NSLayoutConstraint *)scrollingHeaderTopConstraint;
-(UIEdgeInsets)initialInsets;
-(void)setScrollingHeaderTopConstraint:(NSLayoutConstraint *)arg1 ;
-(double)scrollingHeaderTopConstraintConstant;
-(BOOL)shouldApplyInitialOffset;
-(NSLayoutConstraint *)customizeMessageBottomConstraint;
-(void)setCustomizeMessageBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(double)initialCustomizeMessageBottomConstraintConstant;
-(void)setInitialCustomizeMessageBottomConstraintConstant:(double)arg1 ;
-(UIViewController *)composeController;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)viewDidLoad;
-(void)setComposeController:(UIViewController *)arg1 ;
-(UIButton *)sendButton;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)clearSelection;
-(GKChallenge *)challenge;
-(void)setSearchText:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)send:(id)arg1 ;
-(void)addMessage:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setSendButton:(UIButton *)arg1 ;
-(UITextField *)messageField;
-(UILabel *)descriptionLabel;
-(void)dealloc;
@end

