/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(id)init;
-(unsigned long long)type;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 ;
@end

