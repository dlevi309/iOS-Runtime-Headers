/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)load;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXImageView *)imageView;
-(void)pause;
-(void)play;
-(SXImageResource *)imageResource;
-(void)setImageResource:(SXImageResource *)arg1 ;
-(SXVideoFillPlayerView *)playerView;
-(SXClippingView *)clippingView;
-(void)setPlayerView:(SXVideoFillPlayerView *)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(void)setClippingView:(SXClippingView *)arg1 ;
-(void)dealloc;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithVideoFill:(id)arg1 DOMObjectProvider:(id)arg2 imageViewFactory:(id)arg3 ;
-(SXVideoFill *)videoFill;
@end

