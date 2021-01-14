/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUErrorPresentationController.h>

@interface PUOneUpLoadingErrorPresentationController : PUErrorPresentationController
+(long long)oneUpLoadingErrorTypeFromError:(id)arg1 ;
+(id)_hardwareModelSpecificMessageForKeyPrefix:(id)arg1 ;
+(id)_mediaSpecificMessageForKeyPrefix:(id)arg1 forAsset:(id)arg2 ;
+(BOOL)errorIsDownloadError:(id)arg1 ;
-(id)initWithError:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)shouldShowFileRadarAction;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg1 ;
-(void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2 ;
-(void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(BOOL)arg3 alertCompletion:(/*^block*/id)arg4 ;
@end

