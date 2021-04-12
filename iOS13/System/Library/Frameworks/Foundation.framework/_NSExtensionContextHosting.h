/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol _NSExtensionContextHosting <NSObject>
@required
-(void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2;

@end

