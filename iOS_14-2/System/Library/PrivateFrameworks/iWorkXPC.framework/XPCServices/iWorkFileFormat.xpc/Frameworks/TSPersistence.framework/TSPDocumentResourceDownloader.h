/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
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
