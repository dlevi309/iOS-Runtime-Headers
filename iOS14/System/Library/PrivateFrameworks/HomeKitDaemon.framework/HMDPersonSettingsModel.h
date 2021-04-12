/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSData;

@interface HMDPersonSettingsModel : HMBModel

@property (retain) NSData * classificationNotificationSettingsData; 
+(BOOL)hmbExcludeFromCloudStorage;
+(id)hmbProperties;
+(id)sentinelParentUUID;
+(id)sentinelModelUUID;
-(id)init;
-(id)classificationNotificationsEnabledForPersonUUID:(id)arg1 ;
-(void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2 ;
-(id)unarchivedClassificationNotificationsEnabledForPersonUUID;
-(void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1 ;
@end

