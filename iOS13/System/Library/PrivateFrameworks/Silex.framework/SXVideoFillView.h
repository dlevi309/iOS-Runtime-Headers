/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXVideoFill, SXClippingView, SXVideoFillPlayerView, SXImageResource, SXImageView, NSString;

@interface SXVideoFillView : SXFillView <SXViewportChangeListener> {

	SXVideoFill* _videoFill;
	SXClippingView* _clippingView;
	SXVideoFillPlayerView* _playerView;
	SXImageResource* _imageResource;
	SXImageView* _imageView;

}

@property (nonatomic,retain) SXClippingView * clippingView;                   //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) SXVideoFillPlayerView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) SXImageResource * imageResource;                 //@synthesize imageResource=_imageResource - In the implementation block
@property (nonatomic,readonly) SXImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SXVideoFill * videoFill;                       //@synthesize videoFill=_videoFill - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)load;
-(void)pause;
-(void)reset;
-(CGRect)contentFrame;
-(void)play;
-(void)layoutSubviews;
-(SXImageView *)imageView;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXClippingView *)clippingView;
-(void)setClippingView:(SXClippingView *)arg1 ;
-(SXImageResource *)imageResource;
-(SXVideoFillPlayerView *)playerView;
-(void)setImageResource:(SXImageResource *)arg1 ;
-(void)setPlayerView:(SXVideoFillPlayerView *)arg1 ;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithVideoFill:(id)arg1 DOMObjectProvider:(id)arg2 imageViewFactory:(id)arg3 ;
-(SXVideoFill *)videoFill;
@end

