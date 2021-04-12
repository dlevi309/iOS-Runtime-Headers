/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportTask;
@class CPLResource;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {

	BOOL _backgroundTask;
	CPLResource* _cloudResource;
	id<CPLEngineTransportTask> _transportTask;
	/*^block*/id _launchHandler;
	/*^block*/id _cancelHandler;
	/*^block*/id _didStartHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CPLResource * cloudResource;                              //@synthesize cloudResource=_cloudResource - In the implementation block
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask;              //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) id<CPLEngineTransportTask> transportTask;                 //@synthesize transportTask=_transportTask - In the implementation block
@property (nonatomic,copy,readonly) id launchHandler;                                  //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,copy,readonly) id cancelHandler;                                  //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy,readonly) id didStartHandler;                                //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,copy,readonly) id progressHandler;                                //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)launch;
-(id)progressHandler;
-(id)completionHandler;
-(id)cancelHandler;
-(void)cancelTask;
-(id)didStartHandler;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 cancelHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(CPLResource *)cloudResource;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id<CPLEngineTransportTask>)transportTask;
-(void)setTransportTask:(id<CPLEngineTransportTask>)arg1 ;
-(id)launchHandler;
-(BOOL)isBackgroundTask;
-(void)setBackgroundTask:(BOOL)arg1 ;
@end

