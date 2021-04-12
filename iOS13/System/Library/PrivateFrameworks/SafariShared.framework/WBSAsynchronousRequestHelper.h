/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/WBSAsynchronousRequest.h>

@class NSOperationQueue, NSURLConnection, NSURLResponse, NSMutableData, NSString;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest> {

	NSOperationQueue* _queue;
	/*^block*/id _handler;
	NSURLConnection* _connection;
	NSURLResponse* _response;
	NSMutableData* _data;
	id _lifetimeExtender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)sendRequest;
-(id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

