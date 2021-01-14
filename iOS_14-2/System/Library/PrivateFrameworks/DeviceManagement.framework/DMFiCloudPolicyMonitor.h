/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;
	long long _iCloudLogoutPolicy;

}

@property (nonatomic,copy,readonly) NSArray * policyTypes;              //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long iCloudLogoutPolicy;              //@synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy - In the implementation block
+(id)new;
+(id)iCloudLogoutPolicyForPoliciesByType:(id)arg1 ;
-(id)init;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(NSArray *)policyTypes;
-(NSUUID *)identifier;
-(id)requestiCloudLogoutPolicyWithError:(id*)arg1 ;
-(void)setICloudLogoutPolicy:(long long)arg1 ;
-(void)requestiCloudLogoutPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)iCloudLogoutPolicy;
-(void)dealloc;
@end

