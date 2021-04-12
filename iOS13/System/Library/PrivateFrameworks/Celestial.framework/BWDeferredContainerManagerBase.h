/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BWDeferredContainerManagerBase : NSObject {

	NSObject*<OS_dispatch_queue> _containerQueue;

}
+(void)initialize;
-(void)dealloc;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(id)initWithQueuePriority:(unsigned)arg1 ;
-(id)_containerPathForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 pathExists:(BOOL*)arg3 isDirectory:(BOOL*)arg4 ;
-(BOOL)_insertUniqueManifestIntoTimeSortedArray:(id)arg1 manifestArray:(id)arg2 ;
-(id)manifestForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
@end

