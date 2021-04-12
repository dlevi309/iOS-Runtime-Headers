/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMBLocalZone, HMBCloudZone;

@interface HMDDatabaseFetchZonesResult : NSObject {

	HMBLocalZone* _localZone;
	HMBCloudZone* _cloudZone;

}

@property (readonly) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMBCloudZone * cloudZone;              //@synthesize cloudZone=_cloudZone - In the implementation block
-(HMBLocalZone *)localZone;
-(HMBCloudZone *)cloudZone;
-(id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2 ;
@end

