/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PLDiagnosticsAgent.h>

@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>
+(id)localDiagnosticsAgent;
-(id)_currentAssetMetadata;
-(id)_currentAssetIdentifierDescription;
-(void)captureDescriptionOfStatisticsWithResultHandler:(/*^block*/id)arg1 ;
-(id)_viewModelDescription;
-(void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)captureDescriptionOfPhotoAnalysisWithResultHandler:(/*^block*/id)arg1 ;
-(id)_descriptionOfUIState:(long long)arg1 ;
-(id)_descriptionForAllUIState;
-(id)__currentTimestamp;
-(void)timelineForWidgetSize:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_currentAssetViewModelDescription;
-(void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(/*^block*/id)arg1 ;
-(void)_captureCurrentAssetResourcesToDirectory:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)_windowRecursiveDescription;
-(id)_currentAssetDetailedDescription;
-(void)dumpState:(long long)arg1 toDirectoryURL:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_viewControllerHierarchyDescription;
-(id)_currentAsset;
@end

