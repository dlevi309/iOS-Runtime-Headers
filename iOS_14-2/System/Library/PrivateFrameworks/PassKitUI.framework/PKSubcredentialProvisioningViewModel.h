/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSubcredentialProvisioningViewModelProtocol.h>

@class PKSubcredentialProvisioningController, PKSubcredentialProvisioningConfiguration, NSString;

@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol> {

	PKSubcredentialProvisioningController* _provisioningController;
	PKSubcredentialProvisioningConfiguration* _config;

}

@property (nonatomic,retain) PKSubcredentialProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) PKSubcredentialProvisioningConfiguration * config;                           //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKSubcredentialProvisioningConfiguration *)config;
-(void)startProvisioning;
-(void)rescindSimilarInvitationsToSharingRequest:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(PKSubcredentialProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKSubcredentialProvisioningController *)arg1 ;
-(void)setConfig:(PKSubcredentialProvisioningConfiguration *)arg1 ;
@end

