/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) float volume; 
-(unsigned long long)type;
-(float)volume;
-(NSString *)outputDeviceUID;
-(id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(id)initWithVolume:(float)arg1 ;
@end

