/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleSuggestionManagerDelegate.h>
#import <libobjc.A.dylib/PXPeopleSummaryDelegate.h>

@class PXPeopleSuggestionManager, PXPeopleSuggestionView, PXAnimatedHeaderView, UILabel, UIActivityIndicatorView, PXPeopleConfirmationLoadingView, PXPeopleConfirmationSummaryViewController, NSTimer, NSString;

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate> {

	BOOL _suggestionsPresented;
	BOOL _showTypeDebugColor;
	PXPeopleSuggestionManager* _suggestionManager;
	PXPeopleSuggestionView* _suggestionView;
	PXAnimatedHeaderView* _headerView;
	UILabel* _descriptionLabel;
	UILabel* _interimLoadingLabel;
	UIActivityIndicatorView* _interimLoadingIndicator;
	unsigned long long _viewState;
	PXPeopleConfirmationLoadingView* _loadingView;
	PXPeopleConfirmationSummaryViewController* _summaryViewController;
	NSTimer* _loadingDelayTimer;

}

@property (nonatomic,retain) PXPeopleSuggestionView * suggestionView;                                        //@synthesize suggestionView=_suggestionView - In the implementation block
@property (nonatomic,retain) PXAnimatedHeaderView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) PXPeopleConfirmationLoadingView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UILabel * interimLoadingLabel;                                                  //@synthesize interimLoadingLabel=_interimLoadingLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * interimLoadingIndicator;                              //@synthesize interimLoadingIndicator=_interimLoadingIndicator - In the implementation block
@property (nonatomic,retain) PXPeopleConfirmationSummaryViewController * summaryViewController;              //@synthesize summaryViewController=_summaryViewController - In the implementation block
@property (nonatomic,retain) NSTimer * loadingDelayTimer;                                                    //@synthesize loadingDelayTimer=_loadingDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL suggestionsPresented;                                                      //@synthesize suggestionsPresented=_suggestionsPresented - In the implementation block
@property (assign,nonatomic) BOOL showTypeDebugColor;                                                        //@synthesize showTypeDebugColor=_showTypeDebugColor - In the implementation block
@property (readonly) PXPeopleSuggestionManager * suggestionManager;                                          //@synthesize suggestionManager=_suggestionManager - In the implementation block
@property (readonly) BOOL isSummaryViewShowing; 
@property (assign,nonatomic) unsigned long long viewState;                                                   //@synthesize viewState=_viewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setHeaderView:(PXAnimatedHeaderView *)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)setViewState:(unsigned long long)arg1 ;
-(PXPeopleSuggestionManager *)suggestionManager;
-(void)undoDeny:(id)arg1 ;
-(void)denyTapped:(id)arg1 ;
-(void)displaySummary;
-(id)personForSummaryViewController:(id)arg1 ;
-(unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1 ;
-(void)dismissSummary;
-(void)confirmTapped:(id)arg1 ;
-(unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1 ;
-(void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(BOOL)arg2 ;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1 ;
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2 ;
-(void)presentSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1 ;
-(void)updateViewWithViewState:(unsigned long long)arg1 ;
-(BOOL)isSummaryViewShowing;
-(void)suggestionDidDisplay;
-(void)undoConfirm:(id)arg1 ;
-(void)performUndo:(id)arg1 ;
-(void)doneTapped:(id)arg1 ;
-(PXPeopleSuggestionView *)suggestionView;
-(void)setSuggestionView:(PXPeopleSuggestionView *)arg1 ;
-(UILabel *)interimLoadingLabel;
-(void)viewDidLoad;
-(void)setInterimLoadingLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)interimLoadingIndicator;
-(void)setInterimLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(PXPeopleConfirmationLoadingView *)loadingView;
-(void)setLoadingView:(PXPeopleConfirmationLoadingView *)arg1 ;
-(PXPeopleConfirmationSummaryViewController *)summaryViewController;
-(void)setSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1 ;
-(NSTimer *)loadingDelayTimer;
-(void)setLoadingDelayTimer:(NSTimer *)arg1 ;
-(BOOL)suggestionsPresented;
-(void)setSuggestionsPresented:(BOOL)arg1 ;
-(BOOL)showTypeDebugColor;
-(void)setShowTypeDebugColor:(BOOL)arg1 ;
-(unsigned long long)viewState;
-(PXAnimatedHeaderView *)headerView;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(UILabel *)descriptionLabel;
@end
