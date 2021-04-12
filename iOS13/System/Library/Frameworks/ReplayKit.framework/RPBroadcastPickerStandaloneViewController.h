/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/RPSystemBroadcastPickerViewController.h>

@protocol RPSystemBroadcastPickerViewControllerDelegate;
@class RPModalPresentationWindow;

@interface RPBroadcastPickerStandaloneViewController : RPSystemBroadcastPickerViewController {

	RPModalPresentationWindow* _presentationWindow;
	id<RPSystemBroadcastPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RPSystemBroadcastPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<RPSystemBroadcastPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RPSystemBroadcastPickerViewControllerDelegate>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAfter:(double)arg1 ;
-(void)viewControllerDidFinish;
-(void)loadViewControllerWithBundleIdentifier:(id)arg1 showMicrophoneButton:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

