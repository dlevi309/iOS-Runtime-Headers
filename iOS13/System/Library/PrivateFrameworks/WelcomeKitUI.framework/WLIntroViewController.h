/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class UIButton, UIActivityIndicatorView;

@interface WLIntroViewController : WLWelcomeGroupViewController {

	UIButton* _continueView;
	UIActivityIndicatorView* _spinner;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;              //@synthesize continueHandler=_continueHandler - In the implementation block
-(void)loadView;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(void)_continueTapped:(id)arg1 ;
-(void)connectivityEnablingWillStart;
-(void)connectivityEnablingDidEnd;
@end

