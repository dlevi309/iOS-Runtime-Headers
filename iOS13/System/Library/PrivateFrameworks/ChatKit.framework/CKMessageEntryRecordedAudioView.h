/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@protocol CKMessageEntryRecordedAudioViewDelegate;
@class CKAudioMediaObject, UIButton, UIVisualEffectView, UIImageView, CKAudioController, UILabel, UIImage, NSString;

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate> {

	CKAudioMediaObject* _audioMediaObject;
	UIButton* _deleteButton;
	id<CKMessageEntryRecordedAudioViewDelegate> _delegate;
	UIVisualEffectView* _blurView;
	UIImageView* _balloonImageView;
	CKAudioController* _audioController;
	UILabel* _timeLabel;
	UIImage* _waveformImage;
	UIImageView* _waveformImageView;
	double _time;
	NSString* _timeFormat;

}

@property (nonatomic,retain) UIButton * deleteButton;                                                  //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                            //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                                           //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                      //@synthesize audioController=_audioController - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                      //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImage * waveformImage;                                                  //@synthesize waveformImage=_waveformImage - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                                          //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) double time;                                                              //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * timeFormat;                                                      //@synthesize timeFormat=_timeFormat - In the implementation block
@property (nonatomic,retain) CKAudioMediaObject * audioMediaObject;                                    //@synthesize audioMediaObject=_audioMediaObject - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic,__weak) id<CKMessageEntryRecordedAudioViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKMessageEntryRecordedAudioViewDelegate>)delegate;
-(void)setDelegate:(id<CKMessageEntryRecordedAudioViewDelegate>)arg1 ;
-(void)pause;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)play;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(UIButton *)deleteButton;
-(BOOL)isPlaying;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)updateProgress;
-(void)setAudioMediaObject:(CKAudioMediaObject *)arg1 ;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UIImageView *)balloonImageView;
-(UILabel *)timeLabel;
-(UIImageView *)waveformImageView;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(CKAudioMediaObject *)audioMediaObject;
-(void)setWaveformImage:(UIImage *)arg1 ;
-(void)updateTimeString;
-(UIImage *)waveformImage;
-(NSString *)timeFormat;
-(void)setTimeFormat:(NSString *)arg1 ;
@end

