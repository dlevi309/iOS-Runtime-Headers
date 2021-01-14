/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDQueryServerDelegate <HDTaskServerDelegate>
@required
-(void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(/*^block*/id)arg3;
-(void)queryServer:(id)arg1 shouldStartWithCompletion:(/*^block*/id)arg2;
-(void)queryServerDidFinish:(id)arg1;

@end

