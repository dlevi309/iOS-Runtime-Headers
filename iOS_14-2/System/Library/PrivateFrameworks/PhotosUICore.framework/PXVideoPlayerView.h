/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXVideoPlayerViewDelegate;
@class PXVideoView, NSArray, UIImageView, ISWrappedAVPlayer, UIImage;

@interface PXVideoPlayerView : UIView {

	PXVideoView* _videoView;
	NSArray* _videoViewConstraints;
	UIImageView* _previewImageView;
	NSArray* _previewImageViewConstraints;
	long long _placeholderVisibilityRequestID;
	/*^block*/id _visibilityChangeCompletionHandler;
	BOOL _displayingPlaceholder;
	BOOL _allowsEdgeAntialiasing;
	id<PXVideoPlayerViewDelegate> _delegate;
	ISWrappedAVPlayer* _player;
	UIImage* _placeholderImage;
	NSArray* _placeholderImageFilters;
	double _videoAppearanceCrossfadeDuration;
	long long _placeholderDisplayMode;
	long long _videoViewContentMode;
	CGRect _placeholderImageContentsRect;

}

@property (assign,nonatomic,__weak) id<PXVideoPlayerViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ISWrappedAVPlayer * player;                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,copy) NSArray * placeholderImageFilters;                                          //@synthesize placeholderImageFilters=_placeholderImageFilters - In the implementation block
@property (assign,nonatomic) double videoAppearanceCrossfadeDuration;                                  //@synthesize videoAppearanceCrossfadeDuration=_videoAppearanceCrossfadeDuration - In the implementation block
@property (assign,nonatomic) CGRect placeholderImageContentsRect;                                      //@synthesize placeholderImageContentsRect=_placeholderImageContentsRect - In the implementation block
@property (assign,nonatomic) long long placeholderDisplayMode;                                         //@synthesize placeholderDisplayMode=_placeholderDisplayMode - In the implementation block
@property (getter=isDisplayingPlaceHolder,nonatomic,readonly) BOOL displayingPlaceholder;              //@synthesize displayingPlaceholder=_displayingPlaceholder - In the implementation block
@property (assign,nonatomic) long long videoViewContentMode;                                           //@synthesize videoViewContentMode=_videoViewContentMode - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                              //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
-(ISWrappedAVPlayer *)player;
-(BOOL)allowsEdgeAntialiasing;
-(void)setPlayer:(ISWrappedAVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXVideoPlayerViewDelegate>)delegate;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(void)setDelegate:(id<PXVideoPlayerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_updateVideoView;
-(void)setPlaceholderImageFilters:(NSArray *)arg1 ;
-(void)_setDisplayingPlaceholder:(BOOL)arg1 requestID:(long long)arg2 ;
-(void)_runVisibilityChangeCompletionHandler;
-(NSArray *)placeholderImageFilters;
-(double)videoAppearanceCrossfadeDuration;
-(long long)placeholderDisplayMode;
-(BOOL)isDisplayingPlaceHolder;
-(UIImage *)placeholderImage;
-(void)setVideoViewContentMode:(long long)arg1 ;
-(void)setPlaceholderDisplayMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPlaceholderDisplayMode:(long long)arg1 ;
-(void)setVideoAppearanceCrossfadeDuration:(double)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)generateSnapshotImage;
-(void)_updateContentMode;
-(void)setPlaceholderImageContentsRect:(CGRect)arg1 ;
-(void)_updateEdgeAntialiasing;
-(void)_updateSubviewsVisibility;
-(CGRect)placeholderImageContentsRect;
-(long long)videoViewContentMode;
-(void)dealloc;
@end

