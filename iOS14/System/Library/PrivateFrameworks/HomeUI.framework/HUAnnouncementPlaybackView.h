/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, NSLayoutConstraint, CNAvatarView, UIImageView, NSURL, HFAudioPlayer, NSMutableArray;

@interface HUAnnouncementPlaybackView : UIView {

	BOOL _fullyPlayed;
	NSDictionary* _announcementInfo;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	CNAvatarView* _avatarView;
	UIImageView* _genericAvatarView;
	double _playbackFractionComplete;
	NSURL* _announcementURL;
	int _productType;
	HFAudioPlayer* _audioPlayer;
	NSMutableArray* _audioWaveLayers;
	unsigned long long _currentWaveLayerIndex;

}

@property (nonatomic,retain) CNAvatarView * avatarView;                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImageView * genericAvatarView;                       //@synthesize genericAvatarView=_genericAvatarView - In the implementation block
@property (assign,nonatomic) double playbackFractionComplete;                       //@synthesize playbackFractionComplete=_playbackFractionComplete - In the implementation block
@property (nonatomic,retain) NSURL * announcementURL;                               //@synthesize announcementURL=_announcementURL - In the implementation block
@property (assign,nonatomic) int productType;                                       //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) HFAudioPlayer * audioPlayer;                           //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioWaveLayers;                      //@synthesize audioWaveLayers=_audioWaveLayers - In the implementation block
@property (assign,nonatomic) unsigned long long currentWaveLayerIndex;              //@synthesize currentWaveLayerIndex=_currentWaveLayerIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * announcementInfo;                       //@synthesize announcementInfo=_announcementInfo - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                 //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                  //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerXConstraint;                //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerYConstraint;                //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (assign,nonatomic) BOOL fullyPlayed;                                      //@synthesize fullyPlayed=_fullyPlayed - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateAveragePower:(double)arg1 ;
-(int)productType;
-(NSLayoutConstraint *)centerXConstraint;
-(void)setProductType:(int)arg1 ;
-(HFAudioPlayer *)audioPlayer;
-(CNAvatarView *)avatarView;
-(void)setAudioPlayer:(HFAudioPlayer *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(id)description;
-(void)updateConstraints;
-(NSLayoutConstraint *)heightConstraint;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)centerYConstraint;
-(id)_requiredKeyDescriptors;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSDictionary *)announcementInfo;
-(BOOL)fullyPlayed;
-(UIImageView *)genericAvatarView;
-(BOOL)_isProductTypeHomePod;
-(void)setAnnouncementURL:(NSURL *)arg1 ;
-(void)_configureAnnounceSender:(id)arg1 ;
-(NSMutableArray *)audioWaveLayers;
-(void)_setupAudioWaveLayers;
-(void)_generateRippleForAveragePower:(double)arg1 ;
-(void)playbackStopped;
-(void)_animateLayerWaveAtIndex:(unsigned long long)arg1 forAveragePower:(double)arg2 ;
-(void)setAnnouncementInfo:(NSDictionary *)arg1 ;
-(void)pausePlaybackAnimation;
-(void)resumePlaybackAnimation;
-(void)setFullyPlayed:(BOOL)arg1 ;
-(void)setGenericAvatarView:(UIImageView *)arg1 ;
-(double)playbackFractionComplete;
-(void)setPlaybackFractionComplete:(double)arg1 ;
-(NSURL *)announcementURL;
-(void)setAudioWaveLayers:(NSMutableArray *)arg1 ;
-(unsigned long long)currentWaveLayerIndex;
-(void)setCurrentWaveLayerIndex:(unsigned long long)arg1 ;
@end

