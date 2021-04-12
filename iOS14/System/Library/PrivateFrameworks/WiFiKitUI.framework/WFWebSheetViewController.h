/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFRemoteWebSheetViewController *)remoteViewController;
-(id<WFWebSheetViewControllerDelegate>)delegate;
-(BOOL)wantsModalPresentation;
-(void)_requestRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(void)setDelegate:(id<WFWebSheetViewControllerDelegate>)arg1 ;
-(void)setRemoteViewController:(WFRemoteWebSheetViewController *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)remoteWebSheetViewController:(id)arg1 handleEvent:(unsigned long long)arg2 context:(id)arg3 ;
-(void)_showRemoteViewController;
-(void)webSheetViewControllerServiceShouldTerminate;
@end

