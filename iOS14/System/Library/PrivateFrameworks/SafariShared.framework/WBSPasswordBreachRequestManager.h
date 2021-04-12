/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSPasswordBreachContext, NSURLSession, NSOperationQueue;

@interface WBSPasswordBreachRequestManager : NSObject {

	WBSPasswordBreachContext* _context;
	NSURLSession* _session;
	NSOperationQueue* _fetchOperationQueue;

}
-(id)initWithContext:(id)arg1 ;
-(void)fetchHighFrequencyBucketWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchLowFrequencyBucketsForBucketIdentifiersAndClientBlindedHashes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_buildRequestWithURL:(id)arg1 headers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchBucketAtURL:(id)arg1 withClientBlindedHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

