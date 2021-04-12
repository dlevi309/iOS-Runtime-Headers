/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(id)init;
-(NSString *)description;
-(void)pause;
-(void)stop;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(id)_description;
-(id)_bookmarkData;
-(NSData *)bookmarkData;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(void)startOrResume;
-(id)_URLAndReturnError:(id*)arg1 ;
-(id)_bookmarkDataAndReturnError:(id*)arg1 ;
-(id)bookmarkDataAndReturnError:(id*)arg1 ;
@end

