/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned capabilities; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned long long)type;
-(unsigned)capabilities;
-(NSString *)outputDeviceUID;
-(NSString *)endpointUID;
-(id)initWithCapabilities:(unsigned)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
@end

