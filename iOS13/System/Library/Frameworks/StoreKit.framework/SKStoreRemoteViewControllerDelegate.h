/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol SKStoreRemoteViewControllerDelegate <NSObject>
@optional
-(void)storeRemoteViewControllerDidDismiss;
-(void)storeRemoteViewControllerTerminatedWithError:(id)arg1;

@required
-(void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
-(void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;

@end

