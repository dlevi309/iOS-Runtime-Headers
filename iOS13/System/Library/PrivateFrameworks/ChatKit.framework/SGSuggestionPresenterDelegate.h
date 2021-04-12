/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol SGSuggestionPresenterDelegate <NSObject>
@optional
-(void)suggestionPresenter:(id)arg1 didDismissViewController:(id)arg2;
-(void)suggestionPresenter:(id)arg1 willDismissViewController:(id)arg2;
-(void)suggestionPresenter:(id)arg1 didPresentViewController:(id)arg2;
-(void)suggestionPresenter:(id)arg1 willPresentViewController:(id)arg2;
-(/*^block*/id)suggestionCategoryComparatorForManager:(id)arg1;

@required
-(id)viewControllerForPresentingFromBannerByPresenter:(id)arg1;
-(void)suggestionPresenterWantsToHideBanner:(id)arg1;
-(void)suggestionPresenterWantsToShowBanner:(id)arg1;

@end

