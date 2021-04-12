/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PLDiagnosticsAgent
@required
-(void)captureDescriptionOfStatisticsWithResultHandler:(/*^block*/id)arg1;
-(void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(/*^block*/id)arg2;
-(void)captureDescriptionOfPhotoAnalysisWithResultHandler:(/*^block*/id)arg1;
-(void)timelineForWidgetSize:(id)arg1 resultHandler:(/*^block*/id)arg2;
-(void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(/*^block*/id)arg1;
-(void)dumpState:(long long)arg1 toDirectoryURL:(id)arg2 resultHandler:(/*^block*/id)arg3;

@end

