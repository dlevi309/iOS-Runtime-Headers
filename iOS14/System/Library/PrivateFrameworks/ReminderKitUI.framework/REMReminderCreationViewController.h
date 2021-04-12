/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitUI.framework/ReminderKitUI
*/

#import <ReminderKitUI/ReminderKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/REMReminderCreationPublicViewController.h>

@protocol REMReminderCreationDelegate;
@class _UIResilientRemoteViewContainerViewController, NSError, REMReminderCreationRemoteViewController;

@interface REMReminderCreationViewController : UIViewController <REMReminderCreationPublicViewController> {

	_UIResilientRemoteViewContainerViewController* _childViewController;
	id<REMReminderCreationDelegate> _delegate;
	NSError* _deferredErrorDuringPresentation;

}

@property (setter=setChildViewController:,nonatomic,retain) _UIResilientRemoteViewContainerViewController * childViewController;                         //@synthesize childViewController=_childViewController - In the implementation block
@property (getter=viewServiceViewController,nonatomic,readonly) id<REMReminderCreationViewServiceViewController> viewServiceViewController; 
@property (getter=remoteViewController,nonatomic,readonly) REMReminderCreationRemoteViewController * remoteViewController; 
@property (nonatomic,readonly) id<REMReminderCreationDelegate> delegate;                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSError * deferredErrorDuringPresentation;                                                                                    //@synthesize deferredErrorDuringPresentation=_deferredErrorDuringPresentation - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(REMReminderCreationRemoteViewController *)remoteViewController;
-(id<REMReminderCreationDelegate>)delegate;
-(_UIResilientRemoteViewContainerViewController *)childViewController;
-(void)setChildViewController:(_UIResilientRemoteViewContainerViewController *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<REMReminderCreationViewServiceViewController>)viewServiceViewController;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)viewServiceDidFailWithError:(id)arg1 ;
-(void)viewServiceDidCancel;
-(void)viewServiceDidFinish;
-(void)setDeferredErrorDuringPresentation:(NSError *)arg1 ;
-(NSError *)deferredErrorDuringPresentation;
@end

