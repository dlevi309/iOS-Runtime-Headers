/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSString;


@protocol WFUserInterfaceHost <NSObject>
@property (nonatomic,readonly) NSString * userInterfaceType; 
@optional
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)requestedFromAnotherDevice;
-(void)showPreviewForContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)shouldNotHandoff;
-(id)dialogTransformer;
-(BOOL)openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)presentAlert:(id)arg1;
-(NSString *)userInterfaceType;

@end

