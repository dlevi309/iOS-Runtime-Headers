/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, VEKSong, UIImageView, MiroSongPreviewButton, UILabel, MiroCircularProgressBar, UIView, Reachability;

@interface MiroSmartMusicMenuCell : UITableViewCell {

	BOOL _observingSong;
	float _progress;
	NSString* _songUID;
	VEKSong* _song;
	UIImageView* _checkmark;
	MiroSongPreviewButton* _previewSongButton;
	UILabel* _songName;
	UILabel* _artistName;
	MiroCircularProgressBar* _progressIndicator;
	UIView* _progressBackgroundView;
	UIImageView* _cloudStatus;
	UIImageView* _artwork;
	Reachability* _reachability;

}

@property (assign,nonatomic,__weak) UILabel * songName;                                       //@synthesize songName=_songName - In the implementation block
@property (assign,nonatomic,__weak) UILabel * artistName;                                     //@synthesize artistName=_artistName - In the implementation block
@property (assign,nonatomic,__weak) MiroCircularProgressBar * progressIndicator;              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic,__weak) UIView * progressBackgroundView;                          //@synthesize progressBackgroundView=_progressBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * cloudStatus;                                //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * artwork;                                    //@synthesize artwork=_artwork - In the implementation block
@property (assign,nonatomic) BOOL observingSong;                                              //@synthesize observingSong=_observingSong - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                                     //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSString * songUID;                                              //@synthesize songUID=_songUID - In the implementation block
@property (assign,nonatomic) float progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) VEKSong * song;                                                  //@synthesize song=_song - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * checkmark;                                  //@synthesize checkmark=_checkmark - In the implementation block
@property (assign,nonatomic,__weak) MiroSongPreviewButton * previewSongButton;                //@synthesize previewSongButton=_previewSongButton - In the implementation block
+(double)dynamicTypeHeight;
-(void)dealloc;
-(float)progress;
-(void)prepareForReuse;
-(void)setProgress:(float)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)_setProgress:(float)arg1 ;
-(void)_updateTextColors;
-(Reachability *)reachability;
-(void)setReachability:(Reachability *)arg1 ;
-(UIImageView *)artwork;
-(void)setArtwork:(UIImageView *)arg1 ;
-(long long)networkStatus;
-(UILabel *)artistName;
-(void)setArtistName:(UILabel *)arg1 ;
-(VEKSong *)song;
-(void)setSong:(VEKSong *)arg1 ;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(MiroCircularProgressBar *)progressIndicator;
-(UIImageView *)cloudStatus;
-(void)setCloudStatus:(UIImageView *)arg1 ;
-(void)setProgressIndicator:(MiroCircularProgressBar *)arg1 ;
-(void)_setupReachabiliy;
-(MiroSongPreviewButton *)previewSongButton;
-(UILabel *)songName;
-(void)networkStatusChanged:(id)arg1 ;
-(void)setSongUID:(NSString *)arg1 ;
-(UIView *)progressBackgroundView;
-(void)_updateCloudStatus;
-(void)_updateProgressIndicator:(float)arg1 ;
-(void)updateArtwork;
-(void)updateSongNameForSong:(id)arg1 ;
-(BOOL)observingSong;
-(void)setObservingSong:(BOOL)arg1 ;
-(void)_songAssetChanged:(id)arg1 ;
-(void)_updateDownload:(id)arg1 ;
-(void)setPreviewSongButton:(MiroSongPreviewButton *)arg1 ;
-(void)setProgressBackgroundView:(UIView *)arg1 ;
-(NSString *)songUID;
-(void)setSongName:(UILabel *)arg1 ;
@end

