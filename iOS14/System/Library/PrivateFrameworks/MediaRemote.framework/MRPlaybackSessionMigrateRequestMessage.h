/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSession, MRPlaybackSessionMigrateRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSession * playbackSession; 
@property (nonatomic,readonly) MRPlaybackSessionMigrateRequest * request; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 ;
-(MRPlaybackSessionMigrateRequest *)request;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(MRPlaybackSession *)playbackSession;
@end

