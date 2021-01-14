/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoNode.h>

@interface HMIVideoProcessingNode : HMIVideoNode
-(void)flush;
-(void)finish;
-(void)flushAsync;
-(void)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

