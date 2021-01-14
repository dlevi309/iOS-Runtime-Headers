/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <SiriUI/SiriUI-Structs.h>
@class NSMutableData, NSObject, UIColor;

@interface SiriUIURLSessionImageDownload : NSObject {

	CGSize _fitToSize;
	NSMutableData* _downloadedData;
	/*^block*/id _progressHandler;
	id _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _renderTimer;
	BOOL _newDataAvailableToRender;
	CGImageSourceRef _imageSource;
	unsigned long long _lastUpdatedLength;
	BOOL _finished;
	BOOL _hasSentFinished;
	UIColor* _backgroundFillColor;

}
-(void)dealloc;
-(void)_updateImageFromURL:(id)arg1 error:(id)arg2 ;
-(id)initWithFitToSize:(CGSize)arg1 progressHandler:(/*^block*/id)arg2 incremental:(BOOL)arg3 client:(id)arg4 fillColor:(id)arg5 ;
-(void)appendDownloadedData:(id)arg1 fromURL:(id)arg2 ;
-(void)finishedFromURL:(id)arg1 error:(id)arg2 ;
@end

