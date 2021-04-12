/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMCaptureManagerVideoFrameObserver.h>

@class AXMCaptureManager, AXMVisionEngine, AXMImageNode, AXMSceneDetectorNode, AXMFaceDetectorNode, AXMVisionAnalysisOptions, NSString;

@interface _AXMCaptureManagerDetectionEngine : NSObject <AXMCaptureManagerVideoFrameObserver> {

	AXMCaptureManager* _captureManager;
	AXMVisionEngine* _visionEngine;
	AXMImageNode* _imageNode;
	AXMSceneDetectorNode* _sceneDetector;
	AXMFaceDetectorNode* _faceDetector;
	AXMVisionAnalysisOptions* _analysisOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureManager:(id)arg1 didOutputPixelBuffer:(CVBufferRef)arg2 ;
-(id)initWithCaptureManager:(id)arg1 options:(id)arg2 ;
@end

