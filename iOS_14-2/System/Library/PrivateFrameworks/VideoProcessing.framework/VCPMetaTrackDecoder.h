/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor;

@interface VCPMetaTrackDecoder : NSObject {

	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _readerOutput;
	AVAssetReaderOutputMetadataAdaptor* _readerOutputAdaptor;

}
-(id)initWithTrack:(id)arg1 ;
-(id)copyNextMetadataGroup;
-(long long)status;
-(void)dealloc;
@end

