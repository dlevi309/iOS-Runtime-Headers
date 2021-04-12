/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBNavigationController.h>

@interface OBPrivacyModalNavigationController : OBNavigationController {

	BOOL _darkMode;
	/*^block*/id _dismissButtonPressedHandler;

}

@property (copy) id dismissButtonPressedHandler;                           //@synthesize dismissButtonPressedHandler=_dismissButtonPressedHandler - In the implementation block
@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;              //@synthesize darkMode=_darkMode - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredUserInterfaceStyle;
-(void)_doneButtonPressed;
-(void)setDismissButtonPressedHandler:(id)arg1 ;
-(id)dismissButtonPressedHandler;
-(void)addDismissButtonWithPressedHandler:(/*^block*/id)arg1 ;
-(void)setDarkMode:(BOOL)arg1 ;
-(BOOL)isDarkMode;
@end

