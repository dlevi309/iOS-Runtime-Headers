/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, MRAVOutputContext, NSString, NSArray, MROutputContextController;

@interface MRAVLocalEndpoint : MRAVEndpoint <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRAVOutputContext* _outputContext;
	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MROutputContextController* _outputContextController;

}

@property (nonatomic,copy) NSArray * outputDevices; 
+(BOOL)supportsSecureCoding;
+(id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1 ;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(id)origin;
-(BOOL)isProxyGroupPlayer;
-(long long)connectionType;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1 ;
-(NSArray *)outputDevices;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canModifyGroupMembership;
-(id)personalOutputDevices;
-(id)designatedGroupLeader;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

