/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSArray, NSUUID;

@interface DMFCategoryPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * policyTypes;              //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(NSArray *)policyTypes;
-(void)requestPoliciesForCategoryIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)identifier;
-(void)dealloc;
@end

