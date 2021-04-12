/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFRemoteWebSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFWebSheetViewControllerDelegate;
@class _UIAsyncInvocation, WFRemoteWebSheetViewController;

@interface WFWebSheetViewController : UIViewController <WFRemoteWebSheetViewControllerDelegate, WFNetworkView> {

	_UIAsyncInvocation* _cancelServiceInvocation;
	WFRemoteWebSheetViewController* _remoteViewController;
	id<WFWebSheetViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                       //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) WFRemoteWebSheetViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFWebSheetViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(void)dealloc;
-(id<WFWebSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWebSheetViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(WFRemoteWebSheetViewController *)remoteViewController;
-(void)setRemoteViewController:(WFRemoteWebSheetViewController *)arg1 ;
-(void)_requestRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(BOOL)wantsModalPresentation;
-(void)remoteWebSheetViewController:(id)arg1 handleEvent:(unsigned long long)arg2 context:(id)arg3 ;
-(void)_showRemoteViewController;
-(void)webSheetViewControllerServiceShouldTerminate;
@end

