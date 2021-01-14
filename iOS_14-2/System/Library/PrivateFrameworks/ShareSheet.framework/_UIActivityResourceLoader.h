/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface _UIActivityResourceLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _loadBlock;
	NSObject*<OS_dispatch_group> _group;
	id _resource;

}
-(void)_loadResourceWithBlock:(/*^block*/id)arg1 ;
-(void)loadResourceIfNeeded;
-(void)_getResourceWithBlock:(/*^block*/id)arg1 ;
-(void)getResourceWithBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 loadBlock:(/*^block*/id)arg2 ;
@end

