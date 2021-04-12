/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface ASACoreAudio : ASAObject {

	unsigned _cadPort;
	NSObject*<OS_dispatch_source> _deathSource;
	NSObject*<OS_dispatch_queue> _deathQueue;
	NSMutableArray* _clients;
	NSMutableArray* _plugins;

}

@property (nonatomic,copy,readonly) NSArray * boxObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * deviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * pluginObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * boxes; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
@property (nonatomic,copy,readonly) NSArray * plugins; 
+(id)sharedCoreAudioObject;
+(id)coreAudio;
-(void)dealloc;
-(NSArray *)plugins;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)addPlugin:(id)arg1 ;
-(void)removePlugin:(id)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(NSArray *)boxes;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
-(id)audioDeviceWithUID:(id)arg1 ;
-(id)pluginWithBundleID:(id)arg1 ;
-(unsigned)audioDeviceObjectIDWithUID:(id)arg1 ;
-(id)initWithAudioObjectID:(unsigned)arg1 ;
-(id)coreAudioClassName;
-(unsigned)pluginObjectIDWithBundleID:(id)arg1 ;
-(unsigned)boxObjectIDWithUID:(id)arg1 ;
-(unsigned)clockDeviceObjectIDWithUID:(id)arg1 ;
-(NSArray *)boxObjectIDs;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(NSArray *)deviceObjectIDs;
-(id)boxWithUID:(id)arg1 ;
-(id)clockDeviceWithUID:(id)arg1 ;
-(void)_setupDeathSource;
-(void)_teardownDeathSource;
-(unsigned)defaultInputAudioDeviceObjectID;
-(unsigned)defaultOutputAudioDeviceObjectID;
-(unsigned)defaultSystemOutputAudioDeviceObjectID;
-(unsigned)transportManagerObjectIDWithBundleID:(id)arg1 ;
-(NSArray *)pluginObjectIDs;
-(id)defaultInputAudioDevice;
-(id)defaultOutputAudioDevice;
-(id)defaultSystemOutputAudioDevice;
-(id)transportManagerWithBundleID:(id)arg1 ;
@end

