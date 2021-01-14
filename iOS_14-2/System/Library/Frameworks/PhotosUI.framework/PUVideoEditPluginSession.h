/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUEditPluginSession.h>

@interface PUVideoEditPluginSession : PUEditPluginSession {

	BOOL _allowLoopingVideoExtensions;

}

@property (assign,nonatomic) BOOL allowLoopingVideoExtensions;              //@synthesize allowLoopingVideoExtensions=_allowLoopingVideoExtensions - In the implementation block
-(void)setAllowLoopingVideoExtensions:(BOOL)arg1 ;
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(id)videoDataSource;
-(BOOL)allowLoopingVideoExtensions;
@end

