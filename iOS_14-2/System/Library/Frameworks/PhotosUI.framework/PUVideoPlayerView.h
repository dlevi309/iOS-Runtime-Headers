/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PUVideoPlayerViewDelegate;
@class _PUVideoView, NSArray, UIImageView, UIImage;

@interface PUVideoPlayerView : UIView {

	_PUVideoView* _videoView;
	NSArray* _videoViewConstraints;
	UIImageView* _previewImageView;
	NSArray* _previewImageViewConstraints;
	BOOL _isReadyForVideoDisplay;
	BOOL _isDisplayingPlaceholder;
	BOOL _allowsEdgeAntialiasing;
	BOOL _isDisplayingVideo;
	UIImage* _placeholderImage;
	unsigned long long _videoViewContentMode;
	id<PUVideoPlayerViewDelegate> _delegate;
	CGRect _placeholderImageContentsRect;

}

@property (assign,nonatomic) BOOL isReadyForVideoDisplay;                                //@synthesize isReadyForVideoDisplay=_isReadyForVideoDisplay - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingVideo;                                     //@synthesize isDisplayingVideo=_isDisplayingVideo - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                 //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) CGRect placeholderImageContentsRect;                        //@synthesize placeholderImageContentsRect=_placeholderImageContentsRect - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingPlaceholder;                               //@synthesize isDisplayingPlaceholder=_isDisplayingPlaceholder - In the implementation block
@property (assign,nonatomic) unsigned long long videoViewContentMode;                    //@synthesize videoViewContentMode=_videoViewContentMode - In the implementation block
@property (assign,nonatomic,__weak) id<PUVideoPlayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
-(BOOL)allowsEdgeAntialiasing;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PUVideoPlayerViewDelegate>)delegate;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(void)setDelegate:(id<PUVideoPlayerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIImage *)placeholderImage;
-(void)setVideoViewContentMode:(unsigned long long)arg1 ;
-(void)configureWithAVPlayer:(id)arg1 ;
-(void)setIsDisplayingPlaceholder:(BOOL)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)generateSnapshotImage;
-(void)_installNewVideoViewIfNecessaryWithPlayer:(id)arg1 ;
-(void)_updateContentMode;
-(void)setPlaceholderImageContentsRect:(CGRect)arg1 ;
-(void)setIsReadyForVideoDisplay:(BOOL)arg1 ;
-(void)_updateEdgeAntialiasing;
-(void)_updateSubviewsVisibility;
-(CGRect)placeholderImageContentsRect;
-(BOOL)isReadyForVideoDisplay;
-(BOOL)isDisplayingPlaceholder;
-(unsigned long long)videoViewContentMode;
-(BOOL)isDisplayingVideo;
-(void)setIsDisplayingVideo:(BOOL)arg1 ;
-(void)dealloc;
@end

