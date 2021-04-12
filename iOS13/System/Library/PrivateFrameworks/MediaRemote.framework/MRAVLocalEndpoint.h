/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVConcreteEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, MRAVOutputContext, NSString, NSArray, MROutputContextController;

@interface MRAVLocalEndpoint : MRAVConcreteEndpoint <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRAVOutputContext* _outputContext;
	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MROutputContextController* _outputContextController;

}

@property (nonatomic,copy) NSArray * outputDevices; 
+(BOOL)supportsSecureCoding;
+(id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(long long)connectionType;
-(id)origin;
-(void)_registerForNotifications;
-(NSArray *)outputDevices;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(id)initWithOutputDevices:(id)arg1 ;
-(BOOL)canModifyGroupMembership;
-(id)initWithOutputContext:(id)arg1 ;
-(void)_reloadOutputDevicesFromContext;
-(void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1 ;
-(id)personalOutputDevices;
-(void)connectToExternalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ouputDevicesForOutputDeviceUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

