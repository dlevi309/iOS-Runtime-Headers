/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <AVFCore/AVPlayerItem.h>

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
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(id)initWithAsset:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)muted;
-(void)dealloc;
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

