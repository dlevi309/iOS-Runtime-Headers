/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(PDDeviceRegistrationServiceCoordinator *)deviceRegistrationServiceCoordinator;
-(void)setDeviceRegistrationServiceCoordinator:(PDDeviceRegistrationServiceCoordinator *)arg1 ;
@end

