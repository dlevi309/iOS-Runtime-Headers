/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVOutputDeviceGroupImpl;
#import <AVFCore/AVFCore-Structs.h>
@class NSArray, AVOutputDevice;

@interface AVOutputDeviceGroup : NSObject {

	id<AVOutputDeviceGroupImpl> _impl;

}

@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@property (readonly) long long volumeControlType; 
+(void)initialize;
+(id)sharedAudioPresentationOutputGroup;
+(id)outputDeviceGroupWithRemoteGroupID:(CFStringRef)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
-(id)initWithOutputDeviceGroupImpl:(id)arg1 ;
-(long long)volumeControlType;
-(void)setVolume:(float)arg1 ;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(AVOutputDevice *)groupLeader;
-(id)description;
-(NSArray *)outputDevices;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)outputDeviceGroupImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2 ;
-(void)outputDeviceGroupImplDidChangeVolumeControlType:(id)arg1 ;
-(unsigned long long)hash;
-(float)volume;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(void)outputDeviceGroupImplDidChangeVolume:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)impl;
@end

