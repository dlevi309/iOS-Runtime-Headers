/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWIrisStagingNodeIrisRequestDelegate <NSObject>
@required
-(void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(SCD_Struct_BW8)arg2;
-(void)stagingNode:(id)arg1 waitingToEmitFrameWithPTS:(SCD_Struct_BW8)arg2;
-(void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2;

@end

