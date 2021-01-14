/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSession;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSession * playbackSession; 
-(unsigned long long)type;
-(id)initWithPlaybackSession:(id)arg1 ;
-(MRPlaybackSession *)playbackSession;
@end

