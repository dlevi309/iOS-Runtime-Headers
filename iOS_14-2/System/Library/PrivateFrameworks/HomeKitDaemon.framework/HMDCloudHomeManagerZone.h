/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@interface HMDCloudHomeManagerZone : HMDCloudZone
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createHomeManagerZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
@end

