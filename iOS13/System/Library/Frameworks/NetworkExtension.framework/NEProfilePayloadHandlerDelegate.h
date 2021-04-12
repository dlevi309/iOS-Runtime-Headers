/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEProfilePayloadHandlerDelegate
@required
-(BOOL)setSMBDomains:(id)arg1;
-(BOOL)setMailDomains:(id)arg1;
-(BOOL)setCalendarDomains:(id)arg1;
-(BOOL)setContactsDomains:(id)arg1;
-(BOOL)setCertificates:(id)arg1;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
-(BOOL)setMailDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setCalendarDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setContactsDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setRestrictDomains:(BOOL)arg1;
-(id)getCertificates;
-(id)getPendingCertificateUUIDs:(id)arg1;
-(id)getPendingCertificateInfo:(id)arg1;
-(id)getConfigurationIdentifier;
-(BOOL)setPayloadInfoIdentity:(id)arg1;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
-(BOOL)setProfileInfo:(id)arg1;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;

@end

