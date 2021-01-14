/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)outputDeviceUID;
@end

