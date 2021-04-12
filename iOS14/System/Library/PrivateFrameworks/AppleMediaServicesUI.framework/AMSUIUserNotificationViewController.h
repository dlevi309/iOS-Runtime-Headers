/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUIUserNotificationContentDelegate.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>

@class UIColor, AMSUIUserNotificationContentViewController, NSString;

@interface AMSUIUserNotificationViewController : UIViewController <AMSUIUserNotificationContentDelegate, UNNotificationContentExtension> {

	AMSUIUserNotificationContentViewController* _contentViewController;

}

@property (nonatomic,retain) AMSUIUserNotificationContentViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
+(id)userNotificationFromNotification:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setContentViewController:(AMSUIUserNotificationContentViewController *)arg1 ;
-(AMSUIUserNotificationContentViewController *)contentViewController;
-(void)didReceiveNotification:(id)arg1 ;
-(void)viewController:(id)arg1 didUpdatePreferredContentSize:(CGSize)arg2 ;
-(void)openNotification;
-(void)renderUserNotification:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

