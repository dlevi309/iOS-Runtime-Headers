/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned contextType; 
@property (nonatomic,readonly) NSArray * addingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * removingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * settingOutputDeviceUIDs; 
+(id)addDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
+(id)removeDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
+(id)setDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
-(id)description;
-(unsigned long long)type;
-(unsigned)contextType;
-(id)initWithContextType:(unsigned)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 ;
-(NSArray *)addingOutputDeviceUIDs;
-(NSArray *)removingOutputDeviceUIDs;
-(NSArray *)settingOutputDeviceUIDs;
@end

