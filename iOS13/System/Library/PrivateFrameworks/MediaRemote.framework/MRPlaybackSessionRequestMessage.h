/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackSessionRequestProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface MRPlaybackSessionRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRPlaybackSessionRequestProtobuf * request; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)type;
-(_MRPlaybackSessionRequestProtobuf *)request;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2 ;
@end

