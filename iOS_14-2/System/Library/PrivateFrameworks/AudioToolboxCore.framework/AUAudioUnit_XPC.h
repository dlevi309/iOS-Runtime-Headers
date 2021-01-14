/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class NSXPCConnection, AUAudioUnitBusArray_XPC, AUParameterTree, NSArray;

@interface AUAudioUnit_XPC : AUAudioUnit {

	recursive_mutex _propListenerMutex;
	OpaqueAudioComponentInstanceRef _componentInstance;
	NSXPCConnection* _xpcConnection;
	int _remotePID;
	mach_timebase_info _remoteMachTimebaseInfo;
	BOOL _canRender;
	BOOL _canProcess;
	BOOL _removingObserverWithContext;
	mutex _parameterTreeMutex;
	AUAudioUnitBusArray_XPC* _inputBusses;
	AUAudioUnitBusArray_XPC* _outputBusses;
	unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData> >* _elementCountListenerToken;
	vector<AUAudioUnit_XPC_PropListener, std::__1::allocator<AUAudioUnit_XPC_PropListener> >* _propListeners;
	shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::__1::recursive_mutex, caulk::empty_atomic_interface<auoop::RenderPipePool> > >* _renderPipePool;
	optional<auoop::RenderPipeUser>* _renderPipeUser;
	AUParameterTree* _cachedParameterTree;
	NSArray* _userPresets;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)parameterTree;
-(id)inputBusses;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)_getBus:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)didCrash;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 error:(id*)arg3 ;
-(id)_getValueForProperty:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)_setComponentInstance:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)_doOpen:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_parameterTreeChanged;
-(void)setMusicalContextBlock:(/*^block*/id)arg1 ;
-(void)setTransportStateBlock:(/*^block*/id)arg1 ;
-(void)internalDeallocateRenderResources;
-(/*^block*/id)internalRenderBlock;
-(void)_refreshBusses:(unsigned)arg1 ;
-(float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned)arg2 ;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(id)supportedViewConfigurations:(id)arg1 ;
-(void)setFullState:(id)arg1 ;
-(void)selectViewConfiguration:(id)arg1 ;
-(BOOL)providesUserInterface;
-(id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 ;
-(BOOL)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(void)invalidateAllParameters;
-(void)_setState:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setFullStateForDocument:(id)arg1 ;
-(BOOL)saveUserPreset:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteUserPreset:(id)arg1 error:(id*)arg2 ;
-(id)presetStateFor:(id)arg1 error:(id*)arg2 ;
-(id)userPresets;
-(BOOL)isLoadedInProcess;
-(id)_getValueForKey:(id)arg1 ;
-(int)remoteProcessIdentifier;
-(void)setCurrentPreset:(id)arg1 ;
-(void)reset;
-(id)speechVoices;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)synthesizeSpeechRequest:(id)arg1 ;
-(void)cancelSpeechRequest;
-(void)dealloc;
@end

