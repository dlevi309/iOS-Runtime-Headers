/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTDeviceResourceConsumer <NSObject>
@property (assign,nonatomic,__weak) id<AVTDeviceResourceConsumerDelegate> consumerDelegate; 
@required
-(id<AVTDeviceResourceConsumerDelegate>)consumerDelegate;
-(void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
-(void)setConsumerDelegate:(id)arg1;

@end

