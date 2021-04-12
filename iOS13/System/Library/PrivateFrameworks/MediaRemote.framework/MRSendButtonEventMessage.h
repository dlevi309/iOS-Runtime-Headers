/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendButtonEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDButtonEvent buttonEvent; 
-(unsigned long long)type;
-(id)initWithButtonEvent:(MRHIDButtonEvent)arg1 ;
-(MRHIDButtonEvent)buttonEvent;
@end

