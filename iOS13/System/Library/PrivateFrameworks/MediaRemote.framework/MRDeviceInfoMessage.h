/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage {

	MRSupportedProtocolMessages* _supportedProtocolMessages;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedProtocolMessages; 
-(unsigned long long)type;
-(unsigned long long)encryptionType;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(unsigned long long)_lastSupportedMessageType;
-(unsigned long long)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
-(id)initWithDeviceInfo:(id)arg1 ;
-(MRSupportedProtocolMessages *)supportedProtocolMessages;
@end

