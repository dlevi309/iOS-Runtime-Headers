/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFCameraImageObserver
@optional
-(void)manager:(id)arg1 didFindFaceCrop:(id)arg2 forClip:(id)arg3 usingPersonName:(id)arg4;
-(void)manager:(id)arg1 failedToFindFaceCropForPersonName:(id)arg2;
-(void)manager:(id)arg1 failedToFindImageAtTimeOffset:(double)arg2 forClip:(id)arg3;
-(void)manager:(id)arg1 didFindHeroFrame:(id)arg2 forClip:(id)arg3;
-(void)manager:(id)arg1 failedToFindHeroFrameforClip:(id)arg2;
-(void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
-(void)manager:(id)arg1 didFinishGeneratingImagesForObserver:(id)arg2;

@end

