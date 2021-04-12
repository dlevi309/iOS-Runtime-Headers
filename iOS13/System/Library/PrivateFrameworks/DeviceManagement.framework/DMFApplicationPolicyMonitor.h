/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSArray, DMFPolicyRegistration, NSUUID;

@interface DMFApplicationPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	DMFPolicyRegistration* _registration;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSArray * policyTypes;                                 //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) DMFPolicyRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled; 
+(id)_fetchCategoriesForBundleIdentifiers:(id)arg1 withError:(id*)arg2 ;
+(void)_fetchCategoriesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)createPolicyMonitorWithPolicyChangeHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEnabled;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(DMFPolicyRegistration *)registration;
-(id)_initWithPolicyChangeHandler:(/*^block*/id)arg1 addingRegistration:(BOOL)arg2 ;
-(NSArray *)policyTypes;
-(id)requestPoliciesForBundleIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(void)setPolicyTypes:(NSArray *)arg1 ;
@end

