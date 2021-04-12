/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSObject;

@interface MPCAssistantPause : NSObject {

	NSObject*<OS_dispatch_queue> deviceUIDsQueue;

}
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP6)arg3 source:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP6)arg3 completion:(/*^block*/id)arg4 ;
@end

