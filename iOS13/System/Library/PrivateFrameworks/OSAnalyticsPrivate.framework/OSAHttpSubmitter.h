/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/

#import <OSAnalyticsPrivate/OSASubmitter.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSObject;

@interface OSAHttpSubmitter : OSASubmitter {

	NSURL* _submissionURL;
	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSMutableData* _payload;
	NSObject*<OS_dispatch_semaphore> _submissionSem;
	unsigned _thoughput_warnings;
	double _last_thoughput_check;

}
-(id)initWithEndpoint:(int)arg1 ;
-(void)abort;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)startConnection:(id)arg1 ;
-(void)postContent:(id)arg1 withHeaders:(id)arg2 ;
-(id)submissionURL;
-(void)cleanupConnectionAndDisable:(id)arg1 ;
@end

