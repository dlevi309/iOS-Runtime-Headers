/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitUI.framework/ReminderKitUI
*/

#import <ReminderKitUI/ReminderKitUI-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/REMReminderCreationRemoteViewController.h>

@protocol REMReminderCreationRemoteViewController
@required
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1;
-(void)viewServiceDidFailWithError:(id)arg1;
-(void)viewHostDidDismiss;
-(void)viewServiceDidCancel;
-(void)viewServiceDidFinish;

@end


@protocol REMReminderCreationPublicViewController;
@class UIViewController;

@interface REMReminderCreationRemoteViewController : _UIRemoteViewController <REMReminderCreationRemoteViewController> {

	UIViewController*<REMReminderCreationPublicViewController> _publicViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<REMReminderCreationPublicViewController> publicViewController;                                     //@synthesize publicViewController=_publicViewController - In the implementation block
@property (getter=viewServiceViewController,nonatomic,readonly) id<REMReminderCreationViewServiceViewController> viewServiceViewController; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<REMReminderCreationViewServiceViewController>)viewServiceViewController;
-(void)setPublicViewController:(UIViewController*<REMReminderCreationPublicViewController>)arg1 ;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(UIViewController*<REMReminderCreationPublicViewController>)publicViewController;
-(void)viewServiceDidFailWithError:(id)arg1 ;
-(void)viewHostDidDismiss;
-(void)viewServiceDidCancel;
-(void)viewServiceDidFinish;
@end

