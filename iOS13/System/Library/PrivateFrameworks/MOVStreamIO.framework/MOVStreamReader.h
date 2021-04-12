/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol MOVStreamReaderDelegate;
#import <MOVStreamIO/MOVStreamIO-Structs.h>
@class AVURLAsset, AVAssetReader;

@interface MOVStreamReader : NSObject {

	AVURLAsset* m_asset;
	AVAssetReader* m_assetReader;
	map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >* m_streamDataMap;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedStreamNames;
	map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >* m_metadataDataMap;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedMetadataStreamNames;
	BOOL _l010OutputFormatRAW14L016;
	BOOL _rawBayerMSBReplication;
	id<MOVStreamReaderDelegate> _delegate;

}

@property (assign) BOOL l010OutputFormatRAW14L016;                    //@synthesize l010OutputFormatRAW14L016=_l010OutputFormatRAW14L016 - In the implementation block
@property (assign) BOOL rawBayerMSBReplication;                       //@synthesize rawBayerMSBReplication=_rawBayerMSBReplication - In the implementation block
@property (retain) id<MOVStreamReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MOVStreamReaderDelegate>)delegate;
-(void)setDelegate:(id<MOVStreamReaderDelegate>)arg1 ;
-(double)duration;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)getAllStreams;
-(id)getAllMetadataStreams;
-(BOOL)containsStream:(id)arg1 ;
-(BOOL)containsMetadataStream:(id)arg1 ;
-(CGSize)getSizeForStream:(id)arg1 ;
-(BOOL)resetReaderTo:(SCD_Struct_MO29)arg1 error:(id*)arg2 ;
-(CVBufferRef)copyNextFrameForStream:(id)arg1 timestamp:(SCD_Struct_MO29*)arg2 error:(id*)arg3 ;
-(CGAffineTransform)transformForStream:(id)arg1 ;
-(BOOL)hasReachedEndOfStream:(id)arg1 ;
-(SCD_Struct_MO29)getMinFrameDurationForStream:(id)arg1 ;
-(id)grabNextMetadataOfStream:(id)arg1 timeRange:(SCD_Struct_MO34*)arg2 ;
-(id)metadataForMovie;
-(double)getFrameRateForStream:(id)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)grabNextMetadataOfStream:(id)arg1 timeRange:(SCD_Struct_MO34*)arg2 error:(id*)arg3 ;
-(int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 delegate:(id)arg3 ;
-(id)streamIdFromTrackStreamTypeIdentifier:(id)arg1 ;
-(int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 streamEncodingType:(id)arg3 inputPixelFormat:(unsigned)arg4 delegate:(id)arg5 ;
-(id)findAllAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2 ;
-(id)getKeyFromMetadataTrack:(id)arg1 ;
-(id)movstreamIOMetadataForMovie;
-(void)setRawBayerMSBReplication:(BOOL)arg1 ;
-(void)setL010OutputFormatRAW14L016:(BOOL)arg1 ;
-(BOOL)resetReader:(id*)arg1 ;
-(id)getRelatedStreamForStreamId:(id)arg1 ;
-(id)getRelationSpecifierForStreamId:(id)arg1 ;
-(id)getStreamsRelatedToStream:(id)arg1 ;
-(id)trackMetadataForStream:(id)arg1 ;
-(unsigned long long)trackTypeInfoForStream:(id)arg1 ;
-(id)trackForStream:(id)arg1 ;
-(unsigned)pixelFormatForStream:(id)arg1 ;
-(void)removePixelBufferPadding:(BOOL)arg1 forStream:(id)arg2 ;
-(id)getUnknownMetadataStreamsAssociatedTo:(id)arg1 ;
-(id)grabNextMetadataItemsOfTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 timeRange:(SCD_Struct_MO34*)arg3 error:(id*)arg4 ;
-(BOOL)endOfStream;
-(BOOL)hasFinishedReading;
-(BOOL)hasReachedEndOfMetadataStream:(id)arg1 ;
-(id)findAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2 forKey:(id)arg3 ;
-(BOOL)l010OutputFormatRAW14L016;
-(BOOL)rawBayerMSBReplication;
@end

