/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned deviceID; 
@property (nonatomic,readonly) long long errorCode; 
-(unsigned)deviceID;
-(long long)errorCode;
-(unsigned long long)type;
-(id)initWithDeviceID:(unsigned)arg1 errorCode:(long long)arg2 ;
@end

