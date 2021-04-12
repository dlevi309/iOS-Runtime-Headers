/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class NSObject, AUV2BridgeBusArray, AUParameterTree;

@interface AUAudioUnitV2Bridge : AUAudioUnit {

	NSObject*<OS_dispatch_queue> _eventListenerQueue;
	AUListenerBaseRef _eventListener;
	AUListenerBaseRef _parameterListener;
	BOOL _removingObserverWithContext;
	BOOL _audioUnitIsOwned;
	AUV2BridgeBusArray* _inputBusses;
	AUV2BridgeBusArray* _outputBusses;
	AUParameterTree* _cachedParameterTree;
	unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer> >* _renderer;
	/*^block*/id _MIDIOutputEventBlock;
	OpaqueAudioComponentInstanceRef _audioUnit;

}

@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit;              //@synthesize audioUnit=_audioUnit - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)reset;
-(void)deallocateRenderResources;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(id)parameterTree;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)invalidateAudioUnit;
-(void)setMIDIOutputEventBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(void)setCurrentPreset:(id)arg1 ;
-(void)setFullStateForDocument:(id)arg1 ;
-(void)setFullState:(id)arg1 ;
-(id)channelCapabilities;
-(/*^block*/id)MIDIOutputEventBlock;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(BOOL)_setElementCount:(unsigned)arg1 count:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)_elementCountWritable:(unsigned)arg1 ;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(unsigned)_elementCount:(unsigned)arg1 ;
-(void)_rebuildBusses:(unsigned)arg1 ;
-(void)_addOrRemoveParameterListeners:(BOOL)arg1 ;
-(void)_invalidateParameterTree;
-(void)init2;
-(void)_createEventListenerQueue;
@end

