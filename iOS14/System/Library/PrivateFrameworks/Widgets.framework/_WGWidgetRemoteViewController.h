/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)disconnect;
-(BOOL)_serviceHasScrollToTopView;
-(NSObject*<OS_dispatch_queue>)managingHostQueue;
-(BOOL)_isValid;
-(WGWidgetHostingViewController *)managingHost;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_updateVisibilityState:(long long)arg1 ;
-(void)setManagingHost:(WGWidgetHostingViewController *)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(void)__viewServiceDidRegisterScrollToTopView;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_canShowWhileLocked;
-(void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)_setValid:(BOOL)arg1 ;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)__setLargestAvailableDisplayMode:(long long)arg1 ;
-(void)_updateLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)_updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_requestEncodedLayerTreeAtURL:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_setActiveDisplayMode:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)__requestPreferredViewHeight:(double)arg1 ;
-(void)_performUpdateWithReplyHandler:(/*^block*/id)arg1 ;
@end

