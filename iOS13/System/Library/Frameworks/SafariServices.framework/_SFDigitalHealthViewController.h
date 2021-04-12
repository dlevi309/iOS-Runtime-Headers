/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STLockoutViewControllerDelegate.h>

@protocol _SFDigitalHealthViewControllerDelegate;
@class NSURL, STLockoutViewController, NSMutableDictionary, NSString;

@interface _SFDigitalHealthViewController : UIViewController <STLockoutViewControllerDelegate> {

	NSURL* _url;
	STLockoutViewController* _currentLockOutViewController;
	NSMutableDictionary* _urlsToLockOutViewControllers;
	id<_SFDigitalHealthViewControllerDelegate> _digitalHealthViewControllerDelegate;
	double _additionalVerticalSafeAreaMargin;

}

@property (assign,nonatomic,__weak) id<_SFDigitalHealthViewControllerDelegate> digitalHealthViewControllerDelegate;              //@synthesize digitalHealthViewControllerDelegate=_digitalHealthViewControllerDelegate - In the implementation block
@property (assign,nonatomic) double additionalVerticalSafeAreaMargin;                                                            //@synthesize additionalVerticalSafeAreaMargin=_additionalVerticalSafeAreaMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)lockoutViewControllerDidFinishDismissing:(id)arg1 ;
-(id)_urlStringForLockOutGivenURL:(id)arg1 ;
-(void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)arg1 ;
-(id)showLockOutForURL:(id)arg1 ;
-(void)hideLockOutForURL:(id)arg1 ;
-(void)setAdditionalVerticalSafeAreaMargin:(double)arg1 ;
-(id<_SFDigitalHealthViewControllerDelegate>)digitalHealthViewControllerDelegate;
-(void)setDigitalHealthViewControllerDelegate:(id<_SFDigitalHealthViewControllerDelegate>)arg1 ;
-(double)additionalVerticalSafeAreaMargin;
@end

