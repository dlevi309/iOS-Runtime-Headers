/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/ENUIHostViewControllerProtocol.h>

@protocol ENUIHostViewControllerDelegate;
@interface ENUIHostViewController : _UIRemoteViewController <ENUIHostViewControllerProtocol> {

	id<ENUIHostViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<ENUIRemoteViewControllerProtocol> _remoteViewControllerProxy; 
@property (assign,nonatomic,__weak) id<ENUIHostViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(id<ENUIHostViewControllerDelegate>)delegate;
-(void)show;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<ENUIHostViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id<ENUIRemoteViewControllerProtocol>)_remoteViewControllerProxy;
-(void)setPresentationRequest:(id)arg1 ;
@end

