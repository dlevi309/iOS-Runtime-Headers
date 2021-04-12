/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2 ;
+(/*^block*/id)_eventFilterBlock;
+(void)setPlaybackState:(unsigned)arg1 bundleId:(id)arg2 track:(id)arg3 outputDeviceIDs:(id)arg4 mediaType:(id)arg5 iTunesStoreIdentifier:(id)arg6 iTunesSubscriptionIdentifier:(id)arg7 ;
-(void)synchronouslyReflectCurrentValue;
-(id)init;
-(void)start;
-(void)setLastPlaybackState:(unsigned)arg1 ;
-(void)outputDevicesDidChange:(id)arg1 ;
-(void)stop;
-(void)deactivate;
-(void)_nowPlayingInfoDidChange:(void*)arg1 outputDevices:(id)arg2 ;
-(id)_metadataFromInfo:(id)arg1 outputDevices:(id)arg2 ;
-(void)_registerForNowPlayingNotifications;
-(AVOutputContext *)outputContext;
-(void)setOutputContext:(AVOutputContext *)arg1 ;
-(unsigned)lastPlaybackState;
-(void)dealloc;
@end

