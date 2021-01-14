/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSURLSession, NSURLCache, NSMutableDictionary, NSObject, UIImage, NSString;

@interface STSImageCache : NSObject <NSURLSessionDownloadDelegate> {

	NSOperationQueue* _operationQueue;
	NSURLSession* _imageSession;
	NSURLCache* _urlCache;
	NSMutableDictionary* _staticImageCache;
	NSMutableDictionary* _firstFrameImageCache;
	NSMutableDictionary* _imageInfoCache;
	NSMutableDictionary* _downloadOperationInfos;
	NSMutableDictionary* _cancelledDownloadOperationInfos;
	NSObject*<OS_dispatch_queue> _queuedOperationsInfoQueue;
	UIImage* _searchProviderImage;

}

@property (nonatomic,retain) UIImage * searchProviderImage;              //@synthesize searchProviderImage=_searchProviderImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)init;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)cancelAllDownloads;
-(void)clearInMemoryCache;
-(void)fetchImageWithURL:(id)arg1 priority:(long long)arg2 isSource:(BOOL)arg3 begin:(/*^block*/id)arg4 progress:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)fetchCachedStaticImageForURL:(id)arg1 ;
-(id)fetchCachedImageInfoForURL:(id)arg1 ;
-(id)fetchCachedStaticImageForURL:(id)arg1 hasMultipleFrames:(BOOL*)arg2 ;
-(UIImage *)searchProviderImage;
-(void)setSearchProviderImage:(UIImage *)arg1 ;
-(void)setPriority:(long long)arg1 forQueuedDownloadWithURL:(id)arg2 ;
-(void)fetchImageDataWithURL:(id)arg1 priority:(long long)arg2 isSource:(BOOL)arg3 begin:(/*^block*/id)arg4 progress:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelQueuedDownloadForURL:(id)arg1 ;
-(BOOL)_allowImageInfoCaching;
-(id)_imageInfoWithData:(id)arg1 ;
-(id)_imageSession;
-(id)_imageInfoUsingAVAssetReaderWithFileURL:(id)arg1 ;
-(id)_imageFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
