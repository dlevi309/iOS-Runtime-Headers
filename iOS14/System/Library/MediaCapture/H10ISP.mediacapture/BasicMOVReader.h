/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/


#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
@class AVAssetReader, AVAssetReaderTrackOutput;

@interface BasicMOVReader : NSObject {

	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _output;
	BOOL _hasReachedEndOfStream;

}

@property (readonly) BOOL hasReachedEndOfStream;              //@synthesize hasReachedEndOfStream=_hasReachedEndOfStream - In the implementation block
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(CVBufferRef)getNextFrameTimestamp:(SCD_Struct_Ba6*)arg1 error:(id*)arg2 ;
-(BOOL)hasReachedEndOfStream;
@end

