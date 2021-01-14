/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PUAssetViewModel, PUBrowsingViewModel, PUOneUpMergedVideoProvider, PUBrowsingVideoPlayer, UIActivityIndicatorView, UIButton, NSString;

@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PXChangeObserver> {

	PUAssetViewModel* _assetViewModel;
	PUBrowsingViewModel* _browsingViewModel;
	PUOneUpMergedVideoProvider* _mergedVideoProvider;
	/*^block*/id _errorAlertControllerDisplayer;
	PUBrowsingVideoPlayer* __videoPlayer;
	long long __indicatorStyle;
	UIActivityIndicatorView* __spinner;
	UIButton* __errorButton;

}

@property (setter=_setVideoPlayer:,nonatomic,retain) PUBrowsingVideoPlayer * _videoPlayer;              //@synthesize _videoPlayer=__videoPlayer - In the implementation block
@property (assign,setter=_setIndicatorStyle:,nonatomic) long long _indicatorStyle;                      //@synthesize _indicatorStyle=__indicatorStyle - In the implementation block
@property (setter=_setSpinner:,nonatomic,retain) UIActivityIndicatorView * _spinner;                    //@synthesize _spinner=__spinner - In the implementation block
@property (setter=_setErrorButton:,nonatomic,retain) UIButton * _errorButton;                           //@synthesize _errorButton=__errorButton - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                         //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                   //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUOneUpMergedVideoProvider * mergedVideoProvider;                          //@synthesize mergedVideoProvider=_mergedVideoProvider - In the implementation block
@property (nonatomic,copy) id errorAlertControllerDisplayer;                                            //@synthesize errorAlertControllerDisplayer=_errorAlertControllerDisplayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowBufferingIndicatorTileForAsset:(id)arg1 ;
+(CGSize)bufferingIndicatorTileSize;
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(UIActivityIndicatorView *)_spinner;
-(void)_setVideoPlayer:(id)arg1 ;
-(void)setMergedVideoProvider:(PUOneUpMergedVideoProvider *)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)_setIndicatorStyle:(long long)arg1 ;
-(void)_setIndicatorStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_handleErrorButton:(id)arg1 ;
-(void)_updateIndicator;
-(id)errorAlertControllerDisplayer;
-(void)setErrorAlertControllerDisplayer:(id)arg1 ;
-(long long)_indicatorStyle;
-(void)_setSpinner:(id)arg1 ;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_setErrorButton:(id)arg1 ;
-(PUOneUpMergedVideoProvider *)mergedVideoProvider;
-(UIButton *)_errorButton;
-(PUBrowsingVideoPlayer *)_videoPlayer;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

