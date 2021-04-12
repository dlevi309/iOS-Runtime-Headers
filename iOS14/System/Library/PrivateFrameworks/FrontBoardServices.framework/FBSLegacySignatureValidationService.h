/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol OS_dispatch_queue;
@class FBSApplicationInfo, NSArray, NSObject, NSString;

@interface FBSLegacySignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {

	FBSApplicationInfo* _appInfo;
	BOOL _hasUniversalProvisioningProfile;
	BOOL _hasFreeDeveloperProvisioningProfile;
	BOOL _isManaged;
	NSArray* _provisioningProfiles;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)trustStateForApplication:(id)arg1 ;
-(void)_initializeProfiles:(id)arg1 ;
-(id)_workQueue_expirationDateForProvisioningProfile;
-(BOOL)_workQueue_signatureNeedsExplicitUserTrust;
-(id)initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(BOOL)arg3 ;
@end

