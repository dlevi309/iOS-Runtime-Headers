/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXModelSettings : PXSettings {

	double _photoAnalysisGraphInitialGraceDelay;
	double _photoAnalysisGraphProgressUpdateInterval;

}

@property (assign,nonatomic) double photoAnalysisGraphInitialGraceDelay;                   //@synthesize photoAnalysisGraphInitialGraceDelay=_photoAnalysisGraphInitialGraceDelay - In the implementation block
@property (assign,nonatomic) double photoAnalysisGraphProgressUpdateInterval;              //@synthesize photoAnalysisGraphProgressUpdateInterval=_photoAnalysisGraphProgressUpdateInterval - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setPhotoAnalysisGraphProgressUpdateInterval:(double)arg1 ;
-(void)setPhotoAnalysisGraphInitialGraceDelay:(double)arg1 ;
-(double)photoAnalysisGraphProgressUpdateInterval;
-(double)photoAnalysisGraphInitialGraceDelay;
@end

