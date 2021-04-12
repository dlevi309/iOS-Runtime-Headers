/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@protocol PUPlayButtonTileViewControllerDelegate, PXVideoOverlayButton;
@class PUBrowsingViewModel, PUAssetViewModel, PUBrowsingVideoPlayer, UIView, NSString;

@interface PUPlayButtonTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver> {

	struct {
		BOOL respondsToShouldShowPauseButton;
		BOOL respondsToDidTapButton;
		BOOL respondsToDelayForButtonAnimation;
	}  _delegateFlags;
	BOOL __shouldShowPlayButton;
	BOOL __shouldSuppressButtonUpdates;
	id<PUPlayButtonTileViewControllerDelegate> _delegate;
	PUBrowsingViewModel* _browsingViewModel;
	PUAssetViewModel* _assetViewModel;
	PUBrowsingVideoPlayer* __browsingVideoPlayer;
	UIView*<PXVideoOverlayButton> __playButton;

}

@property (setter=_setBrowsingVideoPlayer:,nonatomic,retain) PUBrowsingVideoPlayer * _browsingVideoPlayer;              //@synthesize _browsingVideoPlayer=__browsingVideoPlayer - In the implementation block
@property (setter=_setPlayButton:,nonatomic,retain) UIView*<PXVideoOverlayButton> _playButton;                          //@synthesize _playButton=__playButton - In the implementation block
@property (assign,setter=_setShouldShowPlayButton:,nonatomic) BOOL _shouldShowPlayButton;                               //@synthesize _shouldShowPlayButton=__shouldShowPlayButton - In the implementation block
@property (assign,setter=_setShouldSuppressButtonUpdates:,nonatomic) BOOL _shouldSuppressButtonUpdates;                 //@synthesize _shouldSuppressButtonUpdates=__shouldSuppressButtonUpdates - In the implementation block
@property (nonatomic,readonly) BOOL canShowPauseButton; 
@property (assign,nonatomic,__weak) id<PUPlayButtonTileViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                                   //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                         //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)playButtonTileSize;
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(id<PUPlayButtonTileViewControllerDelegate>)delegate;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)setDelegate:(id<PUPlayButtonTileViewControllerDelegate>)arg1 ;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_updateButtonAnimated:(BOOL)arg1 ;
-(id)loadView;
-(UIView*<PXVideoOverlayButton>)_playButton;
-(void)_playButtonTapped:(id)arg1 ;
-(void)dealloc;
-(void)_setBrowsingVideoPlayer:(id)arg1 ;
-(BOOL)canShowPauseButton;
-(void)_setShouldShowPlayButton:(BOOL)arg1 ;
-(void)_setShouldShowPlayButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(PUBrowsingVideoPlayer *)_browsingVideoPlayer;
-(void)_setPlayButton:(id)arg1 ;
-(BOOL)_shouldShowPlayButton;
-(BOOL)_shouldSuppressButtonUpdates;
-(void)_setShouldSuppressButtonUpdates:(BOOL)arg1 ;
@end

