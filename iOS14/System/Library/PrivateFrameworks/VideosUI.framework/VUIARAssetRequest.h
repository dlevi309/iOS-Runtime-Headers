/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSURL, NSString, NSURLSessionDownloadTask;

@interface VUIARAssetRequest : NSObject {

	BOOL _isDownloading;
	NSURL* _remoteURL;
	NSURL* _shareURL;
	NSString* _fileName;
	NSURLSessionDownloadTask* _task;
	/*^block*/id _completionHandler;
	NSString* _cacheKey;

}

@property (nonatomic,retain) NSString * fileName;                          //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                            //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                             //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
-(NSString *)cacheKey;
-(NSURL *)shareURL;
-(NSURLSessionDownloadTask *)task;
-(NSURL *)remoteURL;
-(void)setIsDownloading:(BOOL)arg1 ;
-(void)cancelDownload;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)setTask:(NSURLSessionDownloadTask *)arg1 ;
-(id)completionHandler;
-(NSString *)fileName;
-(BOOL)isDownloading;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)cachePath;
-(void)recordLog:(id)arg1 ;
-(id)cacheDownloadedFileFromLocation:(id)arg1 ;
-(id)initWithRemoteURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3 ;
-(void)startDownloadWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_prefixForString:(id)arg1 ;
@end

