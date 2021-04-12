/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportTask;
@class CPLResource;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {

	BOOL _backgroundTask;
	CPLResource* _cloudResource;
	id<CPLEngineTransportTask> _transportTask;

}

@property (nonatomic,retain) CPLResource * cloudResource;                              //@synthesize cloudResource=_cloudResource - In the implementation block
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask;              //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) id<CPLEngineTransportTask> transportTask;                 //@synthesize transportTask=_transportTask - In the implementation block
-(CPLResource *)cloudResource;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id<CPLEngineTransportTask>)transportTask;
-(void)setTransportTask:(id<CPLEngineTransportTask>)arg1 ;
-(BOOL)isBackgroundTask;
-(void)setBackgroundTask:(BOOL)arg1 ;
@end

