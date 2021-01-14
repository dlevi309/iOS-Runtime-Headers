/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUserCloudShareRequest.h>

@class HMUserCloudShareRepairInfo;

@interface HMDUserCloudShareRepairRequest : HMDUserCloudShareRequest {

	HMUserCloudShareRepairInfo* _repairInfo;

}

@property (readonly) HMUserCloudShareRepairInfo * repairInfo;              //@synthesize repairInfo=_repairInfo - In the implementation block
-(id)description;
-(id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3 repairInfo:(id)arg4 ;
-(HMUserCloudShareRepairInfo *)repairInfo;
@end

