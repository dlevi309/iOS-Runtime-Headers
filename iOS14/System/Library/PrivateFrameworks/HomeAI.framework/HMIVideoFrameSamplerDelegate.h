/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMIVideoFrameSamplerDelegate <NSObject>
@optional
-(void)frameSampler:(id)arg1 didDropFrame:(opaqueCMSampleBufferRef)arg2;

@required
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2;

@end

