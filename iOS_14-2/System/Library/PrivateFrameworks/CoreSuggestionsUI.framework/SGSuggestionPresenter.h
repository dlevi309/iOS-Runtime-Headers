/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)suggestions;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(SGBanner *)banner;
-(void)dismissViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(id)init;
-(id<SGSuggestionPresenterDelegate>)delegate;
-(BOOL)wantsToShowBanner;
-(id)_presentingViewController;
-(void)setDelegate:(id<SGSuggestionPresenterDelegate>)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)removeSuggestion:(id)arg1 ;
-(void)_dismissPresentedViewController:(id)arg1 ;
-(void)dealloc;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)addSuggestion:(id)arg1 ;
-(id)_presentedControllerDoneButtonItem;
-(void)_updateBanner;
-(id)suggestionStore;
-(id)formatMixedCategoriesTitle:(id)arg1 ;
-(void)_bannerPrimaryAction;
-(void)suggestion:(id)arg1 actionFinished:(BOOL)arg2 ;
-(void)suggestionWasUpdated:(id)arg1 ;
-(long long)suggestionsUIContext;
-(void)_listDidChangeNotification:(id)arg1 ;
-(void)setWantsToShowBanner:(BOOL)arg1 ;
-(void)_bannerDismiss;
-(id)formatMixedCategoriesSubtitle:(id)arg1 ;
-(id)_viewControllerForPresentingFromBanner;
-(void)_presentModalViewControllerFromButton:(id)arg1 ;
-(void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2 ;
-(id)_presentedControllerCancelButtonItem;
@end

