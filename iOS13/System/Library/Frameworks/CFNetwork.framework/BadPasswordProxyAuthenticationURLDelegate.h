/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/ProxyAuthenticationURLDelegate.h>

@interface BadPasswordProxyAuthenticationURLDelegate : ProxyAuthenticationURLDelegate {

	long long _failureCount;

}

@property (assign) long long failureCount;              //@synthesize failureCount=_failureCount - In the implementation block
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
@end

