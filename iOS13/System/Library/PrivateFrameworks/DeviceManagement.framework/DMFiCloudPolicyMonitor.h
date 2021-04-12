/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject {

	long long _iCloudLogoutPolicy;
	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (assign,nonatomic) long long iCloudLogoutPolicy;              //@synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy - In the implementation block
@property (nonatomic,copy) NSArray * policyTypes;                       //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfICloudLogoutPolicy;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(NSArray *)policyTypes;
-(void)setPolicyTypes:(NSArray *)arg1 ;
-(void)_updateiCloudLogout;
-(void)_updateiCloudLogoutFromPolicies:(id)arg1 ;
-(void)setICloudLogoutPolicy:(long long)arg1 ;
-(long long)iCloudLogoutPolicy;
@end

