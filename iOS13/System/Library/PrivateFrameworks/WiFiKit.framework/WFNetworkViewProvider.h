/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFNetworkViewProvider <NSObject>
@optional
-(void)presentNetworkViewController:(id)arg1 forContext:(id)arg2;
-(id)otherNetworkViewControllerWithContext:(id)arg1;
-(void)dismissNetworkViewController:(id)arg1 forContext:(id)arg2;
-(void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2;

@required
-(id)credentialsViewControllerWithContext:(id)arg1;
-(id)certificateViewControllerWithContext:(id)arg1;
-(id)networkErrorViewControllerWithContext:(id)arg1;
-(id)networkDetailsViewControllerWithContext:(id)arg1;

@end

