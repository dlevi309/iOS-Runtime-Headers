/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class AUAudioUnitBus, AUAudioUnitBusArray, NSMutableData, NSObject, AUPasscodeCodecConfiguration, APCListenerResultData;

@interface AUPasscodeDecoder : AUAudioUnit {

	unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> >* _rtMessenger;
	unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> >* _kernel;
	BufferedInputBus* _inputBus;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBusArray* _outputBusArray;
	vector<unsigned char, std::__1::allocator<unsigned char> > _rxDataBuffer;
	vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage> >* _messagePool;
	map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > >* _apcDecoderConfig;
	unsigned _desiredChannelCount;
	unsigned _actualChannelCount;
	NSMutableData* _incomingPayload;
	BOOL _deliverDataSerially;
	unique_ptr<AudioCapturerIfc, std::__1::default_delete<AudioCapturerIfc> >* _inputCapturer;
	mutex _ctMutex;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _dataHandler;
	AUPasscodeCodecConfiguration* _codecConfig;
	APCListenerResultData* _resultData;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id dataHandler;                                            //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,retain) AUPasscodeCodecConfiguration * codecConfig;              //@synthesize codecConfig=_codecConfig - In the implementation block
@property (nonatomic,retain) APCListenerResultData * resultData;                      //@synthesize resultData=_resultData - In the implementation block
+(void)registerAU;
+(AudioComponentDescription)getAUDesc;
+(id)supportedDecoders;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)deallocateRenderResources;
-(void)setRenderingOffline:(BOOL)arg1 ;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(APCListenerResultData *)resultData;
-(void)setResultData:(APCListenerResultData *)arg1 ;
-(void)setCodecConfig:(AUPasscodeCodecConfiguration *)arg1 ;
-(AUPasscodeCodecConfiguration *)codecConfig;
-(void)startAudioLogCapture;
-(void)stopAudioLogCapture;
-(void)handleDecodedData:(void*)arg1 ofLength:(int)arg2 ;
@end

