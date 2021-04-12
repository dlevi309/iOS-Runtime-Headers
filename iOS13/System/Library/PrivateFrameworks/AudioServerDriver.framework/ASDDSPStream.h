/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDStream.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class ASDAudioDevice, NSObject, NSString, NSUserDefaults, NSArray, ASDStreamDSPConfiguration, ASDDSPGraph;

@interface ASDDSPStream : ASDStream {

	ASDAudioDevice* _owningDevice;
	unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper> >* _streamHelper;
	list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper> >* _graphHelpers;
	unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> > >* _clientToGraphMap;
	NSObject*<OS_dispatch_queue> _dspQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	long long _DSPCaptureType;
	NSString* _DSPCaptureDirectory;
	long long _maximumFramesPerIOCycle;
	NSUserDefaults* _defaults;
	NSArray* _underlyingStreams;
	long long _graphAudioValidationMode;
	long long _ioReferenceCount;
	NSObject*<OS_dispatch_source> mHUPSource;
	BOOL _isRunning;
	BOOL _keepGraphInitialized;
	ASDStreamDSPConfiguration* _currentDSPConfiguration;

}

@property (nonatomic,retain) ASDStreamDSPConfiguration * currentDSPConfiguration;              //@synthesize currentDSPConfiguration=_currentDSPConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * underlyingStreams; 
@property (nonatomic,readonly) long long maximumFramesPerIOCycle; 
@property (assign,nonatomic) BOOL keepGraphInitialized;                                        //@synthesize keepGraphInitialized=_keepGraphInitialized - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                                                 //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) long long graphAudioValidationMode; 
@property (nonatomic,readonly) ASDDSPGraph * hardwareDSP; 
-(void)dealloc;
-(BOOL)isRunning;
-(void)stopStream;
-(void)startStream;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)driverClassName;
-(/*^block*/id)readInputBlock;
-(/*^block*/id)writeMixBlock;
-(ASDDSPGraph *)hardwareDSP;
-(long long)getDSPCaptureTypeFromDefault;
-(void)enableDSPCaptureByType:(long long)arg1 withGraph:(id)arg2 ;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(void)_updateMaximumFramesPerIOCycle;
-(id)getASDAudioDefaultsPath;
-(id)getDSPCaptureDirectory;
-(void)enableDSPCaptureInAction;
-(id)_hardwareDSP;
-(BOOL)_allocateStreamingResources;
-(void)_deallocateStreamingResources;
-(long long)maximumFramesPerIOCycle;
-(void)_allocateStreamingResourcesForGraphHelper:(ASDDSPGraphHelper*)arg1 ;
-(BOOL)keepGraphInitialized;
-(long long)getAudioDebugTypeWithDict:(id)arg1 ;
-(BOOL)enableBasicDSPCaptureOnGraph:(id)arg1 withLevel:(id)arg2 andDebugType:(long long)arg3 ;
-(BOOL)graphStructureIsValid:(id)arg1 clientID:(unsigned long long)arg2 ;
-(void)_updateLatency;
-(void)_suspendProcessing;
-(void)_resumeProcessing;
-(BOOL)addClientDSP:(id)arg1 withKey:(unsigned long long)arg2 ;
-(BOOL)removeClientDSPwithKey:(unsigned long long)arg1 ;
-(ASDStreamDSPConfiguration *)currentDSPConfiguration;
-(id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned)arg3 plugin:(id)arg4 ;
-(void)setUnderlyingStreams:(NSArray *)arg1 ;
-(NSArray *)underlyingStreams;
-(void)setGraphAudioValidationMode:(long long)arg1 ;
-(long long)graphAudioValidationMode;
-(BOOL)changePhysicalFormat:(id)arg1 ;
-(void)suspendProcessing;
-(void)resumeProcessing;
-(void)updateLatency;
-(BOOL)addHardwareDSP:(id)arg1 ;
-(BOOL)removeHardwareDSP;
-(BOOL)addClientDSP:(id)arg1 forClient:(unsigned)arg2 ;
-(BOOL)removeClientDSPForClient:(unsigned)arg1 ;
-(id)clientDSPForClient:(unsigned)arg1 ;
-(/*^block*/id)processOutputBlock;
-(void)setCurrentDSPConfiguration:(ASDStreamDSPConfiguration *)arg1 ;
-(void)setKeepGraphInitialized:(BOOL)arg1 ;
@end
