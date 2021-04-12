/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CDPHostInterface.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,copy) id viewServiceTerminationBlock;              //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
-(id)viewServiceTerminationBlock;
-(double)_keyboardHeightOffset;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
@end

