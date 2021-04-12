/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/


@protocol SUClientDelegate <NSObject>
@optional
-(BOOL)client:(id)arg1 presentComposeReviewViewController:(id)arg2 animated:(BOOL)arg3;
-(id)topViewControllerForClient:(id)arg1;
-(BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3;
-(BOOL)client:(id)arg1 openInternalURL:(id)arg2;
-(id)downloadManagerForClient:(id)arg1 downloadKinds:(id)arg2;
-(id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;

@required
-(BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3;

@end

