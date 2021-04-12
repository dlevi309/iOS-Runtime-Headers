/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) long long MIDIOutputBufferSizeHint; 
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
+(void)registerSubclass:(Class)arg1 asComponentDescription:(AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned)arg4 ;
-(id)init;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)reset;
-(double)latency;
-(NSString *)componentName;
-(void)setContextName:(NSString *)arg1 ;
-(NSString *)contextName;
-(OpaqueAudioComponentRef)component;
-(NSString *)manufacturerName;
-(void)deallocateRenderResources;
-(NSArray *)channelMap;
-(void)setChannelMap:(NSArray *)arg1 ;
-(id)renderBlock;
-(AUParameterTree *)parameterTree;
-(AUParameterTree *)parameterTree;
-(void)removeRenderObserver:(long long)arg1 ;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(void)setRenderingOffline:(BOOL)arg1 ;
-(BOOL)isRenderingOffline;
-(void)setMaximumFramesToRender:(unsigned)arg1 ;
-(unsigned)maximumFramesToRender;
-(AUAudioUnitBusArray *)outputBusses;
-(AUAudioUnitBusArray *)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)invalidateAudioUnit;
-(id)scheduleMIDIEventBlock;
-(void)setMIDIOutputEventBlock:(id)arg1 ;
-(BOOL)isMusicDeviceOrEffect;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startUserPresetFolderMonitoring;
-(id)presetStateFor:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteUserPreset:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveUserPreset:(id)arg1 error:(id*)arg2 ;
-(NSArray *)userPresets;
-(BOOL)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 ;
-(void)selectViewConfiguration:(id)arg1 ;
-(id)supportedViewConfigurations:(id)arg1 ;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(BOOL)canProcessInPlace;
-(void)setProfileChangedBlock:(id)arg1 ;
-(AUEventSchedule*)eventSchedule;
-(id)internalRenderBlock;
-(long long)MIDIOutputBufferSizeHint;
-(void)setMusicalContextBlock:(id)arg1 ;
-(void)setTransportStateBlock:(id)arg1 ;
-(BOOL)providesUserInterface;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)setCurrentPreset:(AUAudioUnitPreset *)arg1 ;
-(void)setFullStateForDocument:(NSDictionary *)arg1 ;
-(void)setFullState:(NSDictionary *)arg1 ;
-(NSArray *)channelCapabilities;
-(id)scheduleParameterBlock;
-(BOOL)supportsUserPresets;
-(BOOL)supportsUserPresets;
-(NSDictionary *)fullStateForDocument;
-(id)cachedViewController;
-(AudioComponentDescription)componentDescription;
-(BOOL)renderResourcesAllocated;
-(void)setRenderResourcesAllocated:(BOOL)arg1 ;
-(id)MIDIOutputEventBlock;
-(id)transportStateBlock;
-(id)musicalContextBlock;
-(void)setCachedViewController:(id)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)profileChangedBlock;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 error:(id*)arg2 ;
-(NSString *)audioUnitName;
-(unsigned)componentVersion;
-(NSArray *)MIDIOutputNames;
-(void)setParameterTree:(AUParameterTree *)arg1 ;
-(NSDictionary *)fullState;
-(void)setMIDIOutputBufferSizeHint:(long long)arg1 ;
-(void)tearDownExtension;
-(BOOL)isLoadedInProcess;
-(NSString *)audioUnitShortName;
-(BOOL)allParameterValues;
-(long long)virtualMIDICableCount;
-(NSArray *)factoryPresets;
-(AUAudioUnitPreset *)currentPreset;
-(double)tailTime;
-(long long)renderQuality;
-(void)setRenderQuality:(long long)arg1 ;
-(BOOL)shouldBypassEffect;
-(void)setShouldBypassEffect:(BOOL)arg1 ;
-(BOOL)supportsMPE;
-(BOOL)shouldChangeToFormat:(id)arg1 forBus:(id)arg2 ;
@end

