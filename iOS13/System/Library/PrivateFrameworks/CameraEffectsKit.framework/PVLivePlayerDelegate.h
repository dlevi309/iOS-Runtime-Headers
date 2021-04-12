/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol PVLivePlayerDelegate <NSObject>
@optional
-(void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(SCD_Struct_JT6)arg3;

@required
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JT6)arg2;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3;

@end

