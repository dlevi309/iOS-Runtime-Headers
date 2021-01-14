/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class NSUUID, HKTaskServerProxyProvider, NSString, HKHealthStore;

@interface HKKeyValueDomain : NSObject <_HKXPCExportable> {

	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	long long _category;
	NSString* _domainName;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) long long category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainName;               //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)heartRhythmDefaultsDomainWithhealthStore:(id)arg1 ;
+(id)clientInterface;
+(id)healthAppDefaultsDomainWithHealthStore:(id)arg1 ;
+(id)safetyDefaultsDomainWithHealthStore:(id)arg1 ;
+(id)healthArticlesDefaultsDomainWithHealthStore:(id)arg1 ;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)numberForKey:(id)arg1 error:(id*)arg2 ;
-(void)setPropertyListValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)domainName;
-(void)numberForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(void)setValueForAllKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)category;
-(id)remoteInterface;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)stringForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)propertyListValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_dataFromPropertyListValue:(id)arg1 error:(id*)arg2 ;
-(void)allValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)dateForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(void)propertyListValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dateForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setString:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)invalidate;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3 ;
-(void)setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_propertyListValueFromData:(id)arg1 error:(id*)arg2 ;
@end

