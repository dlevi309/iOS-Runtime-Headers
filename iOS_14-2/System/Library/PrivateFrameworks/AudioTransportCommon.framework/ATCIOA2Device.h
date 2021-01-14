/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioTransportCommon.framework/AudioTransportCommon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AudioTransportCommon/AudioTransportCommon-Structs.h>
@class NSObject, IOKService, IOKConnection, IOKNotificationPort, NSString, NSArray;

@interface ATCIOA2Device : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IOKService* _service;
	IOKConnection* _connection;
	IOKNotificationPort* _notificationPort;
	NSObject*<OS_dispatch_source> _notificationSource;
	IOAudio2EngineStatus* _engineStatus;
	NSString* _name;
	NSString* _uid;
	NSArray* _availableSampleRates;
	NSArray* _inputStreams;
	NSArray* _outputStreams;

}

@property (nonatomic,copy) NSArray * inputStreams;                       //@synthesize inputStreams=_inputStreams - In the implementation block
@property (nonatomic,copy) NSArray * outputStreams;                      //@synthesize outputStreams=_outputStreams - In the implementation block
@property (nonatomic,copy) NSArray * availableSampleRates;               //@synthesize availableSampleRates=_availableSampleRates - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uid;                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) unsigned clockDomain; 
@property (nonatomic,readonly) unsigned inputSafetyOffset; 
@property (nonatomic,readonly) unsigned inputLatency; 
@property (nonatomic,readonly) unsigned outputSafetyOffset; 
@property (nonatomic,readonly) unsigned outputLatency; 
@property (nonatomic,readonly) unsigned ioBufferSize; 
+(id)iokitMatchingDictionary;
-(NSString *)uid;
-(void)handleNotification:(IOAudio2Notification*)arg1 ;
-(id)initWithService:(id)arg1 ;
-(NSString *)name;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(NSArray *)inputStreams;
-(double)sampleRate;
-(void)dealloc;
-(unsigned)clockDomain;
-(NSArray *)outputStreams;
-(id)_buildInputStreams;
-(id)_buildOutputStreams;
-(void)setInputStreams:(NSArray *)arg1 ;
-(void)setOutputStreams:(NSArray *)arg1 ;
-(void)setAvailableSampleRates:(NSArray *)arg1 ;
-(BOOL)performConfiigChangeForNotification:(IOAudio2Notification*)arg1 error:(id*)arg2 ;
-(BOOL)changeToSampleRate:(double)arg1 error:(id*)arg2 ;
-(unsigned)ioBufferSize;
-(BOOL)startIOError:(id*)arg1 ;
-(BOOL)stopIOError:(id*)arg1 ;
-(NSArray *)availableSampleRates;
@end

