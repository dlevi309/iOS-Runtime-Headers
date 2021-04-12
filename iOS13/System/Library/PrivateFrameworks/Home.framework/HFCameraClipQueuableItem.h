/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class HMCameraClip;


@protocol HFCameraClipQueuableItem <NSObject>
@property (nonatomic,readonly) HMCameraClip * clip; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@required
-(HMCameraClip *)clip;
-(BOOL)isPlayable;

@end

