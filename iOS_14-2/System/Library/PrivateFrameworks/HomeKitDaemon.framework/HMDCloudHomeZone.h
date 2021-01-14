/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@interface HMDCloudHomeZone : HMDCloudZone {

	BOOL _sharedHome;

}

@property (getter=isSharedHome,nonatomic,readonly) BOOL sharedHome;              //@synthesize sharedHome=_sharedHome - In the implementation block
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(id)zoneSharedRootRecordName;
+(void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(id)description;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
-(BOOL)isSharedHome;
@end

