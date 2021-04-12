/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDQueryServerDelegate <HDTaskServerDelegate>
@required
-(void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(/*^block*/id)arg3;
-(void)queryServer:(id)arg1 shouldStartWithCompletion:(/*^block*/id)arg2;
-(void)queryServerDidFinish:(id)arg1;

@end

