/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEProfileIngestionDelegate
@required
+(id)getServiceIDForPayload:(id)arg1;
+(void)profileMigrationComplete;
-(BOOL)removeConfigurationWithIdentifier:(id)arg1;
-(id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
-(id)ingestedConfiguration;
-(id)findConfigurationByConfigurationID:(id)arg1;
-(id)findConfigurationByName:(id)arg1;
-(id)findConfigurationByPayloadUUID:(id)arg1;
-(BOOL)removeConfiguration:(id)arg1;
-(BOOL)loadConfigurationsForceReloadFromDisk;
-(BOOL)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
-(BOOL)saveIngestedConfiguration;
-(BOOL)removeIngestedConfiguration;
-(id)setAsideConfigurationName:(id)arg1 unsetAside:(BOOL)arg2;
-(BOOL)isInstalled:(id)arg1;
-(BOOL)lockConfigurations;
-(void)unlockConfigurations;
-(void)enableDefaultService;
-(BOOL)enableAlwaysOnVpn;
-(BOOL)updateDefaultAfterAddingConfiguration;
-(BOOL)updateDefaultAfterDeletingConfiguration;
-(id)copyManagedConfigurationIDs;
-(BOOL)updateAppLayerVPNMappingRules:(id)arg1;
-(BOOL)updateManagedAppRules:(id)arg1;
-(BOOL)updateAccountIdentifiers:(id)arg1;
-(id)getCertificatesForConfigurationWithIdentifier:(id)arg1;

@end

