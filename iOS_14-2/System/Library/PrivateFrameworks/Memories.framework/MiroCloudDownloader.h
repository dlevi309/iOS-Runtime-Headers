/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProgressBlock:(id)arg1 ;
-(float)progress;
-(NSMutableArray *)requests;
-(void)cancelDownloads;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(id)initWithAssets:(id)arg1 ;
-(id)progressBlock;
-(void)startDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)nonLocalCount;
-(double)totalInitialDownloadSize;
-(void)setItemCompletedBlock:(id)arg1 ;
-(void)setTotalInitialDownloadSize:(double)arg1 ;
-(NSArray *)localAssets;
-(id)itemCompletedBlock;
-(NSObject*<OS_dispatch_queue>)cancellationQueueFor26820423;
@end

