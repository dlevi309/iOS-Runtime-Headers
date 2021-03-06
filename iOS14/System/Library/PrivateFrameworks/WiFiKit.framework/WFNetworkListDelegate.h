/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFNetworkListDelegate <NSObject>
@required
-(void)networkListViewController:(id)arg1 showSettingsForNetwork:(id)arg2;
-(void)networkListViewController:(id)arg1 didTapRecord:(id)arg2;
-(void)networkListViewControllerDidTapOtherNetwork:(id)arg1;
-(BOOL)networkListViewControllerCurrentPowerState:(id)arg1;
-(void)networkListViewController:(id)arg1 userDidChangePower:(BOOL)arg2;
-(void)networkListViewControllerDidAppear:(id)arg1;
-(void)networkListViewControllerDidDisappear:(id)arg1;
-(void)networkListViewControllerDidFinish:(id)arg1;
-(BOOL)networkListViewControllerWAPIEnabled:(id)arg1;
-(void)networkListViewController:(id)arg1 setWAPIEnabled:(BOOL)arg2;
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg1;
-(void)networkListViewController:(id)arg1 setAutoInstantOption:(long long)arg2;
-(long long)networkListViewControllerAutoInstantHotspotOption:(id)arg1;
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg1;
-(BOOL)networkListViewControllerIsManagedAppleID:(id)arg1;

@end

