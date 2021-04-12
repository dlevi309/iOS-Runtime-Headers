/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioFormat, AUAudioUnitBusArray, VCAudioIOControllerClient;

@interface VCSpatialAudioUnit : AUAudioUnit {

	AVAudioFormat* _format;
	AUAudioUnitBusArray* _outputBusArray;
	AUAudioUnitBusArray* _inputBusArray;
	VCAudioIOControllerIOState* _ioState;
	VCAudioIOControllerClient* _client;
	opaqueVCAudioBufferListRef _renderBuffer;
	opaqueVCAudioBufferListRef _tempBuffer;
	double _currentTempBufferSampleTime;

}

@property (assign) opaqueVCAudioBufferListRef renderBuffer;                   //@synthesize renderBuffer=_renderBuffer - In the implementation block
@property (assign) opaqueVCAudioBufferListRef tempBuffer;                     //@synthesize tempBuffer=_tempBuffer - In the implementation block
@property (assign) VCAudioIOControllerIOState* ioState;                       //@synthesize ioState=_ioState - In the implementation block
@property (nonatomic,retain) VCAudioIOControllerClient * client;              //@synthesize client=_client - In the implementation block
+(void)registerAudioUnitDescription;
+(void)instantiate:(/*^block*/id)arg1 ;
-(VCAudioIOControllerClient *)client;
-(void)setClient:(VCAudioIOControllerClient *)arg1 ;
-(id)inputBusses;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(opaqueVCAudioBufferListRef)tempBuffer;
-(/*^block*/id)internalRenderBlock;
-(void)deallocateRenderResources;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(VCAudioIOControllerIOState*)ioState;
-(void)dealloc;
-(opaqueVCAudioBufferListRef)renderBuffer;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 client:(id)arg4 ;
-(void)setRenderBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setTempBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setIoState:(VCAudioIOControllerIOState*)arg1 ;
@end

