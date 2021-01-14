/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITapCommand.h>

@class UIViewController;

@interface SearchUIGenericViewControllerTapCommand : SearchUITapCommand {

	BOOL _prefersModalPresentation;
	UIViewController* _viewController;

}

@property (retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign) BOOL prefersModalPresentation;                  //@synthesize prefersModalPresentation=_prefersModalPresentation - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(id)setupViewController;
-(id)initWithEnvironment:(id)arg1 viewController:(id)arg2 preferModalPresentation:(BOOL)arg3 ;
-(void)sendAllFeedback;
-(UIViewController *)viewController;
-(void)setPrefersModalPresentation:(BOOL)arg1 ;
-(BOOL)prefersModalPresentation;
@end

