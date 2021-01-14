/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>
#import <libobjc.A.dylib/ASDDeviceConfigurationChangeDelegate.h>
#import <libobjc.A.dylib/ASDPropertyChangedDelegate.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSMutableDictionary, NSString;

@interface ASDPlugin : ASDObject <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {

	NSMapTable* _objects;
	NSObject*<OS_dispatch_queue> _objectQueue;
	NSMutableDictionary* _boxes;
	NSObject*<OS_dispatch_queue> _boxQueue;
	NSMutableDictionary* _audioDevices;
	NSObject*<OS_dispatch_queue> _audioDeviceQueue;
	NSMutableDictionary* _clockDevices;
	NSObject*<OS_dispatch_queue> _clockDeviceQueue;
	NSString* _manufacturerName;
	unsigned _nextObjectID;
	AudioServerPlugInDriverInterface* _interfacePtr;
	AudioServerPlugInDriverInterface* _driverRef;
	AudioServerPlugInHostInterface* _pluginHost;
	unsigned _pluginRefCount;
	NSObject*<OS_dispatch_queue> _powerNotificationQueue;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerConnection;
	unsigned _powerNotifier;
	unsigned _transportType;
	NSString* _bundleID;

}

@property (nonatomic,readonly) AudioServerPlugInDriverInterface* driverRef;              //@synthesize driverRef=_driverRef - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned transportType;                                     //@synthesize transportType=_transportType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)devices;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(void)addDevice:(id)arg1 ;
-(id)plugin;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setTransportType:(unsigned)arg1 ;
-(id)boxes;
-(void)addDevices:(id)arg1 ;
-(unsigned)transportType;
-(unsigned)addRef;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(void)systemWillSleep;
-(NSString *)bundleID;
-(unsigned)objectClass;
-(id)arrayForKey:(id)arg1 ;
-(void)addBox:(id)arg1 ;
-(void)dealloc;
-(void)removeDevice:(id)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)audioDevices;
-(id)clockDevices;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(unsigned)objectIDForDeviceUID:(id)arg1 ;
-(unsigned)objectIDForBoxUID:(id)arg1 ;
-(unsigned)objectIDForClockDeviceUID:(id)arg1 ;
-(void)addAudioDevice:(id)arg1 ;
-(AudioServerPlugInDriverInterface*)driverRef;
-(void)changedProperty:(const AudioObjectPropertyAddress*)arg1 forObject:(id)arg2 ;
-(void)removeAudioDevice:(id)arg1 ;
-(void)addAudioDevices:(id)arg1 ;
-(void)removeAudioDevices:(id)arg1 ;
-(void)systemHasPoweredOn;
-(BOOL)requestConfigurationChangeForDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)halInitializeWithPluginHost:(AudioServerPlugInHostInterface*)arg1 ;
-(unsigned)removeRef;
-(void)addCAObject:(id)arg1 ;
-(void)removeCAObject:(id)arg1 ;
-(id)objectForObjectID:(unsigned)arg1 ;
-(void)removeDevices:(id)arg1 ;
-(void)removeBox:(id)arg1 ;
-(void)addClockDevice:(id)arg1 ;
-(void)addClockDevices:(id)arg1 ;
-(void)removeClockDevice:(id)arg1 ;
-(void)removeClockDevices:(id)arg1 ;
-(void)changedProperty:(const AudioObjectPropertyAddress*)arg1 forObjectID:(unsigned)arg2 ;
-(BOOL)registerForSystemSleepNotifications;
-(void)_handlePowerNotificationWithMessageType:(unsigned)arg1 andArgument:(long long)arg2 ;
-(BOOL)deregisterForSystemSleepNotifications;
@end

