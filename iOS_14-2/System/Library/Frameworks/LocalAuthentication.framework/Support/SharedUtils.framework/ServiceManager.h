/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


@protocol ServiceManager <NSObject>
@required
-(void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 serviceClientConnection:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)shutdownSessionsWithServiceClientID:(id)arg1;

@end

