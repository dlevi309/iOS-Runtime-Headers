/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

