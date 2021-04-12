/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUIPostPlayViewDelegate;
@class AVBackgroundView, _TVImageView, VUILabel, TVImageProxy, VUICountDownProgressIndicator, NSNumber, NSString;

@interface VUIPostPlayView : UIView {

	BOOL _canAutoPlay;
	id<VUIPostPlayViewDelegate> _delegate;
	AVBackgroundView* _backgroundView;
	_TVImageView* _episodeImageView;
	VUILabel* _nextEpisodeLabel;
	TVImageProxy* _episodeImageProxy;
	VUICountDownProgressIndicator* _autoPlayIndicator;
	NSNumber* _autoPlayDuration;
	NSNumber* _defaultAutoPlayDuration;
	NSString* _title;

}

@property (nonatomic,retain) AVBackgroundView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _TVImageView * episodeImageView;                                //@synthesize episodeImageView=_episodeImageView - In the implementation block
@property (nonatomic,retain) VUILabel * nextEpisodeLabel;                                    //@synthesize nextEpisodeLabel=_nextEpisodeLabel - In the implementation block
@property (nonatomic,retain) TVImageProxy * episodeImageProxy;                               //@synthesize episodeImageProxy=_episodeImageProxy - In the implementation block
@property (nonatomic,retain) VUICountDownProgressIndicator * autoPlayIndicator;              //@synthesize autoPlayIndicator=_autoPlayIndicator - In the implementation block
@property (nonatomic,retain) NSNumber * autoPlayDuration;                                    //@synthesize autoPlayDuration=_autoPlayDuration - In the implementation block
@property (nonatomic,retain) NSNumber * defaultAutoPlayDuration;                             //@synthesize defaultAutoPlayDuration=_defaultAutoPlayDuration - In the implementation block
@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<VUIPostPlayViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canAutoPlay;                                               //@synthesize canAutoPlay=_canAutoPlay - In the implementation block
-(id<VUIPostPlayViewDelegate>)delegate;
-(void)setDelegate:(id<VUIPostPlayViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(AVBackgroundView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(AVBackgroundView *)arg1 ;
-(void)_setupViews;
-(BOOL)canAutoPlay;
-(void)setCanAutoPlay:(BOOL)arg1 ;
-(_TVImageView *)episodeImageView;
-(void)setEpisodeImageView:(_TVImageView *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(CGSize)_layoutForCategoryAccessibility:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 andTVImageProxy:(id)arg2 andTitle:(id)arg3 ;
-(CGSize)_layoutForOriginal:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)_startAutoPlayAnimation;
-(void)_invalidateAutoPlayIfNeeded;
-(VUICountDownProgressIndicator *)autoPlayIndicator;
-(void)_dispatchAutoPlayEvent;
-(void)setAutoPlayIndicator:(VUICountDownProgressIndicator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andEpisodeArtworkURLStringFormat:(id)arg2 andTitle:(id)arg3 ;
-(void)startAutoPlayTimer;
-(void)stopAutoPlayTimer;
-(VUILabel *)nextEpisodeLabel;
-(void)setNextEpisodeLabel:(VUILabel *)arg1 ;
-(TVImageProxy *)episodeImageProxy;
-(void)setEpisodeImageProxy:(TVImageProxy *)arg1 ;
-(NSNumber *)autoPlayDuration;
-(void)setAutoPlayDuration:(NSNumber *)arg1 ;
-(NSNumber *)defaultAutoPlayDuration;
-(void)setDefaultAutoPlayDuration:(NSNumber *)arg1 ;
@end

