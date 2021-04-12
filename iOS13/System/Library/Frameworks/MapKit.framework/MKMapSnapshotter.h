/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)cancel;
-(void)_failWithError:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancel;
-(BOOL)isLoading;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_performSnapshot;
-(void)_cleanupSnapshotCreator;
-(void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
-(BOOL)_shouldShowDarkContent;
-(void)_succeedWithSnapshot:(id)arg1 ;
@end

