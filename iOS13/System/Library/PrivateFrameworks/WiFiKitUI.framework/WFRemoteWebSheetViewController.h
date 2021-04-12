/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol WFRemoteWebSheetViewControllerDelegate;
@interface WFRemoteWebSheetViewController : _UIRemoteViewController {

	id<WFRemoteWebSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFRemoteWebSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<WFRemoteWebSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFRemoteWebSheetViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)webSheetViewControllerContentDidStartLoading;
-(void)webSheetViewControllerContentReadyForPresentation;
-(void)webSheetViewControllerContentDidFinishLoading;
-(void)_setupButtonListener;
@end

