/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


#import <LinkPresentation/LinkPresentation-Structs.h>
@class LPImage, NSURL, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter, AVAssetWriterInput;

@interface LPAnimatedImageTranscoder : NSObject {

	LPImage* _sourceImage;
	/*^block*/id _completionHandler;
	CGImageSourceRef _imageSource;
	NSURL* _outputURL;
	unsigned long long _frameCount;
	unsigned long long _currentFrame;
	double _nextFrameTime;
	AVAssetWriterInputPixelBufferAdaptor* _adaptor;
	AVAssetWriter* _writer;
	AVAssetWriterInput* _input;
	BOOL _stopEncoding;
	BOOL _hasReadyForDataObserver;
	unsigned _loggingID;

}
+(id)encodeQueue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)transcodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)failed;
-(void)_transcodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeUntilNotReadyForMoreMediaData;
-(void)removeReadyForDataObserverIfNeeded;
-(void)encodeNextFrame;
-(id)initWithAnimatedImage:(id)arg1 ;
-(void)cancel;
@end

