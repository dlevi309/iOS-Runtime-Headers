/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol PVLivePlayerDelegate <NSObject>
@optional
-(void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(SCD_Struct_JF3)arg3;

@required
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JF3)arg2;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3;

@end

