/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnitV2Bridge.h>

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {

	/*^block*/id _outputProvider;
	/*^block*/id _inputHandler;
	BOOL _inputWasEnabled;
	BOOL _outputWasEnabled;
	BOOL _inputBusEnabled;
	int _renderObserverToken;
	unordered_map<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)> > >* _renderObservers;

}

@property (assign,getter=isInputEnabled,nonatomic) BOOL inputEnabled; 
@property (assign,getter=isOutputEnabled,nonatomic) BOOL outputEnabled; 
-(BOOL)isOutputEnabled;
-(BOOL)isInputEnabled;
-(BOOL)canPerformInput;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(BOOL)startHardwareAndReturnError:(id*)arg1 ;
-(void)initAUHALOutputUnit;
-(void)setInputHandler:(/*^block*/id)arg1 ;
-(void)setOutputProvider:(/*^block*/id)arg1 ;
-(void)setOutputEnabled:(BOOL)arg1 ;
-(void)removeRenderObserver:(long long)arg1 ;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(/*^block*/id)_inputHandler;
-(BOOL)isRunning;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)stopHardware;
-(void)setInputEnabled:(BOOL)arg1 ;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(/*^block*/id)outputProvider;
-(BOOL)canPerformOutput;
-(void)dealloc;
@end

