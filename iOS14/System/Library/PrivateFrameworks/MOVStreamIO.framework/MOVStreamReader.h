/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/MOVStreamReaderDeprecationNominates.h>
#import <MOVStreamIO/MOVStreamReaderDeprecated.h>

@protocol MOVStreamReaderDelegate;
@class AVURLAsset, AVAssetReader, NSString;

@interface MOVStreamReader : NSObject <MOVStreamReaderDeprecationNominates, MOVStreamReaderDeprecated> {

	AVURLAsset* m_asset;
	AVAssetReader* m_assetReader;
	map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >* m_streamDataMap;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedStreamNames;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedAudioStreamNames;
	map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >* m_metadataDataMap;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedMetadataStreamNames;
	BOOL _l010OutputFormatRAW14L016;
	BOOL _rawBayerMSBReplication;
	id<MOVStreamReaderDelegate> _delegate;

}

@property (assign) BOOL rawBayerMSBReplication; 
@property (__weak) id<MOVStreamReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL l010OutputFormatRAW14L016; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id<MOVStreamReaderDelegate>)delegate;
-(void)setDelegate:(id<MOVStreamReaderDelegate>)arg1 ;
-(double)duration;
-(void)dealloc;
-(id)getAllStreams;
-(id)getAllMetadataStreams;
-(BOOL)containsStream:(id)arg1 ;
-(BOOL)containsMetadataStream:(id)arg1 ;
-(CGSize)getSizeForStream:(id)arg1 ;
-(BOOL)resetReaderTo:(SCD_Struct_MO30)arg1 error:(id*)arg2 ;
-(CVBufferRef)copyNextFrameForStream:(id)arg1 timestamp:(SCD_Struct_MO30*)arg2 error:(id*)arg3 ;
-(CGAffineTransform)transformForStream:(id)arg1 ;
-(BOOL)hasReachedEndOfStream:(id)arg1 ;
-(SCD_Struct_MO30)getMinFrameDurationForStream:(id)arg1 ;
-(id)grabNextMetadataOfStream:(id)arg1 timeRange:(SCD_Struct_MO31*)arg2 ;
-(double)getFrameRateForStream:(id)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)trackMetadataForMetadataStream:(id)arg1 ;
-(id)metadataForMovie;
-(id)grabNextMetadataOfStream:(id)arg1 timeRange:(SCD_Struct_MO31*)arg2 error:(id*)arg3 ;
-(BOOL)rawBayerMSBReplication;
-(BOOL)l010OutputFormatRAW14L016;
-(void)setRawBayerMSBReplication:(BOOL)arg1 ;
-(int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 delegate:(id)arg3 ;
-(id)streamIdFromTrackStreamTypeIdentifier:(id)arg1 ;
-(int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 streamEncodingType:(id)arg3 inputPixelFormat:(unsigned)arg4 delegate:(id)arg5 ;
-(void)movVersionCheck;
-(id)initWithContentsOfURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)findAllAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2 ;
-(id)getKeyFromMetadataTrack:(id)arg1 ;
-(id)movstreamIOMetadataForMovie;
-(id)trackMetadataForStream:(id)arg1 ;
-(id)getMetadataStreamsAssociatedTo:(id)arg1 error:(id*)arg2 ;
-(id)getMetadataStreamsAssociatedTo:(id)arg1 ;
-(id)getUnknownMetadataStreamsAssociatedTo:(id)arg1 ;
-(unsigned)pixelFormatForStream:(id)arg1 ;
-(void)setL010OutputFormatRAW14L016:(BOOL)arg1 ;
-(BOOL)resetReader:(id*)arg1 ;
-(BOOL)endOfStream;
-(id)initWithContentsOfFile:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)getRelatedStreamForStreamId:(id)arg1 ;
-(id)getRelationSpecifierForStreamId:(id)arg1 ;
-(id)getStreamsRelatedToStream:(id)arg1 ;
-(unsigned)getOutputPixelFormatForStream:(id)arg1 ;
-(unsigned long long)trackTypeInfoForStream:(id)arg1 ;
-(id)trackForStream:(id)arg1 ;
-(id)metadataTrackForStream:(id)arg1 ;
-(void)removePixelBufferPadding:(BOOL)arg1 forStream:(id)arg2 ;
-(id)getAllAudioStreams;
-(id)trackMetadataForAudioStream:(id)arg1 ;
-(BOOL)containsAudioStream:(id)arg1 ;
-(opaqueCMSampleBufferRef)grabNextAudioSampleForStream:(id)arg1 timestamp:(SCD_Struct_MO30*)arg2 error:(id*)arg3 ;
-(id)grabNextMetadataItemsOfTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 timeRange:(SCD_Struct_MO31*)arg3 error:(id*)arg4 ;
-(id)grabNextTimedMetadataGroupOfStream:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasFinishedReading;
-(BOOL)hasReachedEndOfMetadataStream:(id)arg1 ;
-(id)findAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2 forKey:(id)arg3 ;
@end

