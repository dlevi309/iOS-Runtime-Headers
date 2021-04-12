/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFFileCacheFaultHandler.h>

@class NSArray, NSURLSession, NSString;

@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler> {

	NSArray* _retryIntervals;
	NSURLSession* _urlSession;

}

@property (retain) NSURLSession * urlSession;                       //@synthesize urlSession=_urlSession - In the implementation block
@property (copy) NSArray * retryIntervals;                          //@synthesize retryIntervals=_retryIntervals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)retryIntervals;
-(void)attemptLoadFromURL:(id)arg1 session:(id)arg2 retryIntervalEnumerator:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performLoadFromURL:(id)arg1 session:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRetryIntervals:(NSArray *)arg1 ;
@end

