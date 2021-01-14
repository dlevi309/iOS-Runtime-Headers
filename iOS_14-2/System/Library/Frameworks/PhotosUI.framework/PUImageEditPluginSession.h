/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUEditPluginSession.h>

@interface PUImageEditPluginSession : PUEditPluginSession {

	BOOL _allowLivePhotoExtensions;

}

@property (assign,nonatomic) BOOL allowLivePhotoExtensions;              //@synthesize allowLivePhotoExtensions=_allowLivePhotoExtensions - In the implementation block
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)shouldLaunchPlugin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowLivePhotoExtensions:(BOOL)arg1 ;
-(id)imageDataSource;
-(BOOL)allowLivePhotoExtensions;
@end

