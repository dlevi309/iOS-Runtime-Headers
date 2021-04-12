/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class NSString, MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * hostName; 
@property (assign,nonatomic) long long hostPort; 
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (assign,nonatomic) BOOL paired; 
@property (assign,nonatomic) BOOL usingSystemPairing; 
-(void)setName:(NSString *)arg1 ;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)setHostPort:(long long)arg1 ;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
@end

