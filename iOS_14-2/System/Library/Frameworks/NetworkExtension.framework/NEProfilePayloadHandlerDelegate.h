/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEProfilePayloadHandlerDelegate
@required
-(BOOL)setContactsDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setSMBDomains:(id)arg1;
-(BOOL)setMailDomains:(id)arg1;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
-(BOOL)setContactsDomains:(id)arg1;
-(BOOL)setRestrictDomains:(BOOL)arg1;
-(BOOL)setPayloadInfoIdentity:(id)arg1;
-(BOOL)setProfileInfo:(id)arg1;
-(BOOL)setCalendarDomains:(id)arg1;
-(id)getPendingCertificateUUIDs:(id)arg1;
-(BOOL)setCalendarDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setMailDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(id)getConfigurationIdentifier;
-(BOOL)setCertificates:(id)arg1;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
-(id)getPendingCertificateInfo:(id)arg1;
-(BOOL)setExcludedDomains:(id)arg1;
-(id)getCertificates;
-(BOOL)setAssociatedDomains:(id)arg1;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;

@end

