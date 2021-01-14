/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSArray, MRAVDistantOutputDevice, MRDistantExternalDevice, NSXPCListenerEndpoint;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {

	BOOL _canModifyGroupMembership;
	long long _connectionType;
	NSString* _localizedName;
	NSString* _uniqueIdentifier;
	NSObject*<OS_dispatch_queue> _externalDeviceQueue;
	NSArray* _distantOutputDevices;
	NSArray* _distantPersonalOutputDevices;
	MRAVDistantOutputDevice* _distantGroupLeader;
	MRDistantExternalDevice* _distantExternalDevice;
	NSXPCListenerEndpoint* _externalDeviceListenerEndpoint;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalDeviceQueue;                    //@synthesize externalDeviceQueue=_externalDeviceQueue - In the implementation block
@property (nonatomic,copy) NSArray * distantOutputDevices;                                        //@synthesize distantOutputDevices=_distantOutputDevices - In the implementation block
@property (nonatomic,copy) NSArray * distantPersonalOutputDevices;                                //@synthesize distantPersonalOutputDevices=_distantPersonalOutputDevices - In the implementation block
@property (nonatomic,retain) MRAVDistantOutputDevice * distantGroupLeader;                        //@synthesize distantGroupLeader=_distantGroupLeader - In the implementation block
@property (nonatomic,retain) MRDistantExternalDevice * distantExternalDevice;                     //@synthesize distantExternalDevice=_distantExternalDevice - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * externalDeviceListenerEndpoint;              //@synthesize externalDeviceListenerEndpoint=_externalDeviceListenerEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 ;
-(id)localizedName;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(void)setDistantPersonalOutputDevices:(NSArray *)arg1 ;
-(long long)connectionType;
-(id)externalDevice;
-(id)initWithDescriptor:(id)arg1 ;
-(void)setExternalDeviceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)distantPersonalOutputDevices;
-(NSXPCListenerEndpoint *)externalDeviceListenerEndpoint;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSArray *)distantOutputDevices;
-(id)outputDevices;
-(void)setDistantExternalDevice:(MRDistantExternalDevice *)arg1 ;
-(void)setExternalDeviceListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDistantGroupLeader:(MRAVDistantOutputDevice *)arg1 ;
-(BOOL)canModifyGroupMembership;
-(id)personalOutputDevices;
-(id)designatedGroupLeader;
-(MRAVDistantOutputDevice *)distantGroupLeader;
-(NSObject*<OS_dispatch_queue>)externalDeviceQueue;
-(MRDistantExternalDevice *)distantExternalDevice;
@end

