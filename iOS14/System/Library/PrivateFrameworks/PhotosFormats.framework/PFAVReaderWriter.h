/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/PFRWSampleBufferChannelDelegate.h>

@protocol OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;
@class NSObject, AVAssetReader, AVAssetWriter, NSArray, AVAsset, AVAssetWriterInput, NSURL, NSString;

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate> {

	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	AVAssetReader* assetReader;
	AVAssetWriter* assetWriter;
	NSArray* videoChannels;
	NSArray* passthroughChannels;
	BOOL cancelled;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	BOOL _writeInProgress;
	SCD_Struct_PF3 _stillImagetime;
	id<PFAVReaderWriterAdjustDelegate> _delegate;
	AVAsset* _asset;
	AVAssetWriterInput* _metadataInput;
	NSURL* _outputURL;
	SCD_Struct_PF4 _timeRange;

}

@property (nonatomic,copy) AVAsset * asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * metadataInput;                              //@synthesize metadataInput=_metadataInput - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF4 timeRange;                                        //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                                                 //@synthesize outputURL=_outputURL - In the implementation block
@property (assign,nonatomic,__weak) id<PFAVReaderWriterAdjustDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAsset:(AVAsset *)arg1 ;
-(id)init;
-(id<PFAVReaderWriterAdjustDelegate>)delegate;
-(void)setTimeRange:(SCD_Struct_PF4)arg1 ;
-(AVAsset *)asset;
-(SCD_Struct_PF4)timeRange;
-(NSURL *)outputURL;
-(void)setDelegate:(id<PFAVReaderWriterAdjustDelegate>)arg1 ;
-(void)writeToURL:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAsset:(id)arg1 stillImageTime:(SCD_Struct_PF3)arg2 ;
-(id)initWithAsset:(id)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)cancel;
-(void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(opaqueCMSampleBufferRef)arg2 andMadeWriteSampleBuffer:(CVBufferRef)arg3 ;
-(void)_didLoadAVAssetValues;
-(BOOL)setUpReaderAndWriterReturningError:(id*)arg1 ;
-(BOOL)startReadingAndWritingReturningError:(id*)arg1 ;
-(void)readingAndWritingDidFinishSuccessfully:(BOOL)arg1 withError:(id)arg2 ;
-(AVAssetWriterInput *)metadataInput;
-(void)setMetadataInput:(AVAssetWriterInput *)arg1 ;
@end

