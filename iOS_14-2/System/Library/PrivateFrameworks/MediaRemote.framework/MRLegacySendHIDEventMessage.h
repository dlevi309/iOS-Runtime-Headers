/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRLegacySendHIDEventMessage : MRProtocolMessage {

	IOHIDEventRef _event;

}

@property (nonatomic,readonly) MRHIDButtonEvent buttonEvent; 
-(MRHIDButtonEvent)buttonEvent;
-(id)description;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned long long)type;
-(void)dealloc;
@end

