/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMFullScreenEffectSoundPlayerDelegate.h>

@protocol IMFullScreenEffectSoundPlayer, IMFullScreenEffectPlayerDelegate;
@class IMFullScreenEffect, IMMessagePartChatItem, UIImage, NSString, NSTimer;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate> {

	BOOL _wasAborted;
	BOOL _shouldRepeat;
	BOOL _triggeredByResponseKit;
	BOOL _isFromMe;
	IMFullScreenEffect* _fullScreenEffect;
	id<IMFullScreenEffectSoundPlayer> _soundPlayer;
	IMMessagePartChatItem* _messagePartChatItem;
	UIImage* _messageImage;
	double _startTime;
	double _endTime;
	NSString* _languageCode;
	NSTimer* _effectTimer;
	NSString* _identifier;
	id<IMFullScreenEffectPlayerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSTimer * effectTimer;                                      //@synthesize effectTimer=_effectTimer - In the implementation block
@property (nonatomic,retain) IMFullScreenEffect * fullScreenEffect;                             //@synthesize fullScreenEffect=_fullScreenEffect - In the implementation block
@property (assign,nonatomic,__weak) IMMessagePartChatItem * messagePartChatItem;                //@synthesize messagePartChatItem=_messagePartChatItem - In the implementation block
@property (assign,nonatomic) BOOL triggeredByResponseKit;                                       //@synthesize triggeredByResponseKit=_triggeredByResponseKit - In the implementation block
@property (nonatomic,retain) id<IMFullScreenEffectSoundPlayer> soundPlayer;                     //@synthesize soundPlayer=_soundPlayer - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                                     //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) double startTime;                                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                                    //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                           //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL wasAborted;                                                   //@synthesize wasAborted=_wasAborted - In the implementation block
@property (assign,nonatomic,__weak) id<IMFullScreenEffectPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldRepeat;                                                 //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (nonatomic,retain) UIImage * messageImage;                                            //@synthesize messageImage=_messageImage - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) BOOL didPlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IMFullScreenEffectPlayerDelegate>)delegate;
-(void)setDelegate:(id<IMFullScreenEffectPlayerDelegate>)arg1 ;
-(NSString *)languageCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)stopTimer;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)isPlaying;
-(void)startTimer;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)isFromMe;
-(void)setIsFromMe:(BOOL)arg1 ;
-(BOOL)shouldRepeat;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(void)_didPrepare;
-(void)setTriggeredByResponseKit:(BOOL)arg1 ;
-(void)setMessageImage:(UIImage *)arg1 ;
-(BOOL)triggeredByResponseKit;
-(IMMessagePartChatItem *)messagePartChatItem;
-(IMFullScreenEffect *)fullScreenEffect;
-(void)loadFullScreenEffect:(/*^block*/id)arg1 ;
-(void)abortPlayingEffect;
-(void)prepareToPlayEffect;
-(void)startPlayingEffect;
-(BOOL)_shouldAddFilter:(id)arg1 toCell:(id)arg2 ;
-(void)addFullScreenEffectFiltersToCells:(id)arg1 ;
-(void)removeFullScreenEffectFiltersFromCells:(id)arg1 ;
-(void)addFullScreenEffectFilterToTriggeringCell:(id)arg1 ;
-(void)fullScreenEffectSoundPlayerDidStopPlaying:(id)arg1 ;
-(void)fullScreenEffectSoundPlayerDidStartPlaying:(id)arg1 ;
-(void)fullScreenEffectSoundPlayerDidPrepare:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 isFromMe:(BOOL)arg2 ;
-(id)createSoundPlayer;
-(void)setSoundPlayer:(id<IMFullScreenEffectSoundPlayer>)arg1 ;
-(void)setFullScreenEffect:(IMFullScreenEffect *)arg1 ;
-(void)didSetFullScreenEffect:(id)arg1 ;
-(void)_setFullScreenEffect:(id)arg1 ;
-(void)setWasAborted:(BOOL)arg1 ;
-(void)didAbortPlaying;
-(void)didStopPlaying;
-(void)willStartPlaying;
-(id)initWithMessagePartChatItem:(id)arg1 languageCode:(id)arg2 ;
-(void)stopPlayingEffect;
-(BOOL)didPlay;
-(id<IMFullScreenEffectSoundPlayer>)soundPlayer;
-(void)setMessagePartChatItem:(IMMessagePartChatItem *)arg1 ;
-(UIImage *)messageImage;
-(BOOL)wasAborted;
-(NSTimer *)effectTimer;
-(void)setEffectTimer:(NSTimer *)arg1 ;
@end

