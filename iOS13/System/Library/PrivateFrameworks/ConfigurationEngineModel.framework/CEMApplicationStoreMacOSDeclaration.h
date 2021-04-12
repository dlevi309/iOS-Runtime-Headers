/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadRestrictStoreRequireAdminToInstall;
	NSNumber* _payloadRestrictStoreSoftwareupdateOnly;
	NSNumber* _payloadRestrictStoreDisableAppAdoption;
	NSNumber* _payloadDisableSoftwareUpdateNotifications;
	NSNumber* _payloadRestrictStoreMdmInstallSoftwareupdateOnly;

}

@property (nonatomic,copy) NSNumber * payloadRestrictStoreRequireAdminToInstall;                     //@synthesize payloadRestrictStoreRequireAdminToInstall=_payloadRestrictStoreRequireAdminToInstall - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRestrictStoreSoftwareupdateOnly;                        //@synthesize payloadRestrictStoreSoftwareupdateOnly=_payloadRestrictStoreSoftwareupdateOnly - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRestrictStoreDisableAppAdoption;                        //@synthesize payloadRestrictStoreDisableAppAdoption=_payloadRestrictStoreDisableAppAdoption - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisableSoftwareUpdateNotifications;                     //@synthesize payloadDisableSoftwareUpdateNotifications=_payloadDisableSoftwareUpdateNotifications - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRestrictStoreMdmInstallSoftwareupdateOnly;              //@synthesize payloadRestrictStoreMdmInstallSoftwareupdateOnly=_payloadRestrictStoreMdmInstallSoftwareupdateOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withRestrictStoreRequireAdminToInstall:(id)arg2 withRestrictStoreSoftwareupdateOnly:(id)arg3 withRestrictStoreDisableAppAdoption:(id)arg4 withDisableSoftwareUpdateNotifications:(id)arg5 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRestrictStoreRequireAdminToInstall:(NSNumber *)arg1 ;
-(void)setPayloadRestrictStoreSoftwareupdateOnly:(NSNumber *)arg1 ;
-(void)setPayloadRestrictStoreDisableAppAdoption:(NSNumber *)arg1 ;
-(void)setPayloadDisableSoftwareUpdateNotifications:(NSNumber *)arg1 ;
-(void)setPayloadRestrictStoreMdmInstallSoftwareupdateOnly:(NSNumber *)arg1 ;
-(NSNumber *)payloadRestrictStoreRequireAdminToInstall;
-(NSNumber *)payloadRestrictStoreSoftwareupdateOnly;
-(NSNumber *)payloadRestrictStoreDisableAppAdoption;
-(NSNumber *)payloadDisableSoftwareUpdateNotifications;
-(NSNumber *)payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@end

