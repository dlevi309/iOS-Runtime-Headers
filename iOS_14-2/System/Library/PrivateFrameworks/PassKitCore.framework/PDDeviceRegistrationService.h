/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDDeviceRegistrationServiceExportedInterface.h>

@class PKEntitlementWhitelist, PDDeviceRegistrationServiceCoordinator, NSString;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDDeviceRegistrationServiceCoordinator* _deviceRegistrationServiceCoordinator;

}

@property (nonatomic,retain) PDDeviceRegistrationServiceCoordinator * deviceRegistrationServiceCoordinator;              //@synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)setDeviceRegistrationServiceCoordinator:(PDDeviceRegistrationServiceCoordinator *)arg1 ;
-(PDDeviceRegistrationServiceCoordinator *)deviceRegistrationServiceCoordinator;
-(void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

