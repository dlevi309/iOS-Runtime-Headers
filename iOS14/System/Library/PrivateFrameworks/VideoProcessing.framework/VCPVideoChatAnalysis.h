/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, VCPFaceTimeSession, NSMutableArray;

@interface VCPVideoChatAnalysis : NSObject {

	NSObject*<OS_dispatch_queue> _detectionQueue;
	VCPFaceTimeSession* _faceTimeSession;
	NSMutableArray* _faces;
	BOOL _finished;

}
+(id)videoChatAnalysis;
-(id)init;
-(int)detectFaces:(CVBufferRef)arg1 ;
-(void)checkAddFaces;
-(int)analyzeFrame:(CVBufferRef)arg1 ;
-(BOOL)persistAnalysis;
@end

