/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol SOHostExtensionContextProtocol <SOExtensionContextProtocol>
@required
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)canOpenURL:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

