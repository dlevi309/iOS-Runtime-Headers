/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIImageLoader.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _UILoadingHandlerImageLoader : _UIImageLoader {

	NSObject*<OS_dispatch_queue> _loadingQueue;
	/*^block*/id _loadingHandler;

}
-(id)initWithLoadingQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
@end

