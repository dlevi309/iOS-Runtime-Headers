/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator, NSXPCConnection;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;
	NSXPCConnection* _snapshotService;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(BOOL)isLoading;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)_cancel;
-(void)_exitBackground:(id)arg1 ;
-(BOOL)_shouldDefaultToDarkContent;
-(void)_cleanupSnapshotCreator;
-(BOOL)_shouldRenderLogoForSnapshotDimensions;
-(BOOL)_shouldShowDarkContent;
-(void)_failWithError:(id)arg1 ;
-(void)_performSnapshot;
-(BOOL)_isWidget;
-(void)cancel;
-(void)_enterBackground:(id)arg1 ;
-(void)dealloc;
@end

