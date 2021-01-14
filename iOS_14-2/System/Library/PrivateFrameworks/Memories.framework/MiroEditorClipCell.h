/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol MiroEditorClipCellDelegate;
@class UIImage, PMClipProvider, AVPlayer, UIImageView, NSLayoutConstraint, UILabel, AVPlayerItem, AVPlayerLayer, UIView, PXUIAssetBadgeView, MiroEditorClipDebugView;

@interface MiroEditorClipCell : UICollectionViewCell {

	id<MiroEditorClipCellDelegate> _delegate;
	UIImage* _thumbnail;
	PMClipProvider* _clipProvider;
	AVPlayer* _player;
	UIImageView* _thumbnailView;
	NSLayoutConstraint* _bottomBarBottomSpaceConstraint;
	UILabel* _debugLabel;
	AVPlayerItem* _playerItem;
	AVPlayerLayer* _playerLayer;
	UIView* _circularPlayButton;
	UIView* _audioButtonContainerView;
	UILabel* _audioButtonLabel;
	UIView* _treatmentButtonContainerView;
	PXUIAssetBadgeView* _photoIrisBadgeView;
	NSLayoutConstraint* _thumbnailAspectConstraint;
	MiroEditorClipDebugView* _debugInfoView;
	NSLayoutConstraint* _treatmentButtonTopConstraint;

}

@property (nonatomic,retain) AVPlayer * player;                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                      //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) UIView * circularPlayButton;                                      //@synthesize circularPlayButton=_circularPlayButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * audioButtonContainerView;                         //@synthesize audioButtonContainerView=_audioButtonContainerView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * audioButtonLabel;                                //@synthesize audioButtonLabel=_audioButtonLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * treatmentButtonContainerView;                     //@synthesize treatmentButtonContainerView=_treatmentButtonContainerView - In the implementation block
@property (nonatomic,retain) PXUIAssetBadgeView * photoIrisBadgeView;                          //@synthesize photoIrisBadgeView=_photoIrisBadgeView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailAspectConstraint;                   //@synthesize thumbnailAspectConstraint=_thumbnailAspectConstraint - In the implementation block
@property (assign,nonatomic,__weak) MiroEditorClipDebugView * debugInfoView;                   //@synthesize debugInfoView=_debugInfoView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * treatmentButtonTopConstraint;                //@synthesize treatmentButtonTopConstraint=_treatmentButtonTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<MiroEditorClipCellDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) PMClipProvider * clipProvider;                                    //@synthesize clipProvider=_clipProvider - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic,__weak) UIImageView * thumbnailView;                               //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomBarBottomSpaceConstraint;              //@synthesize bottomBarBottomSpaceConstraint=_bottomBarBottomSpaceConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * debugLabel;                                      //@synthesize debugLabel=_debugLabel - In the implementation block
-(AVPlayer *)player;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPlaying;
-(UIImage *)thumbnail;
-(id<MiroEditorClipCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)play:(id)arg1 ;
-(void)setDelegate:(id<MiroEditorClipCellDelegate>)arg1 ;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(UIImageView *)thumbnailView;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(UILabel *)debugLabel;
-(void)pause:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
-(void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2 ;
-(PMClipProvider *)clipProvider;
-(void)setClipProvider:(PMClipProvider *)arg1 ;
-(id)_faceRectsInViewSpace;
-(void)_highlightFacesForRects:(id)arg1 ;
-(void)_highlightPOI;
-(CGRect)_poiRectInViewSpace;
-(BOOL)_removePOIsInRect:(CGRect)arg1 ;
-(void)_addPOIInRect:(CGRect)arg1 ;
-(void)_addHighlightRectsToThumbnail;
-(void)handleTapAtLocation:(CGPoint)arg1 ;
-(void)playPause:(id)arg1 ;
-(BOOL)circularPlayButtonIsHidden;
-(void)updateControlVisibility;
-(NSLayoutConstraint *)bottomBarBottomSpaceConstraint;
-(void)stopPlayback:(id)arg1 ;
-(void)showPlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateAudioButton;
-(MiroEditorClipDebugView *)debugInfoView;
-(UIView *)audioButtonContainerView;
-(UIView *)treatmentButtonContainerView;
-(void)setTreatmentButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)treatmentButtonTopConstraint;
-(void)_setupCircularPlayButton;
-(void)audioButtonTouchUpInside:(id)arg1 ;
-(void)_updateThumbnailAspectIfNecessary;
-(NSLayoutConstraint *)thumbnailAspectConstraint;
-(void)setThumbnailAspectConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updatePlayButton;
-(void)_updateTreatmentButton;
-(void)_updateDebugInfoView;
-(void)_didPlayToEnd:(id)arg1 ;
-(UILabel *)audioButtonLabel;
-(void)treatmentButtonTouchUpInside:(id)arg1 ;
-(PXUIAssetBadgeView *)photoIrisBadgeView;
-(void)setPhotoIrisBadgeView:(PXUIAssetBadgeView *)arg1 ;
-(UIView *)circularPlayButton;
-(void)playButtonTouchUpInside:(id)arg1 ;
-(void)setCircularPlayButton:(UIView *)arg1 ;
-(void)_updateAudioVolume;
-(void)_hidePlayer;
-(void)_disableAudioTracks;
-(void)setBottomBarBottomSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAudioButtonContainerView:(UIView *)arg1 ;
-(void)setAudioButtonLabel:(UILabel *)arg1 ;
-(void)setTreatmentButtonContainerView:(UIView *)arg1 ;
-(void)setDebugInfoView:(MiroEditorClipDebugView *)arg1 ;
@end

