/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol OS_dispatch_queue;
@class FBSApplicationInfo, NSArray, NSObject;

@interface FBApplicationTrustData : NSObject {

	FBSApplicationInfo* _appInfo;
	BOOL _hasUniversalProvisioningProfile;
	BOOL _hasFreeDeveloperProvisioningProfile;
	BOOL _isManaged;
	NSArray* _provisioningProfiles;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSArray * profiles;              //@synthesize provisioningProfiles=_provisioningProfiles - In the implementation block
-(unsigned long long)trustState;
-(NSArray *)profiles;
-(id)_initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(BOOL)arg3 ;
-(void)acknowledgeTrust;
-(void)_initializeProfiles:(id)arg1 ;
-(void)_acceptApplicationSignatureIdentity;
-(unsigned long long)trustStateWithTrustRequiredReasons:(unsigned long long*)arg1 ;
-(id)_workQueue_expirationDateForProvisioningProfile;
-(BOOL)_workQueue_signatureNeedsExplicitUserTrust;
@end

