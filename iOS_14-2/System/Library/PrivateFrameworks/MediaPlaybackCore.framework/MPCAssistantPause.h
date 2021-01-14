/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSObject;

@interface MPCAssistantPause : NSObject {

	NSObject*<OS_dispatch_queue> deviceUIDsQueue;

}
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP7)arg3 source:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP7)arg3 completion:(/*^block*/id)arg4 ;
@end

