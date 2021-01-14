/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI.NavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface TeaUI.CardNavigationController : TeaUI.NavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	 commandCenter;

}
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2 ;
@end

