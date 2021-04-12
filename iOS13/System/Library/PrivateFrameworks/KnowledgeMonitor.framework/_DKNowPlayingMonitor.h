/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor {

	unsigned _lastPlaybackState;
	AVOutputContext* _outputContext;

}

@property (assign,nonatomic) unsigned lastPlaybackState;                   //@synthesize lastPlaybackState=_lastPlaybackState - In the implementation block
@property (nonatomic,retain) AVOutputContext * outputContext;              //@synthesize outputContext=_outputContext - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(/*^block*/id)_eventFilterBlock;
+(id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2 ;
+(void)setPlaybackState:(unsigned)arg1 bundleId:(id)arg2 track:(id)arg3 outputDeviceIDs:(id)arg4 mediaType:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(AVOutputContext *)outputContext;
-(void)setOutputContext:(AVOutputContext *)arg1 ;
-(void)_registerForNowPlayingNotifications;
-(void)outputDevicesDidChange:(id)arg1 ;
-(void)_nowPlayingInfoDidChange:(void*)arg1 outputDevices:(id)arg2 ;
-(id)_metadataFromInfo:(id)arg1 outputDevices:(id)arg2 ;
-(unsigned)lastPlaybackState;
-(void)setLastPlaybackState:(unsigned)arg1 ;
@end

