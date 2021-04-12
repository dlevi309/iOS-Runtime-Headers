/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSPDocumentResourceDownloader <NSObject>
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) BOOL isEstimatedDownloadSizePrecise; 
@required
-(BOOL)needsDownload;
-(long long)estimatedDownloadSize;
-(BOOL)isEstimatedDownloadSizePrecise;

@end

