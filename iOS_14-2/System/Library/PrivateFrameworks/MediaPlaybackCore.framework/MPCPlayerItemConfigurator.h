/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MFPlaybackStackController;
@class MPCMediaFoundationTranslator, MPCPlaybackEngine;

@interface MPCPlayerItemConfigurator : NSObject {

	long long _defaultEQPresetType;
	MPCMediaFoundationTranslator* _translator;
	id<MFPlaybackStackController> _stackController;
	MPCPlaybackEngine* _playbackEngine;

}

@property (assign,nonatomic) long long defaultEQPresetType;                                       //@synthesize defaultEQPresetType=_defaultEQPresetType - In the implementation block
@property (nonatomic,__weak,readonly) MPCMediaFoundationTranslator * translator;                  //@synthesize translator=_translator - In the implementation block
@property (nonatomic,__weak,readonly) id<MFPlaybackStackController> stackController;              //@synthesize stackController=_stackController - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                         //@synthesize playbackEngine=_playbackEngine - In the implementation block
-(void)_setupNotifications;
-(MPCMediaFoundationTranslator *)translator;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)configurePlayerItem:(id)arg1 ;
-(void)dealloc;
-(id)initWithPlaybackEngine:(id)arg1 stackController:(id)arg2 translator:(id)arg3 ;
-(long long)defaultEQPresetType;
-(void)setDefaultEQPresetType:(long long)arg1 ;
-(id<MFPlaybackStackController>)stackController;
@end

