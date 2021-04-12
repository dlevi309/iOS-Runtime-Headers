/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned capabilities; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned)capabilities;
-(id)initWithCapabilities:(unsigned)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
-(NSString *)endpointUID;
-(unsigned long long)type;
-(NSString *)outputDeviceUID;
@end

