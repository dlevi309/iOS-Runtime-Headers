/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HKTabBarTapObserver.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class HKProfileBarButtonItem, NSString;

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate> {

	HKProfileBarButtonItem* _commonProfileBarButtonItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)commonProfileBarButtonItem;
-(void)didTapTabBarIcon;
-(void)didChangeToAnotherTab;
-(id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1 ;
@end

