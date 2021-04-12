/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<WFRemoteWebSheetViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<WFRemoteWebSheetViewControllerDelegate>)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)viewDidLoad;
-(void)webSheetViewControllerContentDidStartLoading;
-(void)webSheetViewControllerContentReadyForPresentation;
-(void)webSheetViewControllerContentDidFinishLoading;
-(void)_setupButtonListener;
@end

