/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <ShareSheet/UIActivity.h>

@class HMCameraClip, HMCameraProfile;

@interface HUCameraRecordingFeedbackActivity : UIActivity {

	HMCameraClip* _cameraClip;
	HMCameraProfile* _cameraProfile;
	/*^block*/id _submissionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;                    //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;              //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,copy) id submissionHandler;                           //@synthesize submissionHandler=_submissionHandler - In the implementation block
-(id)activityType;
-(void)setSubmissionHandler:(id)arg1 ;
-(id)submissionHandler;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(HMCameraProfile *)cameraProfile;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(HMCameraClip *)cameraClip;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

