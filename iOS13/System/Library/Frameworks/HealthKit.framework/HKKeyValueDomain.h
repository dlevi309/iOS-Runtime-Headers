/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)clientInterface;
+(id)heartRhythmDefaultsDomainWithhealthStore:(id)arg1 ;
+(id)healthAppDefaultsDomainWithHealthStore:(id)arg1 ;
-(void)invalidate;
-(long long)category;
-(id)exportedInterface;
-(NSString *)domainName;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(id)_dataFromPropertyListValue:(id)arg1 error:(id*)arg2 ;
-(id)_propertyListValueFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setString:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setPropertyListValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)numberForKey:(id)arg1 error:(id*)arg2 ;
-(void)numberForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dateForKey:(id)arg1 error:(id*)arg2 ;
-(void)dateForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stringForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)propertyListValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)propertyListValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allValuesWithCompletion:(/*^block*/id)arg1 ;
@end

