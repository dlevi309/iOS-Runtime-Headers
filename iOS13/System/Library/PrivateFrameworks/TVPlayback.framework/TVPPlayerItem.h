/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <AVFoundation/AVPlayerItem.h>

@class TVPMediaItemLoader, TVImageProxy, AVMediaSelectionOption;

@interface TVPPlayerItem : AVPlayerItem {

	BOOL _muted;
	BOOL _audioSelectionIsAutomatic;
	TVPMediaItemLoader* _mediaItemLoader;
	long long _previousStatus;
	TVImageProxy* _posterProxy;
	id _scrubImageLoader;
	AVMediaSelectionOption* _savedManualAudioSelection;

}

@property (assign,nonatomic) BOOL audioSelectionIsAutomatic;                                  //@synthesize audioSelectionIsAutomatic=_audioSelectionIsAutomatic - In the implementation block
@property (nonatomic,retain) AVMediaSelectionOption * savedManualAudioSelection;              //@synthesize savedManualAudioSelection=_savedManualAudioSelection - In the implementation block
@property (assign,nonatomic,__weak) TVPMediaItemLoader * mediaItemLoader;                     //@synthesize mediaItemLoader=_mediaItemLoader - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                      //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) long long previousStatus;                                        //@synthesize previousStatus=_previousStatus - In the implementation block
@property (nonatomic,retain) TVImageProxy * posterProxy;                                      //@synthesize posterProxy=_posterProxy - In the implementation block
@property (nonatomic,retain) id scrubImageLoader;                                             //@synthesize scrubImageLoader=_scrubImageLoader - In the implementation block
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(long long)previousStatus;
-(TVPMediaItemLoader *)mediaItemLoader;
-(void)setMediaItemLoader:(TVPMediaItemLoader *)arg1 ;
-(void)setAudioSelectionIsAutomatic:(BOOL)arg1 ;
-(void)setSavedManualAudioSelection:(AVMediaSelectionOption *)arg1 ;
-(BOOL)audioSelectionIsAutomatic;
-(AVMediaSelectionOption *)savedManualAudioSelection;
-(void)setPreviousStatus:(long long)arg1 ;
-(TVImageProxy *)posterProxy;
-(void)setPosterProxy:(TVImageProxy *)arg1 ;
-(id)scrubImageLoader;
-(void)setScrubImageLoader:(id)arg1 ;
@end

