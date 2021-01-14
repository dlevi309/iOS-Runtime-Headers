/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRUnregisterGameControllerMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)controllerID;
-(id)initWithControllerID:(unsigned long long)arg1 ;
-(unsigned long long)type;
@end

