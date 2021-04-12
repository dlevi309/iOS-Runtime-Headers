/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDTouchEvent event; 
@property (nonatomic,readonly) unsigned long long virtualDeviceID; 
-(unsigned long long)virtualDeviceID;
-(id)initWithTouchEvent:(MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2 ;
-(MRHIDTouchEvent)event;
-(unsigned long long)type;
-(unsigned long long)priority;
@end

