/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class AVOutputDeviceGroup, NSArray, AVOutputDevice;


@protocol AVOutputDeviceGroupImpl <NSObject>
@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup; 
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@required
-(long long)volumeControlType;
-(void)setVolume:(float)arg1;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3;
-(AVOutputDevice *)groupLeader;
-(NSArray *)outputDevices;
-(void)setParentOutputDeviceGroup:(id)arg1;
-(float)volume;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;

@end

