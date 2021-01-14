/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/FLSpecifierTapHandlerDelegate.h>

@protocol FLViewModel;
@class FLSpecifierTapHandler, UIViewController, NSString;

@interface FLPreferencesFollowUpItemListViewController : PSListController <FLSpecifierTapHandlerDelegate> {

	id<FLViewModel> _viewModel;
	FLSpecifierTapHandler* _actionHandler;
	UIViewController* _presentationContext;

}

@property (nonatomic,retain) UIViewController * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleURL:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(UIViewController *)presentationContext;
-(id)_viewModel;
-(void)setPresentationContext:(UIViewController *)arg1 ;
-(void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2 ;
-(id)followUpItemSpecifiers;
-(void)_dismissFlowWithError:(id)arg1 ;
-(id)detailSpecifiersForFollowUpItem:(id)arg1 ;
-(void)actionTapped:(id)arg1 ;
-(void)_showRadarPromptForItem:(id)arg1 action:(id)arg2 ;
@end

