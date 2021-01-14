/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICommand.h>

@class UIViewController;

@interface SearchUITapCommand : SearchUICommand {

	UIViewController* _viewController;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(id)setupViewController;
-(id)resultEngagementFeedback;
-(void)sendAllFeedback;
-(BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1 ;
-(void)performCommandWithCompletion:(/*^block*/id)arg1 ;
-(id)cardSectionEngagementFeedback;
-(UIViewController *)viewController;
-(BOOL)presentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)presentsViewController;
-(void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)prefersModalPresentation;
-(BOOL)shouldDeselectPreviousSelection;
-(void)showViewController:(id)arg1 ;
@end

