/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * outputDeviceUIDs; 
-(unsigned long long)type;
-(NSArray *)outputDeviceUIDs;
-(id)initWithOutputDeviceUIDs:(id)arg1 ;
@end

