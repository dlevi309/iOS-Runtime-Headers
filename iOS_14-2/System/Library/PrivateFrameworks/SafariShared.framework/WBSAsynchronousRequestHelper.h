/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendRequest;
-(void)cancel;
-(void)dealloc;
@end

