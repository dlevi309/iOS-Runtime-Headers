/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUEditingExtensionVendor
@required
-(void)beginContentEditingWithCompletionHandler:(/*^block*/id)arg1;
-(void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(/*^block*/id)arg2;
-(void)queryShouldShowCancelConfirmationWithResponseHandler:(/*^block*/id)arg1;
-(void)setupUndoProxyWithXPCListenerEndpoint:(id)arg1 attemptUndoManagerAutoSetup:(BOOL)arg2;
-(void)finishContentEditing;
-(void)cancelContentEditingWithResponseHandler:(/*^block*/id)arg1;
-(void)querySDKVersionWithResponseHandler:(/*^block*/id)arg1;

@end

