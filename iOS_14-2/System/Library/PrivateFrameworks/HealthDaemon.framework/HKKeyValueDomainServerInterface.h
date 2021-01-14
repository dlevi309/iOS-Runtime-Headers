/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKKeyValueDomainServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setString:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_numberForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setValueForAllKeys:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_stringForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_dataForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_dateForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_allValuesWithCompletion:(/*^block*/id)arg1;
-(void)remote_setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2;

@end

