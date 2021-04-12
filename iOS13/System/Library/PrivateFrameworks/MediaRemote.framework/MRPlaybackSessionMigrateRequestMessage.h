/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackSessionProtobuf, MRPlaybackSessionMigrateRequest, _MRNowPlayingPlayerPathProtobuf;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRPlaybackSessionProtobuf * playbackSession; 
@property (nonatomic,readonly) MRPlaybackSessionMigrateRequest * request; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)type;
-(MRPlaybackSessionMigrateRequest *)request;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(_MRPlaybackSessionProtobuf *)playbackSession;
-(id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 ;
@end

