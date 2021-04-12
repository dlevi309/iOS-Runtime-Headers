/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <Foundation/NSOperation.h>

@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, NSArray;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {

	id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	NSArray* _faceCrops;
	unsigned long long _totalSteps;
	unsigned long long _currentStep;

}
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)main;
-(float)percentComplete;
-(id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2 ;
@end

