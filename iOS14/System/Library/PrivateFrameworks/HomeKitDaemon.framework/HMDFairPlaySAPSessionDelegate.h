/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDFairPlaySAPSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didCloseWithError:(id)arg2;

@required
-(void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(/*^block*/id)arg2;
-(void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

