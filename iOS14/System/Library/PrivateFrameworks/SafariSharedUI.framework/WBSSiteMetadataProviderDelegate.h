/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSSiteMetadataProviderDelegate <NSObject>
@required
-(void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2;
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 ofType:(long long)arg3 didReceiveNewData:(BOOL)arg4 forRequest:(id)arg5;
-(id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4;
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 beginOperationUsingBlock:(/*^block*/id)arg4;
-(id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4;
-(void)siteMetadataProvider:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)siteMetadataProvider:(id)arg1 didFinishUsingWebView:(id)arg2;

@end

