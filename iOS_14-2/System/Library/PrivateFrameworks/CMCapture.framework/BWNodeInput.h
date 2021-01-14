/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString, BWNode, BWNodeConnection, BWNodeInputMediaConfiguration, NSMutableDictionary, BWNodeInputMediaProperties, BWFormatRequirements, BWFormat, BWVideoFormat, NSArray;

@interface BWNodeInput : NSObject {

	NSString* _name;
	BOOL _mediaTypeIsVideo;
	BOOL _mediaTypeIsPointCloud;
	long long _configurationID;
	unsigned _mediaType;
	unsigned long long _index;
	BOOL _enabled;
	BOOL _discardsSampleDataTaggedToBeDropped;
	BWNode* _node;
	BWNodeConnection* _connection;
	long long _liveConfigurationID;
	unsigned _numberOfBuffersReceived;
	unsigned _numberOfBuffersDropped;
	BWNodeInputMediaConfiguration* _primaryMediaConfiguration;
	BWNodeInputMediaConfiguration* _unspecifiedAttachedMediaConfiguration;
	NSMutableDictionary* _attachedMediaConfigurations;
	BWNodeInputMediaProperties* _primaryMediaProperties;
	NSMutableDictionary* _attachedMediaProperties;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements; 
@property (nonatomic,retain) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat; 
@property (assign,nonatomic) int passthroughMode; 
@property (assign,nonatomic) BOOL conversionToPassthroughModeNeverAllowed; 
@property (assign,nonatomic) int retainedBufferCount; 
@property (assign,nonatomic) int delayedBufferCount; 
@property (assign,nonatomic) int indefinitelyHeldBufferCount; 
@property (nonatomic,readonly) BOOL mediaTypeIsVideo;                                                            //@synthesize mediaTypeIsVideo=_mediaTypeIsVideo - In the implementation block
@property (nonatomic,readonly) BOOL mediaTypeIsPointCloud;                                                       //@synthesize mediaTypeIsPointCloud=_mediaTypeIsPointCloud - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                                                         //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL discardsSampleDataTaggedToBeDropped;                                           //@synthesize discardsSampleDataTaggedToBeDropped=_discardsSampleDataTaggedToBeDropped - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                                                    //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) BWNodeConnection * connection;                                                      //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long configurationID;                                                          //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) BWNodeInputMediaConfiguration * primaryMediaConfiguration;                        //@synthesize primaryMediaConfiguration=_primaryMediaConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * specifiedAttachedMediaKeys; 
@property (nonatomic,retain) BWNodeInputMediaConfiguration * unspecifiedAttachedMediaConfiguration;              //@synthesize unspecifiedAttachedMediaConfiguration=_unspecifiedAttachedMediaConfiguration - In the implementation block
@property (nonatomic,readonly) BWNodeInputMediaProperties * primaryMediaProperties;                              //@synthesize primaryMediaProperties=_primaryMediaProperties - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedAttachedMediaKeys; 
@property (nonatomic,readonly) long long liveConfigurationID;                                                    //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersReceived;                                                 //@synthesize numberOfBuffersReceived=_numberOfBuffersReceived - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                                                  //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
+(void)initialize;
+(opaqueCMSampleBufferRef)newSampleDataToBeDroppedMarkerBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setUnspecifiedAttachedMediaConfiguration:(BWNodeInputMediaConfiguration *)arg1 ;
-(void)setFormat:(BWFormat *)arg1 ;
-(unsigned long long)index;
-(NSArray *)resolvedAttachedMediaKeys;
-(BOOL)mediaTypeIsVideo;
-(unsigned)numberOfBuffersDropped;
-(int)indefinitelyHeldBufferCount;
-(BWFormat *)format;
-(void)handleMessage:(id)arg1 ;
-(BOOL)mediaTypeIsPointCloud;
-(BWNodeInputMediaProperties *)primaryMediaProperties;
-(BWNodeInputMediaConfiguration *)unspecifiedAttachedMediaConfiguration;
-(void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg1 ;
-(int)_passthroughModeForUnspecifiedAttachedMedia;
-(unsigned)mediaType;
-(BWNodeInputMediaConfiguration *)primaryMediaConfiguration;
-(NSArray *)specifiedAttachedMediaKeys;
-(long long)liveConfigurationID;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg1 ;
-(void)_clearAllMediaProperties;
-(BWNode *)node;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWFormat *)liveFormat;
-(void)_handleConfigurationLiveMessage:(id)arg1 ;
-(int)_passthroughModeForAttachedMediaKey:(id)arg1 ;
-(int)delayedBufferCount;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(BWVideoFormat *)videoFormat;
-(void)_setPrimaryProperties:(id)arg1 ;
-(long long)configurationID;
-(void)setConfigurationID:(long long)arg1 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(int)retainedBufferCount;
-(int)passthroughMode;
-(NSString *)name;
-(void)setPassthroughMode:(int)arg1 ;
-(BOOL)discardsSampleDataTaggedToBeDropped;
-(id)description;
-(BWFormatRequirements *)formatRequirements;
-(void)setDiscardsSampleDataTaggedToBeDropped:(BOOL)arg1 ;
-(void)setConversionToPassthroughModeNeverAllowed:(BOOL)arg1 ;
-(unsigned)numberOfBuffersReceived;
-(BWNodeConnection *)connection;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(BOOL)conversionToPassthroughModeNeverAllowed;
-(void)invalidate;
-(void)setDelayedBufferCount:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setConnection:(BWNodeConnection *)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 index:(unsigned long long)arg3 ;
-(void)dealloc;
@end

