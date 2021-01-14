/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceGroupImpl.h>

@class AVOutputDeviceGroup, NSArray, AVOutputDevice, NSString;

@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl> {

	AVOutputDeviceGroup* _parentOutputDeviceGroup;
	OpaqueAPSyncControllerRef _syncController;
	CFStringRef _groupID;

}

@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup;              //@synthesize parentOutputDeviceGroup=_parentOutputDeviceGroup - In the implementation block
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)volumeControlType;
-(void)setVolume:(float)arg1 ;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3 ;
-(AVOutputDevice *)groupLeader;
-(id)initWithRemoteGroupID:(CFStringRef)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
-(id)_outputDeviceForID:(CFStringRef)arg1 ;
-(id)_outputDevicesFromProperty:(CFStringRef)arg1 withQualifier:(CFStringRef)arg2 ;
-(void)_groupMembersChangedForGroupWithID:(CFStringRef)arg1 ;
-(void)_volumeChangedForGroupWithID:(CFStringRef)arg1 ;
-(void)_volumeControlTypeChangedForGroupWithID:(CFStringRef)arg1 ;
-(NSArray *)outputDevices;
-(void)setParentOutputDeviceGroup:(AVOutputDeviceGroup *)arg1 ;
-(float)volume;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(void)dealloc;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;
@end

