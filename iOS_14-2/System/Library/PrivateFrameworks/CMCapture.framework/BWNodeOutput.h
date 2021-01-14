/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNodeOutputConsumer;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, BWNode, NSMutableArray, BWNodeOutputMediaConfiguration, NSMutableDictionary, BWNodeOutputMediaProperties, BWMemoryPool, BWFormatRequirements, BWPixelBufferPool, BWDataBufferPool, BWFormat, BWVideoFormat, BWPointCloudFormat, BWNodeConnection, NSArray;

@interface BWNodeOutput : NSObject {

	NSString* _name;
	id<BWNodeOutputConsumer> _consumer;
	BOOL _consumerIsANodeConnection;
	BOOL _mediaTypeIsVideo;
	BOOL _mediaTypeIsPointCloud;
	unsigned _mediaType;
	long long _configurationID;
	BWNode* _node;
	float _maxSampleDataOutputRate;
	BOOL _dropsSampleBuffersWithUnexpectedPTS;
	long long _liveConfigurationID;
	BOOL _discardsSampleData;
	unsigned _numberOfBuffersEmitted;
	unsigned _numberOfBuffersDropped;
	SCD_Struct_BW8 _lastValidPTS;
	SCD_Struct_BW8 _lastEmittedPTS;
	OpaqueFigSimpleMutexRef _poolPreallocationMutex;
	NSMutableArray* _poolPreallocationCompletionHandlers;
	BOOL _poolPreallocationDone;
	BOOL _receivedEOD;
	BWNodeOutputMediaConfiguration* _primaryMediaConfiguration;
	BWNodeOutputMediaConfiguration* _unspecifiedAttachedMediaConfiguration;
	NSMutableDictionary* _attachedMediaConfigurations;
	BWNodeOutputMediaProperties* _primaryMediaProperties;
	NSMutableDictionary* _attachedMediaProperties;
	BWMemoryPool* _memoryPool;

}

