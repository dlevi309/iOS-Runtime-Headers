/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PUMediaProvider, UIWindow;

@interface PUContentTileProvider : NSObject {

	PUMediaProvider* _mediaProvider;
	UIWindow* _window;

}

@property (nonatomic,readonly) PUMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) UIWindow * window;                              //@synthesize window=_window - In the implementation block
-(PUMediaProvider *)mediaProvider;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)registerTileControllerClassesWithTilingView:(id)arg1 ;
-(UIWindow *)window;
-(id)initWithMediaProvider:(id)arg1 ;
-(id)tileControllerForAsset:(id)arg1 viewModel:(id)arg2 tilingView:(id)arg3 ;
@end

