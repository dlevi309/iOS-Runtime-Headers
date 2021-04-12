/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSSet, NSMutableSet, RPMediaControlSession;

@interface _TVRCRapportMediaEventsManager : NSObject {

	int _currentSetting;
	NSSet* _volumeCommands;
	NSMutableSet* _mediaCommands;
	RPMediaControlSession* _mediaSession;
	/*^block*/id _eventHandler;

}

@property (nonatomic,retain) NSSet * volumeCommands;                            //@synthesize volumeCommands=_volumeCommands - In the implementation block
@property (nonatomic,retain) NSMutableSet * mediaCommands;                      //@synthesize mediaCommands=_mediaCommands - In the implementation block
@property (nonatomic,retain) RPMediaControlSession * mediaSession;              //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,copy) id eventHandler;                                     //@synthesize eventHandler=_eventHandler - In the implementation block
@property (assign,nonatomic) int currentSetting;                                //@synthesize currentSetting=_currentSetting - In the implementation block
@property (readonly) NSSet * supportedMediaCommands; 
-(void)dealloc;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(RPMediaControlSession *)mediaSession;
-(void)setMediaSession:(RPMediaControlSession *)arg1 ;
-(int)currentSetting;
-(void)setCurrentSetting:(int)arg1 ;
-(int)_commandForMediaButtonEvent:(id)arg1 ;
-(NSSet *)supportedMediaCommands;
-(void)sendMediaEvent:(id)arg1 ;
-(id)initWithCompanionLinkClient:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)_setupMediaCommands:(unsigned long long)arg1 ;
-(void)_refreshCaptionState;
-(id)supportedCaptionEvents;
-(int)_captionSettingForButtonEvent:(id)arg1 ;
-(NSSet *)volumeCommands;
-(void)setVolumeCommands:(NSSet *)arg1 ;
-(NSMutableSet *)mediaCommands;
-(void)setMediaCommands:(NSMutableSet *)arg1 ;
@end

