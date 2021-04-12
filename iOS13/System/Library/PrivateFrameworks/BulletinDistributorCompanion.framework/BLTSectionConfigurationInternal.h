/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject {

	NSDictionary* _configurations;

}
-(id)init;
-(id)_loadConfigurations;
-(unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2 category:(id)arg3 ;
-(unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2 ;
-(BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
-(BOOL)shouldSectionIDAlwaysAlert:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfWaitForUserIdle:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfNotificationTuning:(id)arg1 ;
-(BOOL)hasSectionIDDisplayedCriticalBulletins:(id)arg1 ;
-(BOOL)applyWhitelistToChildSections:(id)arg1 ;
-(unsigned long long)legacyMapLocationForSectionID:(id)arg1 ;
-(id)watchVersionThatUsesUserInfoForContextForSectionID:(id)arg1 ;
-(id)additionalBridgeSectionIDsForSectionID:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)arg1 ;
-(BOOL)shouldUsePhoneExpirationDateForSectionID:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfSettingsCoordination:(id)arg1 ;
-(BOOL)setCoordinationType:(unsigned long long)arg1 sectionID:(id)arg2 ;
-(id)watchVersionThatUsesAttachmentURLForSectionID:(id)arg1 ;
@end

