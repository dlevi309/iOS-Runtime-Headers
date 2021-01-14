/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MFMailComposeRemoteHost.h>

@protocol MFMailComposeRemoteViewControllerDelegate;
@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost> {

	id<MFMailComposeRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFMailComposeRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<MFMailComposeRemoteViewControllerDelegate>)delegate;
-(void)serviceCompositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)serviceCompositionFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(void)bodyFinishedDrawing;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<MFMailComposeRemoteViewControllerDelegate>)arg1 ;
@end

