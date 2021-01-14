/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) float volume; 
-(id)initWithVolume:(float)arg1 ;
-(unsigned long long)type;
-(NSString *)outputDeviceUID;
-(float)volume;
-(id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
@end