@property (nonatomic,copy) BWFormatRequirements * formatRequirements; 
@property (assign,nonatomic) BOOL providesPixelBufferPool; 
@property (assign,nonatomic) BOOL providesDataBufferPool; 
@property (assign,nonatomic) BOOL pixelBufferPoolProvidesBackPressure; 
@property (nonatomic,readonly) BWPixelBufferPool * preparedPixelBufferPool; 
@property (nonatomic,readonly) BWDataBufferPool * preparedDataBufferPool; 
@property (assign,nonatomic) int passthroughMode; 
@property (assign,nonatomic) int indexOfInputWhichDrivesThisOutput; 
@property (assign,nonatomic) int retainedBufferCount; 
@property (assign,nonatomic) int owningNodeRetainedBufferCount; 
@property (nonatomic,copy) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (nonatomic,readonly) BWPointCloudFormat * pointCloudFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat; 
@property (nonatomic,readonly) BWPixelBufferPool * livePixelBufferPool; 
@property (nonatomic,readonly) BWDataBufferPool * liveDataBufferPool; 
@property (nonatomic,readonly) BOOL mediaTypeIsVideo;                                                             //@synthesize mediaTypeIsVideo=_mediaTypeIsVideo - In the implementation block
@property (nonatomic,readonly) BOOL mediaTypeIsPointCloud;                                                        //@synthesize mediaTypeIsPointCloud=_mediaTypeIsPointCloud - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                                                //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                                                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) id<BWNodeOutputConsumer> consumer; 
@property (nonatomic,readonly) BWNodeConnection * connection; 
@property (assign,nonatomic) long long configurationID;                                                           //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) BWNodeOutputMediaConfiguration * primaryMediaConfiguration;                        //@synthesize primaryMediaConfiguration=_primaryMediaConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * specifiedAttachedMediaKeys; 
@property (nonatomic,retain) BWNodeOutputMediaConfiguration * unspecifiedAttachedMediaConfiguration;              //@synthesize unspecifiedAttachedMediaConfiguration=_unspecifiedAttachedMediaConfiguration - In the implementation block
@property (nonatomic,readonly) BWNodeOutputMediaProperties * primaryMediaProperties;                              //@synthesize primaryMediaProperties=_primaryMediaProperties - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedAttachedMediaKeys; 
@property (assign,nonatomic) float maxSampleDataOutputRate;                                                       //@synthesize maxSampleDataOutputRate=_maxSampleDataOutputRate - In the implementation block
@property (assign,nonatomic) BOOL dropsSampleBuffersWithUnexpectedPTS;                                            //@synthesize dropsSampleBuffersWithUnexpectedPTS=_dropsSampleBuffersWithUnexpectedPTS - In the implementation block
@property (nonatomic,readonly) long long liveConfigurationID;                                                     //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (assign,nonatomic) BOOL discardsSampleData;                                                             //@synthesize discardsSampleData=_discardsSampleData - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersEmitted;                                                   //@synthesize numberOfBuffersEmitted=_numberOfBuffersEmitted - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                                                   //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
@property (nonatomic,retain) BWMemoryPool * memoryPool;                                                           //@synthesize memoryPool=_memoryPool - In the implementation block
+(void)initialize;
-(void)setUnspecifiedAttachedMediaConfiguration:(BWNodeOutputMediaConfiguration *)arg1 ;
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(BWMemoryPool *)memoryPool;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(void)setFormat:(BWFormat *)arg1 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg1 ;
-(BWPixelBufferPool *)livePixelBufferPool;
-(NSArray *)resolvedAttachedMediaKeys;
-(int)indexOfInputWhichDrivesThisOutput;
-(BOOL)mediaTypeIsVideo;
-(BWPointCloudFormat *)pointCloudFormat;
-(void)_markEndOfLiveOutputForAttachedMediaKey:(id)arg1 ;
-(unsigned)numberOfBuffersDropped;
-(BWFormat *)format;
-(BOOL)providesDataBufferPool;
-(BOOL)providesPixelBufferPool;
-(void)setPixelBufferPoolProvidesBackPressure:(BOOL)arg1 ;
-(BOOL)mediaTypeIsPointCloud;
-(BOOL)pixelBufferPoolProvidesBackPressure;
-(BWNodeOutputMediaProperties *)primaryMediaProperties;
-(BWNodeOutputMediaConfiguration *)unspecifiedAttachedMediaConfiguration;
-(void)setDropsSampleBuffersWithUnexpectedPTS:(BOOL)arg1 ;
-(void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)emitStillImagePrewarmMessageWithSettings:(id)arg1 ;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg1 ;
-(int)_passthroughModeForUnspecifiedAttachedMedia;
-(unsigned)mediaType;
-(BWNodeOutputMediaConfiguration *)primaryMediaConfiguration;
-(NSArray *)specifiedAttachedMediaKeys;
-(long long)liveConfigurationID;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg1 ;
-(void)_clearAllMediaProperties;
-(BWNode *)node;
-(int)owningNodeRetainedBufferCount;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWFormat *)liveFormat;
-(int)_passthroughModeForAttachedMediaKey:(id)arg1 ;
-(void)makeConfiguredFormatLive;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(BWVideoFormat *)videoFormat;
-(void)_setPrimaryProperties:(id)arg1 ;
-(long long)configurationID;
-(void)setConfigurationID:(long long)arg1 ;
-(id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(void)_prepareForConfiguredFormatToBecomeLiveForAttachedMediaKey:(id)arg1 ;
-(void)markEndOfLiveOutput;
-(void)setRetainedBufferCount:(int)arg1 ;
-(int)retainedBufferCount;
-(int)passthroughMode;
-(void)setNodePreparedPixelBufferPool:(id)arg1 ;
-(NSString *)name;
-(void)setPassthroughMode:(int)arg1 ;
-(BOOL)dropsSampleBuffersWithUnexpectedPTS;
-(void)setPreparedSharedDataBufferPool:(id)arg1 ;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(id)description;
-(BWFormatRequirements *)formatRequirements;
-(BWPixelBufferPool *)preparedPixelBufferPool;
-(BWNodeConnection *)connection;
-(void)emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_makeConfiguredFormatLiveForAttachedMediaKey:(id)arg1 ;
-(void)prepareForConfiguredFormatToBecomeLive;
-(BWDataBufferPool *)preparedDataBufferPool;
-(id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)arg1 inputIndex:(unsigned long long)arg2 ;
-(void)addPoolPreallocationCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)emitDroppedSample:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_poolName;
-(id<BWNodeOutputConsumer>)consumer;
-(void)setMaxSampleDataOutputRate:(float)arg1 ;
-(void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)arg1 ;
-(void)setOwningNodeRetainedBufferCount:(int)arg1 ;
-(id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(BOOL)discardsSampleData;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(float)maxSampleDataOutputRate;
-(void)setConsumer:(id<BWNodeOutputConsumer>)arg1 ;
-(void)setProvidesDataBufferPool:(BOOL)arg1 ;
-(void)emitNodeError:(id)arg1 ;
-(void)setNodePreparedDataBufferPool:(id)arg1 ;
-(unsigned)numberOfBuffersEmitted;
-(void)dealloc;
-(BWDataBufferPool *)liveDataBufferPool;
@end
