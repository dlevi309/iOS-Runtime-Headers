/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMCameraProfile *)cameraProfile;
-(HMCameraClip *)cameraClip;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(id)submissionHandler;
-(void)setSubmissionHandler:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
@end

