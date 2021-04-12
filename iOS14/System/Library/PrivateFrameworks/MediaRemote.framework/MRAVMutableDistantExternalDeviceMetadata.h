/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class NSString, MRSupportedProtocolMessages, MRDeviceInfo;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * hostName; 
@property (assign,nonatomic) long long hostPort; 
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages; 
@property (nonatomic,retain) MRDeviceInfo * deviceInfo; 
@property (assign,nonatomic) BOOL usingSystemPairing; 
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)setHostPort:(long long)arg1 ;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

