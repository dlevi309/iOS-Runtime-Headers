/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_performActivity:(id)arg1 ;
-(void)_log;
-(void)_registerActivity;
-(void)setSectionInfoList:(BLTSectionInfoList *)arg1 ;
-(BLTSectionInfoList *)sectionInfoList;
@end

