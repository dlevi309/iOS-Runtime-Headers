/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <CarPlayUI/_CPUIBaseTableCell.h>

@class MPUNowPlayingIndicatorView, CPUITableCellAccessory, UIImage, UIView, UIImageView, UIActivityIndicatorView;

@interface CPUITableCell : _CPUIBaseTableCell {

	BOOL _showExplicit;
	BOOL _showActivityIndicator;
	BOOL _shouldShowPlaybackProgress;
	BOOL _container;
	BOOL _currentlyPlaying;
	BOOL _playingIndicatorLeadingSide;
	MPUNowPlayingIndicatorView* _nowPlayingIndicator;
	CPUITableCellAccessory* _cloudAccessory;
	double _playbackProgress;
	UIImage* _artwork;
	UIView* _playbackProgressView;
	UIImageView* _artworkImageView;
	UIImageView* _explicitItemView;
	UIActivityIndicatorView* _activityIndicatorView;
	CGSize _artworkSize;

}

@property (assign,getter=isShowExplicit,nonatomic) BOOL showExplicit;                         //@synthesize showExplicit=_showExplicit - In the implementation block
@property (nonatomic,retain) CPUITableCellAccessory * cloudAccessory;                         //@synthesize cloudAccessory=_cloudAccessory - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) double playbackProgress;                                         //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlaybackProgress;                                 //@synthesize shouldShowPlaybackProgress=_shouldShowPlaybackProgress - In the implementation block
@property (assign,nonatomic) BOOL container;                                                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIImage * artwork;                                               //@synthesize artwork=_artwork - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                                           //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (assign,nonatomic) BOOL playingIndicatorLeadingSide;                                //@synthesize playingIndicatorLeadingSide=_playingIndicatorLeadingSide - In the implementation block
@property (nonatomic,retain) UIView * playbackProgressView;                                   //@synthesize playbackProgressView=_playbackProgressView - In the implementation block
@property (nonatomic,retain) UIImageView * artworkImageView;                                  //@synthesize artworkImageView=_artworkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * explicitItemView;                                  //@synthesize explicitItemView=_explicitItemView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                 //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) MPUNowPlayingIndicatorView * nowPlayingIndicator;              //@synthesize nowPlayingIndicator=_nowPlayingIndicator - In the implementation block
@property (assign,nonatomic) CGSize artworkSize;                                              //@synthesize artworkSize=_artworkSize - In the implementation block
+(double)minimumHeight;
+(double)rowHeight;
-(CGSize)artworkSize;
-(void)setArtwork:(UIImage *)arg1 ;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(void)setContainer:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIImage *)artwork;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIImageView *)artworkImageView;
-(BOOL)container;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)currentlyPlaying;
-(void)applyConfiguration:(id)arg1 ;
-(void)setArtworkSize:(CGSize)arg1 ;
-(MPUNowPlayingIndicatorView *)nowPlayingIndicator;
-(void)configureCell;
-(void)setShowExplicit:(BOOL)arg1 ;
-(void)setShouldShowPlaybackProgress:(BOOL)arg1 ;
-(void)setPlayingIndicatorLeadingSide:(BOOL)arg1 ;
-(BOOL)shouldShowPlaybackProgress;
-(BOOL)playingIndicatorLeadingSide;
-(void)_setCloudAccessory:(id)arg1 ;
-(void)setShowsExplicit:(BOOL)arg1 ;
-(UIView *)playbackProgressView;
-(UIImageView *)explicitItemView;
-(void)setExplicitItemView:(UIImageView *)arg1 ;
-(CPUITableCellAccessory *)cloudAccessory;
-(void)setArtworkImageView:(UIImageView *)arg1 ;
-(void)_updatePlayingArtworkIfNeeded;
-(void)setPlaybackProgressView:(UIView *)arg1 ;
-(double)_accessoryWidth;
-(BOOL)isShowExplicit;
-(void)setCloudAccessory:(CPUITableCellAccessory *)arg1 ;
@end

