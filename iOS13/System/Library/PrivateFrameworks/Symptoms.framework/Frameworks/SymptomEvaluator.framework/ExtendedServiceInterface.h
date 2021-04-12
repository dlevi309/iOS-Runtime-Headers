/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol ExtendedServiceInterface <ServiceInterface>
@required
-(void)getExpertSystemsStatus:(/*^block*/id)arg1;
-(void)startRNFTestWithOptions:(id)arg1 scenarioName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)abortRNFTestWithReply:(/*^block*/id)arg1;
-(void)waitForOSLogErrorSymptomWithReply:(/*^block*/id)arg1;
-(void)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)postAWDEvent:(id)arg1 reply:(/*^block*/id)arg2;

@end

