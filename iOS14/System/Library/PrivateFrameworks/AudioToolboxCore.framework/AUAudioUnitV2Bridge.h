/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	atomic<bool> _willSetFullState;
	atomic<unsigned int> _eventsTriggeringParameterTreeInvalidation;
	NSObject*<OS_dispatch_queue> _parameterTreeRebuildQueue;
	OpaqueAudioComponentInstanceRef _audioUnit;
	BOOL _audioUnitIsOwned;
	AUV2BridgeBusArray* _inputBusses;
	AUV2BridgeBusArray* _outputBusses;
	AUParameterTree* _cachedParameterTree;
	unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer> >* _renderer;
	/*^block*/id _MIDIOutputEventBlock;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)init2;
-(id)parameterTree;
-(id)inputBusses;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)invalidateAudioUnit;
-(void)setMIDIOutputEventBlock:(/*^block*/id)arg1 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)setMusicalContextBlock:(/*^block*/id)arg1 ;
-(void)setTransportStateBlock:(/*^block*/id)arg1 ;
-(void)internalDeallocateRenderResources;
-(/*^block*/id)internalRenderBlock;
-(void)setFullState:(id)arg1 ;
-(void)setFullStateForDocument:(id)arg1 ;
-(void)deliverV2Parameters:(const AURenderEvent*)arg1 ;
-(id)channelCapabilities;
-(void)_setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)_valueForProperty:(id)arg1 error:(id*)arg2 ;
-(id)osWorkgroup;
-(/*^block*/id)MIDIOutputEventBlock;
-(void)setCurrentPreset:(id)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)_elementCountWritable:(unsigned)arg1 ;
-(BOOL)_setElementCount:(unsigned)arg1 count:(unsigned)arg2 error:(id*)arg3 ;
-(unsigned)_elementCount:(unsigned)arg1 ;
-(void)_rebuildBusses:(unsigned)arg1 ;
-(void)_notifyParameterChange:(unsigned long long)arg1 ;
-(id)_buildNewParameterTree;
-(void)_invalidateParameterTree:(unsigned)arg1 ;
-(void)_createEventListenerQueue;
-(id)_createParameterTree;
-(void)reset;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)dealloc;
@end

