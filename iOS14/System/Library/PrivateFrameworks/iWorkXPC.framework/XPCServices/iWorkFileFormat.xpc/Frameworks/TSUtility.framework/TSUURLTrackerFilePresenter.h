/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol OS_dispatch_queue, TSUURLTrackerDelegate;
@class NSURL, NSOperationQueue, NSSet, NSObject, NSData, NSError, NSString;

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasStarted;
	NSURL* _URLIfAvailable;
	NSData* _bookmarkDataIfAvailable;
	NSError* _latestError;
	id<TSUURLTrackerDelegate> _delegate;
	NSOperationQueue* _presentedItemOperationQueue;

}

@property (readonly) NSData * bookmarkData; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(id)_description;
-(id)init;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1 ;
-(void)pause;
-(NSData *)bookmarkData;
-(void)stop;
-(id)_bookmarkData;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(void)startOrResume;
-(id)_URLAndReturnError:(id*)arg1 ;
-(id)_bookmarkDataAndReturnError:(id*)arg1 ;
-(id)bookmarkDataAndReturnError:(id*)arg1 ;
@end

