/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage {

	unsigned long long _priority;

}

@property (nonatomic,readonly) _MRGameControllerMessageProtobuf * event; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2 ;
-(unsigned long long)controllerID;
-(BOOL)shouldLog;
-(_MRGameControllerMessageProtobuf *)event;
-(unsigned long long)type;
-(unsigned long long)priority;
@end

