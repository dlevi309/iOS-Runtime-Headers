/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSURL, NSOperationQueue, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {

	NSURL* _url;
	NSOperationQueue* _fetchOperationQueue;
	NSURLSession* _session;
	/*^block*/id _completion;

}
-(id)initWithURL:(id)arg1 ;
-(void)checkReliabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)cancel;
@end

