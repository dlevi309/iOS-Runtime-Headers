/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/XBApplicationSnapshotImageGenerationScheduling.h>

@protocol OS_dispatch_workloop, OS_dispatch_queue;
@class NSObject, NSString;

@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling> {

	NSObject*<OS_dispatch_workloop> _imageGenerationWorkloop;
	NSObject*<OS_dispatch_queue> _imageGenerationQueue;
	NSObject*<OS_dispatch_workloop> _dataGenerationWorkloop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)performImageGenerationAsync:(/*^block*/id)arg1 ;
-(id)_init;
-(void)performImageGenerationAsyncAndWait:(/*^block*/id)arg1 ;
-(void)performImageDataGenerationAsyncAndWait:(/*^block*/id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)performImageDataGenerationAsync:(/*^block*/id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

