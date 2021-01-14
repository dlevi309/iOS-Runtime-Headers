/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@interface BLTAlertStateTester : NSObject {

	/*^block*/id _sectionInfoRetriever;

}

@property (nonatomic,copy) id sectionInfoRetriever;              //@synthesize sectionInfoRetriever=_sectionInfoRetriever - In the implementation block
-(BOOL)isScreenTimeBlockedForBundleIdentifier:(id)arg1 ignoresDowntime:(BOOL)arg2 ;
-(id)sectionInfoRetriever;
-(unsigned long long)_blockingReasonForSectionInfo:(id)arg1 isCritical:(BOOL)arg2 ;
-(unsigned long long)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(BOOL)arg3 hasSectionIDOptedOutOfCoordination:(BOOL)arg4 hasSectionIDOptedForwardOnly:(BOOL)arg5 ignoresDowntime:(BOOL)arg6 isCritical:(BOOL)arg7 ;
-(void)setSectionInfoRetriever:(id)arg1 ;
@end

