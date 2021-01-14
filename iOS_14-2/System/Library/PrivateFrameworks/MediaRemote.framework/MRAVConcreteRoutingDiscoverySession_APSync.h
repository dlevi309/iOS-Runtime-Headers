/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVConcreteRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRAVClusterObserver.h>

@class NSArray, MRAVClusterController, NSString;

@interface MRAVConcreteRoutingDiscoverySession_APSync : MRAVConcreteRoutingDiscoverySession <MRAVClusterObserver> {

	NSArray* _availableEndpoints;
	id _virtualOutputDeviceNotificationToken;
	MRAVClusterController* _clusterController;
	BOOL _scheduledAvailableEndpointsReload;
	NSArray* _availableOutputDeviceGroups;

}

@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups;              //@synthesize availableOutputDeviceGroups=_availableOutputDeviceGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setExternalDeviceForOutputDeviceUID:(/*^block*/id)arg1 ;
+(id)externalDeviceCache;
+(/*^block*/id)externalDeviceForOutputDeviceUID;
-(void)_onQueue_reloadAvailableEndpoints;
-(void)_scheduleAvailableEndpointsReload;
-(void)_availableEndpointsDidChangeNotification:(id)arg1 ;
-(void)setAvailableOutputDeviceGroups:(NSArray *)arg1 ;
-(BOOL)inferAvailableOutputDevices;
-(void)_onQueue_populateExternalDevice:(id)arg1 ;
-(void)_onQueue_reload;
-(void)_scheduleReload;
-(id)deduplicateAVODGroups:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_externalDeviceConnectionStateDidChange:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 clusterController:(id)arg2 ;
-(void)_onQueue_reloadAvailableOutputDevices;
-(id)availableEndpoints;
-(void)setAvailableEndpoints:(id)arg1 ;
-(NSArray *)availableOutputDeviceGroups;
-(void)_virtualDevicesDidChangeNotification:(id)arg1 ;
-(void)_logAVODGroupsChangedFrom:(id)arg1 toNewGroups:(id)arg2 ;
-(void)dealloc;
-(void)clusterController:(id)arg1 clusterStatusDidChange:(unsigned long long)arg2 ;
@end

