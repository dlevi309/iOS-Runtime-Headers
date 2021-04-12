/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingClientProtobuf;

@interface MRUpdateClientMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * client; 
-(unsigned long long)type;
-(_MRNowPlayingClientProtobuf *)client;
-(id)initWithClient:(id)arg1 ;
@end

