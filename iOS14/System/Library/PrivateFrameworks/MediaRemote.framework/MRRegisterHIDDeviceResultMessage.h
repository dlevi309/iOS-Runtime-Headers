/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic,readonly) long long errorCode; 
@property (nonatomic,readonly) unsigned long long deviceIdentifier; 
-(unsigned long long)deviceIdentifier;
-(long long)errorCode;
-(id)initWithErrorCode:(long long)arg1 deviceIdentifier:(unsigned long long)arg2 ;
-(unsigned long long)type;
@end

