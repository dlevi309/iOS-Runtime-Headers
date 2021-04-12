/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSArray, NSUUID;

@interface DMFWebsitePolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSArray * policyTypes;                //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled; 
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEnabled;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)requestPoliciesForWebsites:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)policyTypes;
-(void)setPolicyTypes:(NSArray *)arg1 ;
-(void)_fetchCategoriesIfNeededForWebsiteURLs:(id)arg1 response:(/*^block*/id)arg2 ;
@end

