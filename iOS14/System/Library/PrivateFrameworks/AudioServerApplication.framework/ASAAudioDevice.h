/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAObject.h>

@class NSDictionary, NSString, NSArray, NSURL;

@interface ASAAudioDevice : ASAObject

@property (nonatomic,copy,readonly) NSDictionary * headsetInfo; 
@property (nonatomic,copy) NSDictionary * clientDescription; 
@property (nonatomic,copy,readonly) NSDictionary * deviceDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * deviceUID; 
@property (nonatomic,copy,readonly) NSString * modelUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) unsigned clockDomain; 
@property (getter=isAlive,nonatomic,readonly) BOOL alive; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) BOOL canBeDefaultDevice; 
@property (nonatomic,readonly) BOOL canBeDefaultInputDevice; 
@property (nonatomic,readonly) BOOL canBeDefaultOutputDevice; 
@property (nonatomic,readonly) BOOL canBeDefaultSystemDevice; 
@property (assign,nonatomic) double nominalSampleRate; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned inputLatency; 
@property (nonatomic,readonly) unsigned outputLatency; 
@property (nonatomic,readonly) unsigned inputSafetyOffset; 
@property (nonatomic,readonly) unsigned outputSafetyOffset; 
@property (nonatomic,readonly) unsigned zeroTimestampPeriod; 
@property (assign,nonatomic) unsigned ioBufferFrameSize; 
@property (nonatomic,readonly) unsigned minimumIOBufferFrameSize; 
@property (nonatomic,readonly) unsigned maximumIOBufferFrameSize; 
@property (assign,nonatomic) float ioCycleUsage; 
@property (nonatomic,readonly) double actualSampleRate; 
@property (nonatomic,copy,readonly) NSArray * relatedDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * nominalSampleRates; 
@property (nonatomic,copy,readonly) NSArray * inputStreamObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * outputStreamObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * inputStreams; 
@property (nonatomic,copy,readonly) NSArray * outputStreams; 
@property (nonatomic,copy,readonly) NSArray * controls; 
@property (nonatomic,copy,readonly) NSURL * iconURL; 
@property (nonatomic,readonly) BOOL hasInput; 
@property (nonatomic,readonly) BOOL hasOutput; 
@property (getter=isAggregate,nonatomic,readonly) BOOL aggregate; 
@property (nonatomic,copy) NSString * clockDeviceUID; 
@property (nonatomic,copy,readonly) NSDictionary * aggregateDescription; 
-(NSString *)deviceUID;
-(NSString *)manufacturer;
-(BOOL)isHidden;
-(NSArray *)controls;
-(NSDictionary *)deviceDescription;
-(unsigned)transportType;
-(NSString *)name;
-(NSDictionary *)clientDescription;
-(void)setClientDescription:(NSDictionary *)arg1 ;
-(BOOL)isAlive;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(BOOL)isRunning;
-(NSArray *)inputStreams;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(BOOL)hasInput;
-(BOOL)createAudioProcID:(/*function pointer*/void**)arg1 forIOProc:(/*function pointer*/void*)arg2 withClientData:(void*)arg3 error:(id*)arg4 ;
-(BOOL)startAudioProc:(/*function pointer*/void*)arg1 error:(id*)arg2 ;
-(BOOL)destroyAudioProcID:(/*function pointer*/void*)arg1 error:(id*)arg2 ;
-(BOOL)stopAudioProc:(/*function pointer*/void*)arg1 error:(id*)arg2 ;
-(NSArray *)inputStreamObjectIDs;
-(NSArray *)outputStreamObjectIDs;
-(unsigned)ioBufferFrameSize;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(BOOL)isAggregate;
-(NSString *)modelUID;
-(unsigned)clockDomain;
-(BOOL)canBeDefaultDevice;
-(BOOL)canBeDefaultInputDevice;
-(BOOL)canBeDefaultOutputDevice;
-(BOOL)canBeDefaultSystemDevice;
-(double)nominalSampleRate;
-(NSArray *)nominalSampleRates;
-(unsigned)zeroTimestampPeriod;
-(unsigned)minimumIOBufferFrameSize;
-(unsigned)maximumIOBufferFrameSize;
-(float)ioCycleUsage;
-(double)actualSampleRate;
-(NSString *)clockDeviceUID;
-(NSArray *)relatedDeviceObjectIDs;
-(void)setNominalSampleRate:(double)arg1 ;
-(void)setIoBufferFrameSize:(unsigned)arg1 ;
-(void)setIoCycleUsage:(float)arg1 ;
-(NSArray *)outputStreams;
-(BOOL)hasOutput;
-(void)setClockDeviceUID:(NSString *)arg1 ;
-(NSDictionary *)aggregateDescription;
-(NSDictionary *)headsetInfo;
-(id)inputStreamUsageForAudioProc:(/*function pointer*/void*)arg1 ;
-(BOOL)setInputStreamUsage:(id)arg1 forAudioProc:(/*function pointer*/void*)arg2 ;
-(id)outputStreamUsageForAudioProc:(/*function pointer*/void*)arg1 ;
-(BOOL)setOutputStreamUsage:(id)arg1 forAudioProc:(/*function pointer*/void*)arg2 ;
@end

