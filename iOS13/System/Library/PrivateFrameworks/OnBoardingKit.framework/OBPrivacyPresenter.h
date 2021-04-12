/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class OBPrivacySplashController, OBPrivacyCombinedController, NSString, UIViewController, NSArray;

@interface OBPrivacyPresenter : NSObject <UIAdaptivePresentationControllerDelegate> {

	BOOL _darkMode;
	BOOL _usesFullScreenPresentation;
	BOOL _animatePresentAndDismiss;
	/*^block*/id _dismissHandler;
	OBPrivacySplashController* _splashController;
	OBPrivacyCombinedController* _combinedController;
	NSString* _displayLanguage;
	UIViewController* _presentingViewController;
	long long _modalPresentationStyle;
	unsigned long long _supportedInterfaceOrientations;
	UIViewController* _presentedController;
	NSArray* _presentedIdentifiers;
	/*^block*/id _presentationCompletionHandler;

}

@property (retain) OBPrivacySplashController * splashController;                             //@synthesize splashController=_splashController - In the implementation block
@property (retain) OBPrivacyCombinedController * combinedController;                         //@synthesize combinedController=_combinedController - In the implementation block
@property (retain) UIViewController * presentedController;                                   //@synthesize presentedController=_presentedController - In the implementation block
@property (retain) NSArray * presentedIdentifiers;                                           //@synthesize presentedIdentifiers=_presentedIdentifiers - In the implementation block
@property (copy) id presentationCompletionHandler;                                           //@synthesize presentationCompletionHandler=_presentationCompletionHandler - In the implementation block
@property (assign,nonatomic) BOOL animatePresentAndDismiss;                                  //@synthesize animatePresentAndDismiss=_animatePresentAndDismiss - In the implementation block
@property (copy) id dismissHandler;                                                          //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,retain) NSString * displayLanguage;                                     //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (__weak) UIViewController * presentingViewController;                              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL darkMode;                                                  //@synthesize darkMode=_darkMode - In the implementation block
@property (assign,nonatomic) BOOL usesFullScreenPresentation;                                //@synthesize usesFullScreenPresentation=_usesFullScreenPresentation - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                               //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presenterForPrivacySplashWithIdentifier:(id)arg1 ;
+(id)presenterForPrivacyUnifiedAbout;
+(id)presenterForPrivacySplashWithBundle:(id)arg1 ;
+(id)presenterForPrivacySplashWithIdentifer:(id)arg1 ;
+(id)presenterForPrivacySplashWithBundleAtPath:(id)arg1 ;
+(id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)dismiss;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)present;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(long long)modalPresentationStyle;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(NSString *)displayLanguage;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(void)setDarkMode:(BOOL)arg1 ;
-(OBPrivacyCombinedController *)combinedController;
-(BOOL)darkMode;
-(void)presentInNavigationStack:(id)arg1 ;
-(void)setSplashController:(OBPrivacySplashController *)arg1 ;
-(OBPrivacySplashController *)splashController;
-(void)setPresentedIdentifiers:(NSArray *)arg1 ;
-(void)setAnimatePresentAndDismiss:(BOOL)arg1 ;
-(void)setCombinedController:(OBPrivacyCombinedController *)arg1 ;
-(id)dismissHandler;
-(void)setPresentedController:(UIViewController *)arg1 ;
-(BOOL)animatePresentAndDismiss;
-(id)presentationCompletionHandler;
-(void)_presenterDidDismiss;
-(BOOL)usesFullScreenPresentation;
-(void)setUsesFullScreenPresentation:(BOOL)arg1 ;
-(UIViewController *)presentedController;
-(NSArray *)presentedIdentifiers;
-(void)setPresentationCompletionHandler:(id)arg1 ;
@end

