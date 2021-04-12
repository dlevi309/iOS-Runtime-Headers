/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/_DASExtensionRunner.h>

@protocol NSObject, OS_dispatch_queue;
@class _DASActivity, MLBackgroundTask, NSObject, NSString;

@interface MLBackgroundRunner : NSObject <_DASExtensionRunner> {

	BOOL _shouldStop;
	_DASActivity* _activity;
	MLBackgroundTask* _task;
	id<NSObject> _dataSource;
	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign) BOOL shouldStop;                                         //@synthesize shouldStop=_shouldStop - In the implementation block
@property (nonatomic,retain) _DASActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) MLBackgroundTask * task;                       //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) id<NSObject> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> watchdogQueue;              //@synthesize watchdogQueue=_watchdogQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)stop;
-(unsigned char)start;
-(_DASActivity *)activity;
-(void)setActivity:(_DASActivity *)arg1 ;
-(id<NSObject>)dataSource;
-(void)setDataSource:(id<NSObject>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MLBackgroundTask *)task;
-(void)setTask:(MLBackgroundTask *)arg1 ;
-(BOOL)prepareForActivity:(id)arg1 ;
-(BOOL)createExtensionDataSourceWithInfoKey:(id)arg1 conformingToProtocol:(id)arg2 ;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)watchdogQueue;
-(void)setWatchdogQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

