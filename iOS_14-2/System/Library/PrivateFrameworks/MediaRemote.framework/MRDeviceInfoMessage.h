/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, MRDeviceInfo;

@interface MRDeviceInfoMessage : MRProtocolMessage {

	MRSupportedProtocolMessages* _supportedProtocolMessages;

}

@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedProtocolMessages; 
-(MRDeviceInfo *)deviceInfo;
-(unsigned long long)encryptionType;
-(unsigned long long)type;
-(id)initWithDeviceInfo:(id)arg1 ;
-(MRSupportedProtocolMessages *)supportedProtocolMessages;
@end

