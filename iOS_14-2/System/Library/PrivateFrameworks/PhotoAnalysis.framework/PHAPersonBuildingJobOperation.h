/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <Foundation/NSOperation.h>

@protocol PHAPersonBuildingJobOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, PVCanceler, NSProgress;

@interface PHAPersonBuildingJobOperation : NSOperation {

	id<PHAPersonBuildingJobOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	PVCanceler* _canceler;
	NSProgress* _progress;
	float _percentComplete;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)main;
-(float)percentComplete;
-(void)cancel;
-(id)initWithFaceProcessingWorker:(id)arg1 ;
@end

