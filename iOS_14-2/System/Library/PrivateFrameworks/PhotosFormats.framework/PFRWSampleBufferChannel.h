/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterInput, AVAssetReaderOutput, AVAssetWriterInputPixelBufferAdaptor;

@interface PFRWSampleBufferChannel : NSObject {

	/*^block*/id completionHandler;
	NSObject*<OS_dispatch_queue> serializationQueue;
	BOOL _useAdaptor;
	BOOL _finished;
	AVAssetWriterInput* _assetWriterInput;
	AVAssetReaderOutput* _assetReaderOutput;
	AVAssetWriterInputPixelBufferAdaptor* _adaptor;

}

@property (assign,nonatomic) BOOL useAdaptor;                                             //@synthesize useAdaptor=_useAdaptor - In the implementation block
@property (assign,nonatomic) BOOL finished;                                               //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * assetWriterInput;                       //@synthesize assetWriterInput=_assetWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetReaderOutput * assetReaderOutput;                     //@synthesize assetReaderOutput=_assetReaderOutput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * adaptor;              //@synthesize adaptor=_adaptor - In the implementation block
-(BOOL)finished;
-(id)init;
-(AVAssetWriterInput *)assetWriterInput;
-(void)setFinished:(BOOL)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)adaptor;
-(void)cancel;
-(id)initWithAssetReaderOutput:(id)arg1 assetWriterInput:(id)arg2 useAdaptor:(BOOL)arg3 ;
-(void)callCompletionHandlerIfNecessary;
-(void)startWithDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)useAdaptor;
-(void)setUseAdaptor:(BOOL)arg1 ;
-(void)setAssetWriterInput:(AVAssetWriterInput *)arg1 ;
-(AVAssetReaderOutput *)assetReaderOutput;
-(void)setAssetReaderOutput:(AVAssetReaderOutput *)arg1 ;
-(void)setAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
@end

