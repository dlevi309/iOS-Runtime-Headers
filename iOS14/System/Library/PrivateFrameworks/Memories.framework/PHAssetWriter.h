/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class PHAssetRepresentation, NSURL;

@interface PHAssetWriter : NSObject {

	BOOL _networkAccessAllowed;
	BOOL _stop;
	PHAssetRepresentation* _assetRepresentation;
	NSURL* _destinationURL;
	NSURL* _sourceUrl;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PHAssetRepresentation * assetRepresentation;              //@synthesize assetRepresentation=_assetRepresentation - In the implementation block
@property (nonatomic,retain) NSURL * sourceUrl;                                        //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (assign) BOOL stop;                                                          //@synthesize stop=_stop - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) BOOL networkAccessAllowed;                                //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
+(id)assetWriterForIdentifierURL:(id)arg1 ;
+(id)assetWriterForAssetRepresentation:(id)arg1 ;
-(id)write;
-(NSURL *)destinationURL;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)setStop:(BOOL)arg1 ;
-(BOOL)networkAccessAllowed;
-(id)completionHandler;
-(BOOL)stop;
-(id)request;
-(id)initWithSourceURL:(id)arg1 ;
-(NSURL *)sourceUrl;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)transfer;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)progressHandler;
-(void)stopWriting;
-(id)initWithAssetRepresentation:(id)arg1 ;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(void)setAssetRepresentation:(PHAssetRepresentation *)arg1 ;
-(void)startWritingWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PHAssetRepresentation *)assetRepresentation;
@end

