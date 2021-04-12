/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWNodeRenderDelegate <NSObject>
@required
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3;

@end

