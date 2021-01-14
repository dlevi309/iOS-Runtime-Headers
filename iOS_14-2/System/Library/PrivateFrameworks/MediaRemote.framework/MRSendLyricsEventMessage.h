/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRLyricsEventProtobuf * event; 
-(id)initWithEvent:(id)arg1 ;
-(_MRLyricsEventProtobuf *)event;
-(unsigned long long)type;
@end

