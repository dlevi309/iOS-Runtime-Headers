/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableArray, NSOperationQueue, NSTimer, NSHashTable, NSString, MRExternalDevice, _MRAVEndpointDescriptorProtobuf, NSArray, MRAVOutputDevice, NSDictionary, MROrigin;

@interface MRAVEndpoint : NSObject {

	NSMutableArray* _pendingConnectionHandlers;
	NSOperationQueue* _connectionHandlerOperationQueue;
	BOOL _registeredForConnectionStateDidChangeNotifications;
	NSTimer* _connectionTimeoutTimer;
	BOOL _outputDevicesDidChangeNotificationScheduled;
	NSHashTable* _weakObservers;
	long long _connectionType;
	NSString* _localizedName;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) NSString * localizedName;                                            //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) MRExternalDevice * externalDevice; 
@property (nonatomic,readonly) _MRAVEndpointDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (nonatomic,readonly) NSArray * personalOutputDevices; 
@property (nonatomic,readonly) NSArray * outputDeviceUIDs; 
@property (nonatomic,readonly) unsigned long long logicalOutputDeviceCount; 
@property (nonatomic,readonly) MRAVOutputDevice * designatedGroupLeader; 
@property (nonatomic,readonly) long long connectionType;                                          //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) NSString * debugName; 
@property (getter=isProxyGroupPlayer,nonatomic,readonly) BOOL proxyGroupPlayer; 
@property (nonatomic,readonly) BOOL canModifyGroupMembership; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSDictionary * jsonEncodableDictionaryRepresentation; 
@property (getter=isLocalEndpoint,nonatomic,readonly) BOOL localEndpoint; 
@property (getter=isCompanionEndpoint,nonatomic,readonly) BOOL companionEndpoint; 
@property (nonatomic,readonly) MROrigin * origin; 
+(void)createEndpointWithOutputDeviceUIDs:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_notificationSerialQueue;
+(void)directEndpointForOutputDeviceUIDs:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)outputDeviceUIDs;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)addObserver:(id)arg1 ;
-(void)migrateToOutputDevice:(id)arg1 request:(id)arg2 initiator:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)containsOutputDeviceWithUID:(id)arg1 ;
-(id)outputDeviceUIDsMatchingPredicate:(/*^block*/id)arg1 ;
-(MROrigin *)origin;
-(BOOL)isProxyGroupPlayer;
-(unsigned long long)logicalOutputDeviceCount;
-(long long)connectionType;
-(void)migrateToOrAddOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(MRExternalDevice *)externalDevice;
-(void)setExternalDevice:(MRExternalDevice *)arg1 ;
-(void)_callAllCompletionHandlersWithError:(id)arg1 ;
-(BOOL)isLocalEndpoint;
-(BOOL)isVolumeControlAvailable;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)shortDescription;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqualToEndpoint:(id)arg1 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(_MRAVEndpointDescriptorProtobuf *)descriptor;
-(id)description;
-(void)canMigrateToEndpoint:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectToExternalDeviceWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)outputDevices;
-(void)removeObserver:(id)arg1 ;
-(id)_initiatorStringWithInitiator:(id)arg1 uid:(id)arg2 ;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_prepareToMigrateToEndpoint:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)outputDevicesMatchingPredicate:(/*^block*/id)arg1 ;
-(NSDictionary *)jsonEncodableDictionaryRepresentation;
-(void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1 ;
-(BOOL)isCompanionEndpoint;
-(BOOL)canModifyGroupMembership;
-(NSArray *)personalOutputDevices;
-(void)migrateToOutputDevices:(id)arg1 request:(id)arg2 initiator:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_init;
-(BOOL)effectivelyEqual:(id)arg1 ;
-(id)translateClusterUIDIfNeeded:(id)arg1 ;
-(MRAVOutputDevice *)designatedGroupLeader;
-(void)migrateToEndpoint:(id)arg1 request:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)migrateToOrSetOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)debugName;
-(void)scheduleEndpointOutputDevicesDidChangeNotification;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

