/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_NCWidgetViewController_Host_IPC.h>

@protocol OS_dispatch_queue;
@class NSObject, WGWidgetHostingViewController;

@interface _WGWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC> {

	BOOL _valid;
	NSObject*<OS_dispatch_queue> _managingHostQueue;
	WGWidgetHostingViewController* _managingHost;

}

@property (assign,setter=_setValid:,getter=_isValid,nonatomic) BOOL valid;                     //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic,__weak) WGWidgetHostingViewController * managingHost;              //@synthesize managingHost=_managingHost - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managingHostQueue;                 //@synthesize managingHostQueue=_managingHostQueue - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dealloc;
-(id)disconnect;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isValid;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_serviceHasScrollToTopView;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)_setValid:(BOOL)arg1 ;
-(void)__requestPreferredViewHeight:(double)arg1 ;
-(void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)__setLargestAvailableDisplayMode:(long long)arg1 ;
-(void)_setActiveDisplayMode:(long long)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)setManagingHost:(WGWidgetHostingViewController *)arg1 ;
-(void)_performUpdateWithReplyHandler:(/*^block*/id)arg1 ;
-(void)_requestEncodedLayerTreeAtURL:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_updateVisibilityState:(long long)arg1 ;
-(void)_updateLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)managingHostQueue;
-(WGWidgetHostingViewController *)managingHost;
@end

