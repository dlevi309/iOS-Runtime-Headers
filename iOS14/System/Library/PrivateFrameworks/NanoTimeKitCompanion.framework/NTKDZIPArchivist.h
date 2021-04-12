/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NTKDZIPArchivist : NSObject {

	NSObject*<OS_dispatch_queue> _unzipQueue;

}
-(id)init;
-(void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)zippedDataForPath:(id)arg1 ;
@end

