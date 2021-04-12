/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray, NSArray;

@interface MiroCloudDownloader : NSObject {

	float _progress;
	/*^block*/id _progressBlock;
	/*^block*/id _itemCompletedBlock;
	double _totalInitialDownloadSize;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;                                      //@synthesize requests=_requests - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> cancellationQueueFor26820423; 
@property (assign,nonatomic) double totalInitialDownloadSize;                                //@synthesize totalInitialDownloadSize=_totalInitialDownloadSize - In the implementation block
@property (nonatomic,readonly) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSArray * localAssets; 
@property (nonatomic,copy) id progressBlock;                                                 //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id itemCompletedBlock;                                            //@synthesize itemCompletedBlock=_itemCompletedBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long nonLocalCount; 
+(id)cloudDownloaderWithAssets:(id)arg1 ;
-(float)progress;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)cancelDownloads;
-(id)initWithAssets:(id)arg1 ;
-(void)startDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)localAssets;
-(unsigned long long)nonLocalCount;
-(void)setItemCompletedBlock:(id)arg1 ;
-(double)totalInitialDownloadSize;
-(void)setTotalInitialDownloadSize:(double)arg1 ;
-(id)itemCompletedBlock;
-(NSObject*<OS_dispatch_queue>)cancellationQueueFor26820423;
@end

