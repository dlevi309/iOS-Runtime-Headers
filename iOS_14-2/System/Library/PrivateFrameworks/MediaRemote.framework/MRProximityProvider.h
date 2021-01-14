/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingControllerDelegate.h>
#import <libobjc.A.dylib/MRMigrationDeviceDelegate.h>
#import <libobjc.A.dylib/PCProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, MRMigrationDevice, NSString;

@interface MRProximityProvider : NSObject <MRNowPlayingControllerDelegate, MRMigrationDeviceDelegate, PCProvider> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _displayContextHandler;
	/*^block*/id _progressEventHandler;
	NSMutableDictionary* _remoteDevices;
	NSMutableSet* _providingDevices;
	NSMutableDictionary* _behaviorResults;
	MRMigrationDevice* _proactiveDevice;
	MRMigrationDevice* _migratingDevice;
	/*^block*/id _behaviorCallback;

}

@property (nonatomic,retain) NSMutableDictionary * remoteDevices;                     //@synthesize remoteDevices=_remoteDevices - In the implementation block
@property (nonatomic,retain) NSMutableSet * providingDevices;                         //@synthesize providingDevices=_providingDevices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * behaviorResults;                   //@synthesize behaviorResults=_behaviorResults - In the implementation block
@property (nonatomic,retain) MRMigrationDevice * proactiveDevice;                     //@synthesize proactiveDevice=_proactiveDevice - In the implementation block
@property (nonatomic,retain) MRMigrationDevice * migratingDevice;                     //@synthesize migratingDevice=_migratingDevice - In the implementation block
@property (nonatomic,copy) id behaviorCallback;                                       //@synthesize behaviorCallback=_behaviorCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id displayContextHandler;                                  //@synthesize displayContextHandler=_displayContextHandler - In the implementation block
@property (nonatomic,copy) id progressEventHandler;                                   //@synthesize progressEventHandler=_progressEventHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)_migrate:(id)arg1 destinationEndpoint:(id)arg2 outputDevice:(id)arg3 label:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)behaviorResults;
-(NSMutableSet *)providingDevices;
-(id)init;
-(void)_removeDeviceIfNeeded:(id)arg1 ;
-(void)_addDeviceIfNeeded:(id)arg1 ;
-(id)progressEventHandler;
-(void)_migrateForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_deviceForUID:(id)arg1 ;
-(void)_beginProvidingDisplayContextIfNeeded:(id)arg1 ;
-(void)_endProvidingDisplayContextIfNeeded:(id)arg1 ;
-(id)_nameForDevice:(id)arg1 inEndpoint:(id)arg2 ;
-(void)_recalculateMigrationBehaviorAndProvideUpdatedDisplayContextForDevice:(id)arg1 ;
-(void)_provideDisplayContextForDevice:(id)arg1 ;
-(id)displayContextHandler;
-(id)_effectivePlayerStateForDevice:(id)arg1 ;
-(id)_displayContextForDevice:(id)arg1 withRemotePlayerState:(id)arg2 proactivePlayerState:(id)arg3 migrationBehavior:(id)arg4 ;
-(id)behaviorCallback;
-(void)setMigratingDevice:(MRMigrationDevice *)arg1 ;
-(void)_migrationBehaviorForRemoteDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDisplayContextHandler:(id)arg1 ;
-(void)_migrationBehaviorForRemoteDevice:(id)arg1 proactiveDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contentToDisplayForDevice:(id)arg1 ;
-(void)setProvidingDevices:(NSMutableSet *)arg1 ;
-(void)setBehaviorResults:(NSMutableDictionary *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)migrationActionForProactivePlayer:(id)arg1 proactiveEndpoint:(id)arg2 remotePlayer:(id)arg3 remoteEndpoint:(id)arg4 reason:(id*)arg5 ;
-(void)setProgressEventHandler:(id)arg1 ;
-(id)endpointForDevice:(id)arg1 ;
-(void)setProactiveDevice:(MRMigrationDevice *)arg1 ;
-(void)setBehaviorCallback:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MRMigrationDevice *)migratingDevice;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSMutableDictionary *)remoteDevices;
-(void)device:(id)arg1 stateDidChange:(unsigned long long)arg2 ;
-(void)device:(id)arg1 playerStateDidChange:(id)arg2 ;
-(MRMigrationDevice *)proactiveDevice;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setRemoteDevices:(NSMutableDictionary *)arg1 ;
-(void)receiveEvent:(id)arg1 ;
@end

