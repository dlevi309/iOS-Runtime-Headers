/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BRCRelativePath *)rootPath;
-(void)dealloc;
-(id)initForEnumeratingBelow:(id)arg1 recursive:(BOOL)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4 ;
-(void)scheduleWithProcessBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

