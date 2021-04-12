/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSUResourceFileURLProvider.h>
#import <TSPersistence/TSUResourceRequest.h>
#import <TSPersistence/TSUResourceRequestObservable.h>

@protocol OS_dispatch_queue, TSUResourceRequest;
@class NSSet, TSPDocumentResourceCache, TSUObserverNotifier, NSObject, NSString, NSProgress;

@interface TSPDocumentResourceRequest : NSObject <TSUResourceFileURLProvider, TSUResourceRequest, TSUResourceRequestObservable> {

	TSPDocumentResourceCache* _documentResourceCache;
	NSSet* _documentResourceInfos;
	NSSet* _tags;
	TSUObserverNotifier* _observerNotifier;
	NSObject*<OS_dispatch_queue> _accessQueue;
	id<TSUResourceRequest> _accessQueue_backingResourceRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long estimatedDownloadSize; 
@property (readonly) NSSet * tags; 
@property (readonly) NSProgress * progress; 
-(void)addObserver:(id)arg1 ;
-(NSSet *)tags;
-(NSProgress *)progress;
-(id)init;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)estimatedDownloadSize;
-(id)fileURLForResourceInfo:(id)arg1 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performResourceAccessUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDocumentResourceInfos:(id)arg1 tags:(id)arg2 documentResourceCache:(id)arg3 ;
-(id)initWithDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2 ;
-(id)newBackingResourceRequestForDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2 ;
-(void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)remoteURLForDocumentResourceInfo:(id)arg1 ;
-(id)urlForResourceInfo:(id)arg1 ;
@end

