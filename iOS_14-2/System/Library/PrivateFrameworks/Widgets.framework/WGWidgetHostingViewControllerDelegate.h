/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@protocol WGWidgetHostingViewControllerDelegate <NSObject>
@optional
-(UIEdgeInsets*)layoutMarginForWidget:(id)arg1;
-(CGRect*)visibleFrameForWidget:(id)arg1;
-(UIEdgeInsets*)marginInsetsForWidget:(id)arg1;
-(void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
-(void)brokenViewDidAppearForWidget:(id)arg1;
-(BOOL)managingContainerIsVisibleForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
-(void)remoteViewControllerViewDidHideForWidget:(id)arg1;
-(void)remoteViewControllerDidConnectForWidget:(id)arg1;
-(/*^block*/id)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(/*^block*/id)arg3;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(long long)activeLayoutModeForWidget:(id)arg1;

@required
-(void)registerWidgetForRefreshEvents:(id)arg1;
-(void)unregisterWidgetForRefreshEvents:(id)arg1;
-(CGSize*)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;

@end

