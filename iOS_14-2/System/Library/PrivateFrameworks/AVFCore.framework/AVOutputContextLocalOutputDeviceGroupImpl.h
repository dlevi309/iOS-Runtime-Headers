/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceGroupImpl.h>

@class AVOutputDeviceGroup, NSArray, AVOutputDevice, AVOutputContext, NSString;

@interface AVOutputContextLocalOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl> {

	AVOutputContext* _outputContext;
	AVOutputDeviceGroup* _parentOutputDeviceGroup;

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
-(void)_contextCanSetVolumeDidChange;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3 ;
-(AVOutputDevice *)groupLeader;
-(id)initWithOutputContext:(id)arg1 ;
-(void)_contextVolumeDidChange;
-(NSArray *)outputDevices;
-(void)setParentOutputDeviceGroup:(AVOutputDeviceGroup *)arg1 ;
-(float)volume;
-(void)_contextOutputDevicesDidChange:(id)arg1 ;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(void)dealloc;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;
@end

