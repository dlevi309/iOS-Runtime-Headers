/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/CoreSuggestionsUI-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/SGSuggestionDelegate.h>

@protocol SGSuggestionPresenterDelegate;
@class SGBanner, SGSuggestionAction, UIViewController, SGSuggestionStore, NSArray, NSString;

@interface SGSuggestionPresenter : NSObject <UIPopoverPresentationControllerDelegate, SGSuggestionDelegate> {

	SGBanner* _banner;
	SGSuggestionAction* _bannerPrimaryAction;
	SGSuggestionAction* _bannerDismissAction;
	UIViewController* _presentedViewController;
	SGSuggestionStore* _suggestionStore;
	BOOL _wantsToShowBanner;
	id<SGSuggestionPresenterDelegate> _delegate;

}

@property (assign,nonatomic) BOOL wantsToShowBanner;                                         //@synthesize wantsToShowBanner=_wantsToShowBanner - In the implementation block
@property (assign,nonatomic,__weak) id<SGSuggestionPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SGBanner * banner; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatList:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<SGSuggestionPresenterDelegate>)delegate;
-(void)setDelegate:(id<SGSuggestionPresenterDelegate>)arg1 ;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(id)_presentingViewController;
-(void)presentViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(SGBanner *)banner;
-(id)suggestionStore;
-(void)addSuggestion:(id)arg1 ;
-(void)removeSuggestion:(id)arg1 ;
-(id)formatMixedCategoriesTitle:(id)arg1 ;
-(void)_bannerPrimaryAction;
-(void)suggestion:(id)arg1 actionFinished:(BOOL)arg2 ;
-(void)suggestionWasUpdated:(id)arg1 ;
-(long long)suggestionsUIContext;
-(void)_listDidChangeNotification:(id)arg1 ;
-(void)setWantsToShowBanner:(BOOL)arg1 ;
-(void)_bannerDismiss;
-(void)_updateBanner;
-(id)formatMixedCategoriesSubtitle:(id)arg1 ;
-(id)_viewControllerForPresentingFromBanner;
-(void)_presentModalViewControllerFromButton:(id)arg1 ;
-(void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2 ;
-(id)_presentedControllerDoneButtonItem;
-(id)_presentedControllerCancelButtonItem;
-(void)_dismissPresentedViewController:(id)arg1 ;
-(BOOL)wantsToShowBanner;
@end

