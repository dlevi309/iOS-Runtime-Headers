/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBNavigationController.h>

@interface OBPrivacyModalNavigationController : OBNavigationController {

	BOOL _darkMode;
	/*^block*/id _dismissButtonPressedHandler;

}

@property (copy) id dismissButtonPressedHandler;                           //@synthesize dismissButtonPressedHandler=_dismissButtonPressedHandler - In the implementation block
@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;              //@synthesize darkMode=_darkMode - In the implementation block
-(void)setDismissButtonPressedHandler:(id)arg1 ;
-(id)dismissButtonPressedHandler;
-(BOOL)isDarkMode;
-(void)addDismissButtonWithPressedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUserInterfaceStyle;
-(void)_doneButtonPressed;
-(void)setDarkMode:(BOOL)arg1 ;
@end

