/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRNowPlayingState;

@interface MRSetStateMessage : MRProtocolMessage {

	MRNowPlayingState* _state;

}

@property (nonatomic,readonly) MRNowPlayingState * state; 
-(id)initWithNowPlayingState:(id)arg1 ;
-(unsigned long long)type;
-(MRNowPlayingState *)state;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(unsigned long long)priority;
@end

