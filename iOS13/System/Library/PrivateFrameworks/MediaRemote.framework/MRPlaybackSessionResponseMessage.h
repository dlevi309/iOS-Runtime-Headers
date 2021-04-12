/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRPlaybackSessionProtobuf * playbackSession; 
-(unsigned long long)type;
-(id)initWithPlaybackSession:(id)arg1 ;
-(_MRPlaybackSessionProtobuf *)playbackSession;
@end

