/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSMobileAssetControllerDelegate <NSObject>
@optional
-(BOOL)mobileAssetControllerShouldPerformScheduledUpdate:(id)arg1;

@required
-(void)mobileAssetController:(id)arg1 didBecomeAvailable:(id)arg2;
-(void)mobileAssetController:(id)arg1 didDownload:(id)arg2;
-(void)mobileAssetController:(id)arg1 didFailDownload:(id)arg2;
-(void)mobileAssetController:(id)arg1 didFailCatalogDownload:(id)arg2;
-(void)mobileAssetController:(id)arg1 didFailRetrieve:(id)arg2;

@end

