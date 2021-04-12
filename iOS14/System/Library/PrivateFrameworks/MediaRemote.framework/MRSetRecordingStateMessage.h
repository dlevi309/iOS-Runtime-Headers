/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetRecordingStateMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned state; 
-(unsigned long long)type;
-(unsigned)state;
-(id)initWithRecordingState:(unsigned)arg1 ;
@end

