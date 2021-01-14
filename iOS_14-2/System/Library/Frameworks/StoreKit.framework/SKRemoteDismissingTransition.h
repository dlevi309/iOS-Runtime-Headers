/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol SKRemoteDismissingViewController;
@class UIViewController, NSString;

@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController*<SKRemoteDismissingViewController> _viewController;

}

@property (assign,nonatomic,__weak) UIViewController*<SKRemoteDismissingViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)setViewController:(UIViewController*<SKRemoteDismissingViewController>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(UIViewController*<SKRemoteDismissingViewController>)viewController;
-(void)dismissRemoteViewController:(id)arg1 ;
@end

