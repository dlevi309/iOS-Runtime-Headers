/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didTapTabBarIcon;
-(void)didChangeToAnotherTab;
-(id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1 ;
-(id)commonProfileBarButtonItem;
@end

