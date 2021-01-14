/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSArray, NSUUID, DMFPolicyRegistration;

@interface DMFApplicationPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;
	DMFPolicyRegistration* _registration;

}

@property (nonatomic,copy,readonly) NSArray * policyTypes;                        //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) DMFPolicyRegistration * registration;              //@synthesize registration=_registration - In the implementation block
+(id)_fetchCategoriesForBundleIdentifiers:(id)arg1 withError:(id*)arg2 ;
+(void)_fetchCategoriesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)createPolicyMonitorWithPolicyChangeHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(DMFPolicyRegistration *)registration;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)policyTypes;
-(NSUUID *)identifier;
-(id)_initWithPolicyChangeHandler:(/*^block*/id)arg1 addingRegistration:(BOOL)arg2 ;
-(void)dealloc;
-(id)requestPoliciesForBundleIdentifiers:(id)arg1 withError:(id*)arg2 ;
@end

