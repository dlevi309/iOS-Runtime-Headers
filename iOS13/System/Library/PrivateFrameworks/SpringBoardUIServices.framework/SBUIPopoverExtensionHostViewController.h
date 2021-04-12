/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_SBUIPopoverExtensionHostInterface.h>

@protocol _SBUIPopoverExtensionHostDelegate;
@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface> {

	id<_SBUIPopoverExtensionHostDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SBUIPopoverExtensionHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<_SBUIPopoverExtensionHostDelegate>)delegate;
-(void)setDelegate:(id<_SBUIPopoverExtensionHostDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_extensionRequestsDismiss;
@end

