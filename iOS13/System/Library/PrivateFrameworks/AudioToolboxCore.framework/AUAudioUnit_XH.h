/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class NSExtension, NSUUID, AUAudioUnitBusArray_XH, AUParameterTree, NSObject, NSArray, NSXPCConnection;

@interface AUAudioUnit_XH : AUAudioUnit {

	NSExtension* _extension;
	OpaqueAudioComponentInstanceRef _componentInstance;
	NSUUID* _requestIdentifier;
	int _remotePID;
	BOOL _canRender;
	BOOL _canProcess;
	BOOL _removingObserverWithContext;
	BOOL _installedParamTreeObserver;
	AUAudioUnitBusArray_XH* _inputBusses;
	AUAudioUnitBusArray_XH* _outputBusses;
	unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData> >* _elementCountListenerToken;
	recursive_mutex _propListenerMutex;
	vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener> >* _propListeners;
	IPCAURenderingClient* _renderClient;
	AUParameterTree* _cachedParameterTree;
	NSObject*<OS_dispatch_queue> _viewControllerRequestQueue;
	NSArray* _userPresets;
	AUAudioUnit_XH* _strongInstance;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) AUAudioUnit_XH * strongInstance;                     //@synthesize strongInstance=_strongInstance - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)instantiateWithExtension:(id)arg1 componentDescription:(AudioComponentDescription)arg2 instance:(OpaqueAudioComponentInstanceRef)arg3 options:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)reset;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)_getValueForKey:(id)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)deallocateRenderResources;
-(id)parameterTree;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)propertiesChanged:(id)arg1 ;
-(id)_getBus:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)presetStateFor:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteUserPreset:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveUserPreset:(id)arg1 error:(id*)arg2 ;
-(id)userPresets;
-(BOOL)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 ;
-(void)selectViewConfiguration:(id)arg1 ;
-(id)supportedViewConfigurations:(id)arg1 ;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)_getValueForProperty:(id)arg1 ;
-(BOOL)providesUserInterface;
-(void)setCurrentPreset:(id)arg1 ;
-(void)setFullStateForDocument:(id)arg1 ;
-(void)setFullState:(id)arg1 ;
-(BOOL)_setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)addParameterTreeObserver;
-(void)removeParameterTreeObserver;
-(void)doOpen:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didCrash;
-(void)internalInitWithExtension:(id)arg1 componentDescription:(AudioComponentDescription)arg2 instance:(OpaqueAudioComponentInstanceRef)arg3 completion:(/*^block*/id)arg4 ;
-(void)_refreshBusses:(unsigned)arg1 ;
-(void)invalidateAllParameters;
-(AUAudioUnit_XH *)strongInstance;
-(void)setStrongInstance:(AUAudioUnit_XH *)arg1 ;
@end

