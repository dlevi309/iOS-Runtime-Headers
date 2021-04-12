/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setConfig:(PKSubcredentialProvisioningConfiguration *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)startProvisioning;
-(PKSubcredentialProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKSubcredentialProvisioningController *)arg1 ;
-(void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

