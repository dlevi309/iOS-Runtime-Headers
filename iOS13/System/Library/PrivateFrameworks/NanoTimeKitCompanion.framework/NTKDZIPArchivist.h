/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

