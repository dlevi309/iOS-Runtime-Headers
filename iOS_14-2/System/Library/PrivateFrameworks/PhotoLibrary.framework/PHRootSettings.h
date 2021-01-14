/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PHSettings.h>

@class PHImageManagerSettings, PHResourceDownloadSettings;

@interface PHRootSettings : PHSettings {

	PHImageManagerSettings* _imageManagerSettings;
	PHResourceDownloadSettings* _resourceDownloadSettings;

}

@property (nonatomic,readonly) PHImageManagerSettings * imageManagerSettings;                      //@synthesize imageManagerSettings=_imageManagerSettings - In the implementation block
@property (nonatomic,readonly) PHResourceDownloadSettings * resourceDownloadSettings;              //@synthesize resourceDownloadSettings=_resourceDownloadSettings - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(id)parentSettings;
-(PHImageManagerSettings *)imageManagerSettings;
-(PHResourceDownloadSettings *)resourceDownloadSettings;
@end

