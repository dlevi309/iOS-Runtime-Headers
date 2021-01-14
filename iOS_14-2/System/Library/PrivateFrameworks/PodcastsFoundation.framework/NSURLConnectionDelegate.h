/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end

