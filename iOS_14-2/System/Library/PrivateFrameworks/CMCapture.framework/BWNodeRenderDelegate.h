/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNodeRenderDelegate <NSObject>
@required
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3;

@end

