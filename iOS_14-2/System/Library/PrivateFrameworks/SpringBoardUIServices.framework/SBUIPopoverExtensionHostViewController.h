/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<_SBUIPopoverExtensionHostDelegate>)arg1 ;
-(void)_extensionRequestsDismiss;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_canShowWhileLocked;
@end

