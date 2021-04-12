/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastPickerExtensionHostProtocol.h>

@class RPSystemBroadcastPickerViewController, RPBroadcastPickerExtensionHostContext;

@interface RPBroadcastPickerHostViewController : _UIRemoteViewController <RPBroadcastPickerExtensionHostProtocol> {

	RPSystemBroadcastPickerViewController* _broadcastPickerViewController;
	RPBroadcastPickerExtensionHostContext* _hostContext;

}

@property (assign,nonatomic,__weak) RPSystemBroadcastPickerViewController * broadcastPickerViewController;              //@synthesize broadcastPickerViewController=_broadcastPickerViewController - In the implementation block
@property (nonatomic,retain) RPBroadcastPickerExtensionHostContext * hostContext;                                       //@synthesize hostContext=_hostContext - In the implementation block
-(void)setHostContext:(RPBroadcastPickerExtensionHostContext *)arg1 ;
-(RPBroadcastPickerExtensionHostContext *)hostContext;
-(oneway void)viewControllerDidFinish;
-(void)setBroadcastPickerViewController:(RPSystemBroadcastPickerViewController *)arg1 ;
-(RPSystemBroadcastPickerViewController *)broadcastPickerViewController;
-(void)sendMessageToExtension;
@end

