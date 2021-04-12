/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, BRCRelativePath;

@interface BRCAsyncDirectoryEnumerator : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	long long _batchSize;
	BOOL _isRecursive;
	int _error;
	BRCRelativePath* _rootPath;

}

@property (nonatomic,readonly) BRCRelativePath * rootPath;              //@synthesize rootPath=_rootPath - In the implementation block
-(void)dealloc;
-(BRCRelativePath *)rootPath;
-(id)initForEnumeratingBelow:(id)arg1 recursive:(BOOL)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4 ;
-(void)scheduleWithProcessBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

