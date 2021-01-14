/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMutableVideoSession.h>

@class NSString;

@interface _PXVideoSessionPresentationState : NSObject <PXMutableVideoSession> {

	BOOL _loopingEnabled;
	BOOL _seekToBeginningAtEnd;
	BOOL _preventsSleepDuringVideoPlayback;
	BOOL _allowsExternalPlayback;
	BOOL _shouldFadeVolumeChange;
	float _volume;
	long long _desiredPlayState;
	NSString* _audioSessionMode;
	unsigned long long _audioSessionRouteSharingPolicy;
	void* _presenter;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;
	SCD_Struct_PX9 _playbackTimeRange;

}

@property (assign,nonatomic) void* presenter;                                                  //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * audioSessionCategory;                           //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSessionCategoryOptions;                 //@synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions - In the implementation block
@property (nonatomic,readonly) NSString * audioSessionMode;                                    //@synthesize audioSessionMode=_audioSessionMode - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSessionRouteSharingPolicy;              //@synthesize audioSessionRouteSharingPolicy=_audioSessionRouteSharingPolicy - In the implementation block
@property (nonatomic,readonly) float volume;                                                   //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL shouldFadeVolumeChange;                                    //@synthesize shouldFadeVolumeChange=_shouldFadeVolumeChange - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 playbackTimeRange;                                 //@synthesize playbackTimeRange=_playbackTimeRange - In the implementation block
@property (assign,nonatomic) BOOL seekToBeginningAtEnd;                                        //@synthesize seekToBeginningAtEnd=_seekToBeginningAtEnd - In the implementation block
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled;                      //@synthesize loopingEnabled=_loopingEnabled - In the implementation block
@property (assign,nonatomic) long long desiredPlayState;                                       //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback;                            //@synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsExternalPlayback;                                      //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)audioSessionCategory;
-(void)setPresenter:(void*)arg1 ;
-(BOOL)allowsExternalPlayback;
-(BOOL)isLoopingEnabled;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(void*)presenter;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 withFade:(BOOL)arg2 ;
-(void)setSeekToBeginningAtEnd:(BOOL)arg1 ;
-(void)setPlaybackTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(unsigned long long)audioSessionCategoryOptions;
-(NSString *)audioSessionMode;
-(unsigned long long)audioSessionRouteSharingPolicy;
-(BOOL)preventsSleepDuringVideoPlayback;
-(SCD_Struct_PX9)playbackTimeRange;
-(BOOL)seekToBeginningAtEnd;
-(BOOL)shouldFadeVolumeChange;
-(float)volume;
@end

