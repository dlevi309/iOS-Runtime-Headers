/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@interface BLTAlertStateTester : NSObject {

	/*^block*/id _sectionInfoRetriever;

}

@property (nonatomic,copy) id sectionInfoRetriever;              //@synthesize sectionInfoRetriever=_sectionInfoRetriever - In the implementation block
-(BOOL)isScreenTimeBlockedForBundleIdentifier:(id)arg1 ignoresDowntime:(BOOL)arg2 ;
-(id)sectionInfoRetriever;
-(unsigned long long)_blockingReasonForSectionInfo:(id)arg1 ;
-(unsigned long long)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(BOOL)arg3 hasSectionIDOptedOutOfCoordination:(BOOL)arg4 hasSectionIDOptedForwardOnly:(BOOL)arg5 ignoresDowntime:(BOOL)arg6 ;
-(void)setSectionInfoRetriever:(id)arg1 ;
@end

