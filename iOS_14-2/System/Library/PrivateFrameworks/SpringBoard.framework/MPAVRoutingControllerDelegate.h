/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol MPAVRoutingControllerDelegate <NSObject>
@optional
-(void)routingControllerAvailableRoutesDidChange:(id)arg1;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
-(void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(/*^block*/id)arg6;
-(void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;

@end

