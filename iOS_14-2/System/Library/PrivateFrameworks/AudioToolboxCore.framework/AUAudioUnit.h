/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSString, UIViewController, AUParameterTree, NSMutableArray, NSObject, NSArray, AUAudioUnitPreset, AUAudioUnitBusArray, NSDictionary;

@interface AUAudioUnit : NSObject {

	OpaqueAudioComponentRef _component;
	NSString* _componentName;
	unsigned _componentVersion;
	UIViewController* _cachedViewController;
	unsigned _maximumFramesToRender;
	long long _MIDIOutputBufferSizeHint;
	RealtimeState* _realtimeState;
	AUParameterTree* _parameterTree;
	NSMutableArray* _userPresets;
	BOOL _isLoadedInProcess;
	NSObject*<OS_dispatch_queue> _presetMonitoringQueue;
	NSObject*<OS_dispatch_source> _presetFolderWatcher;
	BOOL _renderResourcesAllocated;
	BOOL _allParameterValues;
	BOOL _supportsUserPresets;
	BOOL _shouldBypassEffect;
	BOOL _canProcessInPlace;
	BOOL _renderingOffline;
	BOOL _supportsMPE;
	BOOL _requestViewControllerSynchronously;
	NSString* _audioUnitShortName;
	long long _virtualMIDICableCount;
	/*^block*/id _MIDIOutputEventBlock;
	NSArray* _factoryPresets;
	AUAudioUnitPreset* _currentPreset;
	double _latency;
	double _tailTime;
	long long _renderQuality;
	/*^block*/id _musicalContextBlock;
	/*^block*/id _transportStateBlock;
	NSString* _contextName;
	NSArray* _channelMap;
	/*^block*/id _profileChangedBlock;
	AudioComponentDescription _componentDescription;

}

