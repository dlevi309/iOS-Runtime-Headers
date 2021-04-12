/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

