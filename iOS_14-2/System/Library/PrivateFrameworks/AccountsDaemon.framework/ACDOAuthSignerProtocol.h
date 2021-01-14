/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol ACDOAuthSignerProtocol <NSObject>
@required
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1;

@end

