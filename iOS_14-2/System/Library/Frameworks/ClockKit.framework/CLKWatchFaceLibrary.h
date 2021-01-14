/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CLKWatchFaceLibrary : NSObject {

	NSObject*<OS_dispatch_queue> _helperQueue;

}
+(id)sharedInstance;
+(id)errorWithCode:(long long)arg1 ;
+(BOOL)_unzipFile:(id)arg1 toPath:(id)arg2 ;
-(id)init;
-(void)addWatchFaceAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addWatchFaceAtURL:(id)arg1 shouldValidate:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_importWatchFaceAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_validateWatchFaceAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

