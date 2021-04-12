/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancelTask;
-(id)completionHandler;
-(id)launchHandler;
-(CPLResource *)cloudResource;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id)initWithResource:(id)arg1 taskIdentifier:(id)arg2 launchHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishWithData:(id)arg1 error:(id)arg2 ;
-(void)launchTransportTask:(id)arg1 ;
@end

