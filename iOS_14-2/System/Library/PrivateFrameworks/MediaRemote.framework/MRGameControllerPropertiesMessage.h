/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRGameControllerPropertiesProtobuf * properties; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(_MRGameControllerPropertiesProtobuf *)properties;
-(unsigned long long)controllerID;
-(id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2 ;
-(unsigned long long)type;
@end

