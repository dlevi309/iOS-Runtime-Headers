/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage {

	unsigned long long _priority;

}

@property (nonatomic,readonly) _MRGameControllerMessageProtobuf * event; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(_MRGameControllerMessageProtobuf *)event;
-(BOOL)shouldLog;
-(unsigned long long)controllerID;
-(id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2 ;
@end

