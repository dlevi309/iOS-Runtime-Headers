/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDTouchEvent event; 
@property (nonatomic,readonly) unsigned long long virtualDeviceID; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(MRHIDTouchEvent)event;
-(unsigned long long)virtualDeviceID;
-(id)initWithTouchEvent:(MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2 ;
@end

