/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDataSourceSettings : PXSettings {

	BOOL _slowBackgroundFetch;
	double _delayChanges;

}

@property (assign,nonatomic) BOOL slowBackgroundFetch;              //@synthesize slowBackgroundFetch=_slowBackgroundFetch - In the implementation block
@property (assign,nonatomic) double delayChanges;                   //@synthesize delayChanges=_delayChanges - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setDelayChanges:(double)arg1 ;
-(BOOL)slowBackgroundFetch;
-(double)delayChanges;
-(void)setSlowBackgroundFetch:(BOOL)arg1 ;
@end