@property (nonatomic,readonly) id internalRenderBlock; 
@property (nonatomic,readonly) id renderContextObserver; 
@property (assign,nonatomic) long long MIDIOutputBufferSizeHint; 
@property (assign,nonatomic) BOOL requestViewControllerSynchronously;                              //@synthesize requestViewControllerSynchronously=_requestViewControllerSynchronously - In the implementation block
@property (nonatomic,readonly) AudioComponentDescription componentDescription;                     //@synthesize componentDescription=_componentDescription - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentRef component; 
@property (nonatomic,copy,readonly) NSString * componentName; 
@property (nonatomic,copy,readonly) NSString * audioUnitName; 
@property (nonatomic,copy,readonly) NSString * manufacturerName; 
@property (nonatomic,copy,readonly) NSString * audioUnitShortName;                                 //@synthesize audioUnitShortName=_audioUnitShortName - In the implementation block
@property (nonatomic,readonly) unsigned componentVersion; 
@property (nonatomic,readonly) BOOL renderResourcesAllocated;                                      //@synthesize renderResourcesAllocated=_renderResourcesAllocated - In the implementation block
@property (nonatomic,readonly) AUAudioUnitBusArray * inputBusses; 
@property (nonatomic,readonly) AUAudioUnitBusArray * outputBusses; 
@property (nonatomic,readonly) id renderBlock; 
@property (nonatomic,readonly) id scheduleParameterBlock; 
@property (assign,nonatomic) unsigned maximumFramesToRender; 
@property (nonatomic,retain) AUParameterTree * parameterTree; 
@property (nonatomic,readonly) BOOL allParameterValues;                                            //@synthesize allParameterValues=_allParameterValues - In the implementation block
@property (getter=isMusicDeviceOrEffect,nonatomic,readonly) BOOL musicDeviceOrEffect; 
@property (nonatomic,readonly) long long virtualMIDICableCount;                                    //@synthesize virtualMIDICableCount=_virtualMIDICableCount - In the implementation block
@property (nonatomic,readonly) id scheduleMIDIEventBlock; 
@property (nonatomic,copy,readonly) NSArray * MIDIOutputNames; 
@property (nonatomic,readonly) BOOL providesUserInterface; 
@property (nonatomic,copy) id MIDIOutputEventBlock;                                                //@synthesize MIDIOutputEventBlock=_MIDIOutputEventBlock - In the implementation block
@property (nonatomic,copy) NSDictionary * fullState; 
@property (nonatomic,copy) NSDictionary * fullStateForDocument; 
@property (nonatomic,copy,readonly) NSArray * factoryPresets;                                      //@synthesize factoryPresets=_factoryPresets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userPresets; 
@property (nonatomic,readonly) BOOL supportsUserPresets;                                           //@synthesize supportsUserPresets=_supportsUserPresets - In the implementation block
@property (nonatomic,readonly) BOOL isLoadedInProcess; 
@property (nonatomic,retain) AUAudioUnitPreset * currentPreset;                                    //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,readonly) double latency;                                                     //@synthesize latency=_latency - In the implementation block
@property (nonatomic,readonly) double tailTime;                                                    //@synthesize tailTime=_tailTime - In the implementation block
@property (assign,nonatomic) long long renderQuality;                                              //@synthesize renderQuality=_renderQuality - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassEffect;                                              //@synthesize shouldBypassEffect=_shouldBypassEffect - In the implementation block
@property (nonatomic,readonly) BOOL canProcessInPlace;                                             //@synthesize canProcessInPlace=_canProcessInPlace - In the implementation block
@property (assign,getter=isRenderingOffline,nonatomic) BOOL renderingOffline;                      //@synthesize renderingOffline=_renderingOffline - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelCapabilities; 
@property (nonatomic,copy) id musicalContextBlock;                                                 //@synthesize musicalContextBlock=_musicalContextBlock - In the implementation block
@property (nonatomic,copy) id transportStateBlock;                                                 //@synthesize transportStateBlock=_transportStateBlock - In the implementation block
@property (nonatomic,copy) NSString * contextName;                                                 //@synthesize contextName=_contextName - In the implementation block
@property (nonatomic,readonly) BOOL supportsMPE;                                                   //@synthesize supportsMPE=_supportsMPE - In the implementation block
@property (nonatomic,copy) NSArray * channelMap;                                                   //@synthesize channelMap=_channelMap - In the implementation block
@property (nonatomic,copy) id profileChangedBlock;                                                 //@synthesize profileChangedBlock=_profileChangedBlock - In the implementation block
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)auAudioUnitForAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
+(id)__userPresetPath:(id)arg1 error:(id*)arg2 ;
+(id)__presetFromPath:(id)arg1 ;
+(BOOL)_saveUserPreset:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
+(BOOL)_deleteUserPreset:(id)arg1 error:(id*)arg2 ;
+(id)_presetStateFor:(id)arg1 error:(id*)arg2 ;
+(void)_loadUserPresets:(id)arg1 error:(id*)arg2 ;
+(id)_monitorUserPresets:(id)arg1 callback:(/*^block*/id)arg2 ;
+(id)__sanitizeFileName:(id)arg1 ;
+(void)__sanitizePresetNumber:(id)arg1 ;
+(id)keyPathsForValuesAffectingAllParameterValues;
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 connectionProvider:(function<NSXPCConnection *(NSUUID *)>*)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)registerSubclass:(Class)arg1 asComponentDescription:(AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned)arg4 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)init;
-(NSString *)contextName;
-(AUParameterTree *)parameterTree;
-(AUParameterTree *)parameterTree;
-(NSString *)manufacturerName;
-(AUAudioUnitBusArray *)inputBusses;
-(void)setRenderingOffline:(BOOL)arg1 ;
-(BOOL)isRenderingOffline;
-(void)setMaximumFramesToRender:(unsigned)arg1 ;
-(unsigned)maximumFramesToRender;
-(AUAudioUnitBusArray *)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)invalidateAudioUnit;
-(id)scheduleMIDIEventBlock;
-(void)setMIDIOutputEventBlock:(id)arg1 ;
-(BOOL)isMusicDeviceOrEffect;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)startUserPresetFolderMonitoring;
-(AudioComponentDescription)componentDescription;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)tailTime;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)setMusicalContextBlock:(id)arg1 ;
-(void)setTransportStateBlock:(id)arg1 ;
-(void)internalDeallocateRenderResources;
-(id)internalRenderBlock;
-(float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned)arg2 ;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(id)supportedViewConfigurations:(id)arg1 ;
-(void)setFullState:(NSDictionary *)arg1 ;
-(void)selectViewConfiguration:(id)arg1 ;
-(BOOL)providesUserInterface;
-(id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 ;
-(BOOL)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(void)setFullStateForDocument:(NSDictionary *)arg1 ;
-(BOOL)saveUserPreset:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteUserPreset:(id)arg1 error:(id*)arg2 ;
-(id)presetStateFor:(id)arg1 error:(id*)arg2 ;
-(NSArray *)userPresets;
-(BOOL)isLoadedInProcess;
-(int)remoteProcessIdentifier;
-(void)setLoadedOutOfProcess;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 error:(id*)arg2 ;
-(NSString *)audioUnitName;
-(unsigned)componentVersion;
-(AUEventSchedule*)eventSchedule;
-(AUScheduledParameterRefresher2*)scheduledParameterRefresher;
-(AUv2GetParameterSynchronizer*)auv2GetParameterSynchronizer;
-(void)deliverV2Parameters:(const AURenderEvent*)arg1 ;
-(id)scheduleParameterBlock;
-(NSArray *)MIDIOutputNames;
-(void)setParameterTree:(AUParameterTree *)arg1 ;
-(void)setV2Parameter:(unsigned long long)arg1 value:(float)arg2 bufferOffset:(unsigned)arg3 sequenceNumber:(unsigned)arg4 ;
-(void)flushEventSchedule;
-(NSArray *)channelCapabilities;
-(NSDictionary *)fullStateForDocument;
-(id)cachedViewController;
-(void)setCachedViewController:(id)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setMIDIOutputBufferSizeHint:(long long)arg1 ;
-(long long)MIDIOutputBufferSizeHint;
-(id)_valueForProperty:(id)arg1 error:(id*)arg2 ;
-(void)tearDownExtension;
-(id)osWorkgroup;
-(BOOL)isSpeechSynthesisProvider;
-(NSString *)audioUnitShortName;
-(BOOL)renderResourcesAllocated;
-(BOOL)allParameterValues;
-(long long)virtualMIDICableCount;
-(id)MIDIOutputEventBlock;
-(NSArray *)factoryPresets;
-(BOOL)supportsUserPresets;
-(BOOL)supportsUserPresets;
-(long long)renderQuality;
-(void)setRenderQuality:(long long)arg1 ;
-(BOOL)shouldBypassEffect;
-(void)setShouldBypassEffect:(BOOL)arg1 ;
-(BOOL)canProcessInPlace;
-(id)musicalContextBlock;
-(id)transportStateBlock;
-(void)setContextName:(NSString *)arg1 ;
-(BOOL)supportsMPE;
-(id)profileChangedBlock;
-(void)setProfileChangedBlock:(id)arg1 ;
-(BOOL)requestViewControllerSynchronously;
-(void)setRequestViewControllerSynchronously:(BOOL)arg1 ;
-(id)renderContextObserver;
-(void)removeRenderObserver:(long long)arg1 ;
-(double)latency;
-(BOOL)shouldChangeToFormat:(id)arg1 forBus:(id)arg2 ;
-(void)setRenderResourcesAllocated:(BOOL)arg1 ;
-(void)deallocateRenderResources;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(AUAudioUnitPreset *)currentPreset;
-(void)setCurrentPreset:(AUAudioUnitPreset *)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(OpaqueAudioComponentRef)component;
-(void)reset;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(NSString *)componentName;
-(NSArray *)channelMap;
-(void)setChannelMap:(NSArray *)arg1 ;
-(id)renderBlock;
-(NSDictionary *)fullState;
-(void)dealloc;
@end

