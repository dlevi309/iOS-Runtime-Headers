/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportTask;
@class NSObject, CPLResource;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportTask> _transportTask;
	CPLResource* _cloudResource;
	/*^block*/id _launchHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) id launchHandler;                  //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CPLResource * cloudResource;              //@synthesize cloudResource=_cloudResource - In the implementation block
+(id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)launch;
-(id)completionHandler;
-(void)cancelTask;
-(CPLResource *)cloudResource;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id)launchHandler;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishWithData:(id)arg1 error:(id)arg2 ;
-(void)launchTransportTask:(id)arg1 ;
@end

