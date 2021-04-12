/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTDeviceResourceConsumer <NSObject>
@property (assign,nonatomic,__weak) id<AVTDeviceResourceConsumerDelegate> consumerDelegate; 
@required
-(id<AVTDeviceResourceConsumerDelegate>)consumerDelegate;
-(void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
-(void)setConsumerDelegate:(id)arg1;

@end

