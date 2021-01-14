/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol XBApplicationSnapshotImageGenerationScheduling, XBSnapshotDataProvider;
#import <SplashBoard/SplashBoard-Structs.h>
@class XBApplicationSnapshot, NSString;

@interface XBApplicationSnapshotImageGenerator : NSObject {

	XBApplicationSnapshot* _weak_snapshot;
	id<XBApplicationSnapshotImageGenerationScheduling> _scheduler;
	id<XBSnapshotDataProvider> _dataProvider;
	/*^block*/id _didGenerateImageHandler;
	/*^block*/id _didGenerateImageDataHandler;
	NSString* _loggingPrefix;
	BOOL _generate_handled_request;
	os_unfair_lock_s _generate_lock;
	long long _imageDataRequest;
	long long _dataProviderFetchType;

}
-(id)_generate_imageFromLegacyDataProvider:(id)arg1 forSnapshot:(id)arg2 imageDataHandler:(/*^block*/id)arg3 ;
-(id)initWithScheduler:(id)arg1 snapshot:(id)arg2 dataProvider:(id)arg3 imageDataRequest:(long long)arg4 loggingPrefix:(id)arg5 imageGenerationHandler:(/*^block*/id)arg6 imageDataGenerationHandler:(/*^block*/id)arg7 ;
-(id)_generate_imageFromNewDataProvider:(id)arg1 forSnapshot:(id)arg2 imageDataHandler:(/*^block*/id)arg3 ;
-(void)scheduleGeneration;
-(void)generate;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)_generate;
-(void)_performImageDataGeneration:(/*^block*/id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldGenerateForSnapshot:(id)arg1 reason:(id*)arg2 ;
-(BOOL)_generate_lock_shouldGenerateForSnapshot:(id)arg1 reason:(id*)arg2 ;
@end

