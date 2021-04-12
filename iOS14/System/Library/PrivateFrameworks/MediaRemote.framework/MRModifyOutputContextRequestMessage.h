/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * addingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * removingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * settingOutputDeviceUIDs; 
-(unsigned)contextType;
-(id)initWithAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 clusterAwareAddingOutputDeviceUIDs:(id)arg4 clusterAwareRemovingOutputDeviceUIDs:(id)arg5 clusterAwareSettingOutputDeviceUIDs:(id)arg6 ;
-(NSArray *)addingOutputDeviceUIDs;
-(NSArray *)removingOutputDeviceUIDs;
-(NSArray *)settingOutputDeviceUIDs;
-(id)description;
-(unsigned long long)type;
@end

