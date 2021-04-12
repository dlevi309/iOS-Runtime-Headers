/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWNodeOutputConsumer;
#import <Celestial/Celestial-Structs.h>
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
	SCD_Struct_BW2 _lastValidPTS;
	SCD_Struct_BW2 _lastEmittedPTS;
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
@property (nonatomic,readonly) BWPixelBufferPool * preparedPixelBufferPool; 
@property (nonatomic,readonly) BWDataBufferPool * preparedDataBufferPool; 
@property (assign,nonatomic) int passthroughMode; 
@property (assign,nonatomic) BOOL buffersOriginateUpstream; 
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
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(BWNodeConnection *)connection;
-(BWNode *)node;
-(BWFormat *)format;
-(unsigned)mediaType;
-(void)setFormat:(BWFormat *)arg1 ;
-(id<BWNodeOutputConsumer>)consumer;
-(void)setConsumer:(id<BWNodeOutputConsumer>)arg1 ;
-(long long)configurationID;
-(BWVideoFormat *)videoFormat;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setConfigurationID:(long long)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)makeConfiguredFormatLive;
-(void)markEndOfLiveOutput;
-(void)emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWNodeOutputMediaConfiguration *)primaryMediaConfiguration;
-(BWFormatRequirements *)formatRequirements;
-(void)setPassthroughMode:(int)arg1 ;
-(void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)setUnspecifiedAttachedMediaConfiguration:(BWNodeOutputMediaConfiguration *)arg1 ;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg1 ;
-(void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(void)emitNodeError:(id)arg1 ;
-(void)emitDroppedSample:(id)arg1 ;
-(BWPixelBufferPool *)livePixelBufferPool;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg1 ;
-(int)retainedBufferCount;
-(id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)arg1 inputIndex:(unsigned long long)arg2 ;
-(void)_setPrimaryProperties:(id)arg1 ;
-(void)_clearAllMediaProperties;
-(BWNodeOutputMediaProperties *)primaryMediaProperties;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormat *)liveFormat;
-(int)passthroughMode;
-(int)_passthroughModeForUnspecifiedAttachedMedia;
-(NSArray *)specifiedAttachedMediaKeys;
-(NSArray *)resolvedAttachedMediaKeys;
-(int)_passthroughModeForAttachedMediaKey:(id)arg1 ;
-(BOOL)mediaTypeIsVideo;
-(BOOL)mediaTypeIsPointCloud;
-(BWNodeOutputMediaConfiguration *)unspecifiedAttachedMediaConfiguration;
-(long long)liveConfigurationID;
-(unsigned)numberOfBuffersDropped;
-(void)emitIrisReferenceMovieRequestWithInfo:(id)arg1 ;
-(void)setOwningNodeRetainedBufferCount:(int)arg1 ;
-(void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)arg1 ;
-(void)setProvidesDataBufferPool:(BOOL)arg1 ;
-(BOOL)providesPixelBufferPool;
-(BOOL)providesDataBufferPool;
-(int)owningNodeRetainedBufferCount;
-(id)_poolName;
-(void)_prepareForConfiguredFormatToBecomeLiveForAttachedMediaKey:(id)arg1 ;
-(BWPixelBufferPool *)preparedPixelBufferPool;
-(BWDataBufferPool *)preparedDataBufferPool;
-(void)_makeConfiguredFormatLiveForAttachedMediaKey:(id)arg1 ;
-(void)_markEndOfLiveOutputForAttachedMediaKey:(id)arg1 ;
-(id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(void)prepareForConfiguredFormatToBecomeLive;
-(void)emitStillImagePrewarmMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 ;
-(void)addPoolPreallocationCompletionHandler:(/*^block*/id)arg1 ;
-(id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(float)maxSampleDataOutputRate;
-(void)setMaxSampleDataOutputRate:(float)arg1 ;
-(BOOL)dropsSampleBuffersWithUnexpectedPTS;
-(void)setDropsSampleBuffersWithUnexpectedPTS:(BOOL)arg1 ;
-(BOOL)discardsSampleData;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(BWMemoryPool *)memoryPool;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(unsigned)numberOfBuffersEmitted;
-(int)indexOfInputWhichDrivesThisOutput;
-(void)setNodePreparedPixelBufferPool:(id)arg1 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg1 ;
-(void)setNodePreparedDataBufferPool:(id)arg1 ;
-(void)setPreparedSharedDataBufferPool:(id)arg1 ;
-(BWDataBufferPool *)liveDataBufferPool;
-(void)setBuffersOriginateUpstream:(BOOL)arg1 ;
-(BOOL)buffersOriginateUpstream;
-(BWPointCloudFormat *)pointCloudFormat;
@end

