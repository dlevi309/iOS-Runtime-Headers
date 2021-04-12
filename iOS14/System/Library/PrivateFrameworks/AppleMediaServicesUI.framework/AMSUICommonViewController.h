/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>

@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController

@property (assign,setter=setIsMovingFromParentViewController:,getter=isMovingFromParentViewController,nonatomic) BOOL movingFromParentViewController; 
@property (nonatomic,retain) AMSUICommonView * view; 
-(void)_registerNotifications;
-(id)init;
-(void)setChildViewController:(id)arg1 ;
-(void)setView:(AMSUICommonView *)arg1 ;
-(void)_unregisterNotifications;
-(AMSUICommonView *)view;
-(void)loadView;
-(void)dealloc;
-(void)unsetChildViewController:(id)arg1 ;
@end

