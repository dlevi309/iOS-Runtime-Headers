/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject {

	double _lastLogTime;
	BLTSectionInfoList* _sectionInfoList;

}

@property (nonatomic,retain) BLTSectionInfoList * sectionInfoList;              //@synthesize sectionInfoList=_sectionInfoList - In the implementation block
+(id)sharedNotificationEnabledSettingsLogger:(id)arg1 ;
-(id)init;
-(void)_log;
-(void)_performActivity:(id)arg1 ;
-(void)_registerActivity;
-(void)setSectionInfoList:(BLTSectionInfoList *)arg1 ;
-(BLTSectionInfoList *)sectionInfoList;
@end

