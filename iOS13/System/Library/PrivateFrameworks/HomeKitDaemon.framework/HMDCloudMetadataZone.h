/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudRecord;

@interface HMDCloudMetadataZone : HMDCloudZone {

	HMDCloudRecord* _metadataRecord;

}

@property (nonatomic,retain) HMDCloudRecord * metadataRecord;              //@synthesize metadataRecord=_metadataRecord - In the implementation block
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(HMDCloudRecord *)metadataRecord;
-(void)setMetadataRecord:(HMDCloudRecord *)arg1 ;
@end

