/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RPSystemBroadcastPickerViewControllerDelegate.h>

@class RPBroadcastPickerHostViewController, NSString;

@interface RPSystemBroadcastPickerViewController : UIViewController <RPSystemBroadcastPickerViewControllerDelegate> {

	RPBroadcastPickerHostViewController* _hostViewController;

}

@property (nonatomic,retain) RPBroadcastPickerHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHostViewController:(RPBroadcastPickerHostViewController *)arg1 ;
-(RPBroadcastPickerHostViewController *)hostViewController;
-(void)viewControllerDidFinish;
@end

