/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation {

	HMCameraClip* _cameraClip;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;              //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)main;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(HMCameraClip *)cameraClip;
-(id)initWithCameraClip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
@end

