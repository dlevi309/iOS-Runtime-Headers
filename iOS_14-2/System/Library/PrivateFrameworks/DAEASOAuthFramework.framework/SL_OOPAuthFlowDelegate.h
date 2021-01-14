/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@protocol SL_OOPAuthFlowDelegate
@required
-(void)setAuthFlowCompletion:(/*^block*/id)arg1;
-(id)authURLForUsername:(id)arg1;
-(id)requestForAuthURL:(id)arg1;
-(id)initialRedirectURL;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1;

@end

