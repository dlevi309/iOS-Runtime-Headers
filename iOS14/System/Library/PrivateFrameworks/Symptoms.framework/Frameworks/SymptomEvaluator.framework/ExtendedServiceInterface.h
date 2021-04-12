/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol ExtendedServiceInterface <ServiceInterface>
@required
-(void)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)abortRNFTestWithReply:(/*^block*/id)arg1;
-(void)startRNFTestWithOptions:(id)arg1 scenarioName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)waitForOSLogErrorSymptomWithReply:(/*^block*/id)arg1;
-(void)postAWDEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getExpertSystemsStatus:(/*^block*/id)arg1;

@end

