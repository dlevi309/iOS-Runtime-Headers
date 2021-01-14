/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/VisualCompletionInformable.h>

@class NSString, VEKSong, UIImageView, MiroSongPreviewButton, UILabel, MiroCircularProgressBar, UIView, Reachability;

@interface MiroSmartMusicMenuCell : UITableViewCell <VisualCompletionInformable> {

	BOOL _visualProgressCompleted;
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
-(VEKSong *)song;
-(float)progress;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setArtwork:(UIImageView *)arg1 ;
-(void)setArtistName:(UILabel *)arg1 ;
-(long long)networkStatus;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(UILabel *)artistName;
-(Reachability *)reachability;
-(void)prepareForReuse;
-(void)setCloudStatus:(UIImageView *)arg1 ;
-(UIImageView *)artwork;
-(void)_updateTextColors;
-(void)setSong:(VEKSong *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)awakeFromNib;
-(MiroCircularProgressBar *)progressIndicator;
-(void)_setProgress:(float)arg1 ;
-(NSString *)songUID;
-(void)setReachability:(Reachability *)arg1 ;
-(void)dealloc;
-(void)setProgressIndicator:(MiroCircularProgressBar *)arg1 ;
-(UIImageView *)cloudStatus;
-(UILabel *)songName;
-(void)_setupReachabiliy;
-(MiroSongPreviewButton *)previewSongButton;
-(void)networkStatusChanged:(id)arg1 ;
-(void)reactToVisualCompletion;
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
-(void)setSongName:(UILabel *)arg1 ;
-(void)setProgressBackgroundView:(UIView *)arg1 ;
@end

