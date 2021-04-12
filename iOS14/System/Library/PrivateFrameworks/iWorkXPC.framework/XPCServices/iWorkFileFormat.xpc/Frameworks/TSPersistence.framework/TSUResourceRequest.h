/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class NSSet;


@protocol TSUResourceRequest <NSProgressReporting>
@property (readonly) unsigned long long estimatedDownloadSize; 
@property (readonly) NSSet * tags; 
@required
-(NSSet *)tags;
-(unsigned long long)estimatedDownloadSize;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performResourceAccessUsingQueue:(id)arg1 block:(/*^block*/id)arg2;
-(void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(/*^block*/id)arg2;

@end

