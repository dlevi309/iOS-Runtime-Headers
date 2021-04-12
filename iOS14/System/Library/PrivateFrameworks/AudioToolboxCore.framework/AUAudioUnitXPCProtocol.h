/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>
@required
-(void)reset:(/*^block*/id)arg1;
-(void)open:(/*^block*/id)arg1;
-(void)getBusses:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)initialize:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)updateHostCallbacks:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)createRenderPipe:(int)arg1 formats:(id)arg2 maxFrames:(unsigned)arg3 midiOutSizeHint:(unsigned)arg4 resources:(id)arg5 reply:(/*^block*/id)arg6;
-(void)destroyRenderPipe:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)updateWorkgroupMirror:(id)arg1 reply:(/*^block*/id)arg2;
-(void)uninitialize:(/*^block*/id)arg1;
-(void)setBusFormat:(unsigned)arg1 scope:(unsigned)arg2 format:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)valueForProperty:(id)arg1 propagateError:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)setValue:(id)arg1 forProperty:(id)arg2 propagateError:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)valueForKey:(id)arg1 reply:(/*^block*/id)arg2;
-(void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)setValue:(id)arg1 forKey:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getParameterTree:(/*^block*/id)arg1;
-(void)getParameter:(unsigned long long)arg1 sequenceNumber:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)selectViewConfiguration:(id)arg1 reply:(/*^block*/id)arg2;
-(void)parameterStringFromValue:(float)arg1 currentValue:(BOOL)arg2 address:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)parametersForOverviewWithCount:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)supportedViewConfigurations:(id)arg1 reply:(/*^block*/id)arg2;
-(void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(/*^block*/id)arg3;
-(void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(/*^block*/id)arg4;
-(void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(/*^block*/id)arg4;
-(void)loadUserPresets:(/*^block*/id)arg1;
-(void)getSpeechVoices:(/*^block*/id)arg1;
-(void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(/*^block*/id)arg3;
-(void)deleteUserPreset:(id)arg1 reply:(/*^block*/id)arg2;
-(void)presetStateFor:(id)arg1 reply:(/*^block*/id)arg2;
-(void)synthesizeSpeechRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cancelSpeechRequest:(/*^block*/id)arg1;
-(void)close:(/*^block*/id)arg1;

@end

