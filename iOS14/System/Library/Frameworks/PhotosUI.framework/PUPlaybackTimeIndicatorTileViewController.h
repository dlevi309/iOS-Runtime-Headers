/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerTimeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUPlaybackTimeIndicatorTileViewControllerDelegate;
@class PUBrowsingVideoPlayer, PUBrowsingViewModel, PUPlaybackTimeLabel, NSDate, NSString;

@interface PUPlaybackTimeIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver> {

	SCD_Struct_PU17 _delegateFlags;
	BOOL __isIndicatorVisible;
	id<PUPlaybackTimeIndicatorTileViewControllerDelegate> _delegate;
	PUBrowsingVideoPlayer* _videoPlayer;
	PUBrowsingViewModel* _viewModel;
	PUPlaybackTimeLabel* __label;
	long long __indicatorFormat;
	NSDate* _forcedIndicatorVisibilityEndDate;

}

@property (nonatomic,readonly) PUPlaybackTimeLabel * _label;                                                     //@synthesize _label=__label - In the implementation block
@property (assign,setter=_setIndicatorFormat:,nonatomic) long long _indicatorFormat;                             //@synthesize _indicatorFormat=__indicatorFormat - In the implementation block
@property (assign,setter=_setIndicatorVisible:,nonatomic) BOOL _isIndicatorVisible;                              //@synthesize _isIndicatorVisible=__isIndicatorVisible - In the implementation block
@property (nonatomic,retain) NSDate * forcedIndicatorVisibilityEndDate;                                          //@synthesize forcedIndicatorVisibilityEndDate=_forcedIndicatorVisibilityEndDate - In the implementation block
@property (assign,nonatomic,__weak) id<PUPlaybackTimeIndicatorTileViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUBrowsingVideoPlayer * videoPlayer;                                                //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * viewModel;                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)playbackTimeIndicatorTileSize;
-(PUPlaybackTimeLabel *)_label;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_setIndicatorFormat:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setForcedIndicatorVisibilityEndDate:(NSDate *)arg1 ;
-(void)_updateIndicatorValueWithTime:(SCD_Struct_PH4)arg1 ;
-(void)_updateIndicatorDisplayStyle;
-(void)_handleVideoPlayer:(id)arg1 change:(id)arg2 ;
-(void)_handleViewModel:(id)arg1 change:(id)arg2 ;
-(void)_flashTimeIndicator;
-(void)_cancelFlashTimeIndicator;
-(long long)_indicatorFormat;
-(BOOL)_isIndicatorVisible;
-(NSDate *)forcedIndicatorVisibilityEndDate;
-(id<PUPlaybackTimeIndicatorTileViewControllerDelegate>)delegate;
-(PUBrowsingViewModel *)viewModel;
-(void)setVideoPlayer:(PUBrowsingVideoPlayer *)arg1 ;
-(void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(SCD_Struct_PH4)arg2 ;
-(void)setDelegate:(id<PUPlaybackTimeIndicatorTileViewControllerDelegate>)arg1 ;
-(PUBrowsingVideoPlayer *)videoPlayer;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)viewDidLoad;
-(void)videoPlayer:(id)arg1 currentTimeDidChange:(SCD_Struct_PH4)arg2 ;
-(void)_setIndicatorFormat:(long long)arg1 ;
-(void)_setIndicatorVisible:(BOOL)arg1 ;
@end

