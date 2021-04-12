/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned deviceID; 
@property (nonatomic,readonly) long long errorCode; 
-(unsigned long long)type;
-(unsigned)deviceID;
-(long long)errorCode;
-(id)initWithDeviceID:(unsigned)arg1 errorCode:(long long)arg2 ;
@end

